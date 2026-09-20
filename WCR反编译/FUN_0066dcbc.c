// FUN_0066dcbc @ 0066dcbc

void FUN_0066dcbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  dispatch_time_t dVar6;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ulong local_68;
  long local_60;
  ulong local_58 [3];
  byte local_3d;
  uint local_3c;
  long local_38;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  if (local_28 == 0) {
    local_3c = 1;
  }
  else {
    uVar2 = local_28;
    FUN_00673698();
    local_3d = (byte)uVar2;
    if (((uVar2 & 1) == 0) && (local_30 != 0)) {
      lVar3 = local_30;
      FUN_0066c6c4();
      local_3d = (byte)lVar3;
    }
    if ((local_3d & 1) == 0) {
      FUN_00657450(&cf_M);
      local_3c = 1;
    }
    else {
      if (local_30 != 0) {
        _objc_setAssociatedObject(local_28,&DAT_028cbc93,local_30,1);
      }
      uVar4 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028cbc94);
      _objc_retainAutoreleasedReturnValue();
      local_58[0] = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_boolValue_026ca540);
      uVar2 = local_28;
      bVar1 = (uVar4 & 1) == 0;
      if (bVar1) {
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar2,&DAT_028cbc94,puVar5,1);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        FUN_00657450(&cf_M);
        dVar6 = _dispatch_time(0,30000000);
        puVar5 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_28;
        local_88 = PTR___NSConcreteStackBlock_02578660;
        local_80 = 0xc2000000;
        local_7c = 0;
        local_78 = FUN_00673b90;
        local_70 = &DAT_02578e60;
        (*(code *)PTR__objc_retain_02578638)();
        lVar3 = local_38;
        local_68 = uVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = lVar3;
        _dispatch_after(dVar6,puVar5,&local_88);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_68,0);
      }
      else {
        FUN_00657450(&cf_M);
      }
      local_3c = (uint)!bVar1;
      _objc_storeStrong(local_58,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

