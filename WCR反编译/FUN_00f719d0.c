// FUN_00f719d0 @ 00f719d0

byte FUN_00f719d0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined *local_80 [4];
  undefined *local_60;
  char *local_58;
  cfstringStruct *local_50;
  char *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  if ((local_30 == 0) || (local_38 == 0)) {
    local_21 = 0;
    local_3c = 1;
  }
  else {
    pcVar1 = "ForwardMessageLogicController";
    _objc_getClass();
    pcVar2 = &cf_ForwardMsg_ToContact_;
    local_48 = pcVar1;
    _NSSelectorFromString();
    local_50 = pcVar2;
    if (local_48 == (char *)0x0) {
      local_21 = 0;
      local_3c = 1;
    }
    else {
      pcVar1 = local_48;
      _objc_alloc_init();
      local_58 = pcVar1;
      if ((pcVar1 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,local_50),
         puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8, ((ulong)pcVar1 & 1) == 0)) {
        local_21 = 0;
        local_3c = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__p__f);
        _objc_retainAutoreleasedReturnValue();
        local_60 = puVar4;
        (*(code *)PTR__objc_release_02578630)();
        FUN_00f71f90();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        _objc_sync_enter();
        FUN_00f71f90();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_sync_exit(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,local_50,local_30,local_38);
        dVar5 = _dispatch_time(0,5000000000);
        puVar4 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_60;
        local_a0 = PTR___NSConcreteStackBlock_02578660;
        local_98 = 0xc2000000;
        local_94 = 0;
        local_90 = FUN_00f72004;
        local_88 = &DAT_0257a800;
        (*(code *)PTR__objc_retain_02578638)();
        local_80[0] = puVar3;
        _dispatch_after(dVar5,puVar4,&local_a0);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_21 = 1;
        local_3c = 1;
        _objc_storeStrong(local_80,0);
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

