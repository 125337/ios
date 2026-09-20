// FUN_004fc56c @ 004fc56c

void FUN_004fc56c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong local_a8;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  long local_50 [4];
  long local_30;
  uint local_24;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (((DAT_028caf10 & 1) == 0) && ((DAT_028caf11 & 1) == 0)) {
    local_24 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    lVar5 = local_18;
    uVar4 = local_20;
    if ((((ulong)puVar3 & 1) == 0) || ((DAT_028caf12 & 1) == 0)) {
      local_30 = 0;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar4 & 1) == 0) {
        local_a8 = 0;
      }
      else {
        local_a8 = local_20;
      }
      FUN_004fc82c(lVar5,local_a8);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_30;
      local_30 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      puVar3 = PTR___dispatch_main_q_02578680;
      bVar1 = local_30 != 0;
      if (bVar1) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = local_30;
        local_70 = PTR___NSConcreteStackBlock_02578660;
        local_68 = 0xc2000000;
        local_64 = 0;
        local_60 = FUN_004fd194;
        local_58 = &DAT_0257a800;
        (*(code *)PTR__objc_retain_02578638)();
        local_50[0] = lVar5;
        _dispatch_async(puVar3,&local_70);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(local_50,0);
      }
      local_24 = (uint)!bVar1;
      _objc_storeStrong(&local_30,0);
    }
    else {
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

