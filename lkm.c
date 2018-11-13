/*  Simple Linux Kernel Module */

#include <linux/module.h>
#include <sys/asoundlib.h>


int init_module()
{
        int rtn = 0;
	snd_pcm_t handle = 0;
	printk(KERN_ALERT "LKM init\n");
       
        if ((rtn = snd_pcm_open(&handle, "/dev/snd/pcmC0D0p", SND_PCM_OPEN_PLAYBACK)) < 0){
		printk(KERN_ALERT "ERRORRRRR: open");
		return 1;
	}
	printk(KERN_ALERT "LOLLLOL");
        return 0;
}

void cleanup_module()
{
        printk(KERN_ALERT "LKM stopped\n");
}

