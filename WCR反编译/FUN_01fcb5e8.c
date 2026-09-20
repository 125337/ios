// FUN_01fcb5e8 @ 01fcb5e8

void FUN_01fcb5e8(void)

{
  dispatch_time_t dVar1;
  dispatch_queue_t pdVar2;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  DAT_028e4948 = DAT_028e4948 + 1;
  if ((DAT_028e4928 & 1) != 0) {
    local_18 = DAT_028e4948;
    dVar1 = _dispatch_time(0,400000000);
    pdVar2 = _dispatch_get_global_queue(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = PTR___NSConcreteStackBlock_02578660;
    local_38 = 0xc0000000;
    local_34 = 0;
    local_30 = FUN_0219c8d0;
    local_28 = &DAT_02578c00;
    local_20 = local_18;
    _dispatch_after(dVar1,pdVar2,&local_40);
    (*(code *)PTR__objc_release_02578630)(pdVar2);
  }
  return;
}

