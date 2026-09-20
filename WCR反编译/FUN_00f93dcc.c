// FUN_00f93dcc @ 00f93dcc

void FUN_00f93dcc(void)

{
  dispatch_queue_t pdVar1;
  
  _os_unfair_lock_lock(&DAT_028e2ef0);
  if ((((DAT_028e2fce & 1) == 0) && ((DAT_028e2fcf & 1) == 0)) && ((DAT_028e2ef4 & 1) == 0)) {
    DAT_028e2fce = 1;
    _os_unfair_lock_unlock(&DAT_028e2ef0);
    FUN_00fc5634();
    if ((DAT_028e2fcf & 1) == 0) {
      pdVar1 = _dispatch_get_global_queue(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(pdVar1);
    }
  }
  else {
    _os_unfair_lock_unlock(&DAT_028e2ef0);
  }
  return;
}

