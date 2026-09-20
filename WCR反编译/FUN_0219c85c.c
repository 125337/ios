// FUN_0219c85c @ 0219c85c

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0219c85c(void)

{
  dispatch_queue_t pdVar1;
  dispatch_queue_t pdVar2;
  
  pdVar2 = _dispatch_queue_create("com.qimiao.WCRefine.config.sync",(dispatch_queue_attr_t)0x0);
  pdVar1 = DAT_028e4918;
  DAT_028e4918 = pdVar2;
  (*(code *)PTR__objc_release_02578630)(pdVar1);
  _dispatch_queue_set_specific
            (DAT_028e4918,DAT_028c6af0,(void *)((long)&MACH_HEADER.magic + 1),
             (dispatch_function_t)0x0);
  return;
}

