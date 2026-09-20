// FUN_00f93e98 @ 00f93e98

void FUN_00f93e98(void)

{
  dispatch_queue_t pdVar1;
  
  if (((DAT_028e2fe1 & 1) == 0) && ((DAT_028e2ef4 & 1) == 0)) {
    DAT_028e2fe1 = 1;
    pdVar1 = _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(pdVar1);
  }
  return;
}

