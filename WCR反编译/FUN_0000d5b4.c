// FUN_0000d5b4 @ 0000d5b4

void FUN_0000d5b4(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [8];
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined *local_48;
  undefined4 local_40;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar1;
  if ((uVar1 == 0) || (FUN_0000d980(uVar1,&DAT_028c79f0), (uVar1 & 1) != 0)) {
    local_40 = 1;
  }
  else {
    puVar2 = PTR_WCRefinePageLockGuard_026ce020;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePageLockGuard_026ce020,PTR_s_sharedGuard_0269cdc8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      local_40 = 1;
    }
    else {
      FUN_0000da68(local_30);
      uVar1 = local_30;
      FUN_0000d980(local_30,&DAT_028c79f1);
      if ((uVar1 & 1) == 0) {
        FUN_0000f54c(local_30,&DAT_028c79f1,1);
        _objc_initWeak(auStack_50,local_30);
        puVar4 = PTR_WCRefinePageLockGuard_026ce020;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefinePageLockGuard_026ce020,PTR_s_sharedGuard_0269cdc8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_48;
        puVar2 = PTR___NSConcreteStackBlock_02578660;
        local_78 = PTR___NSConcreteStackBlock_02578660;
        local_70 = 0xc2000000;
        local_6c = 0;
        local_68 = FUN_0000f660;
        local_60 = &DAT_02578da0;
        _objc_copyWeak();
        local_a0 = puVar2;
        local_98 = 0xc2000000;
        local_94 = 0;
        local_90 = FUN_0000f874;
        local_88 = &DAT_02578da0;
        _objc_copyWeak(auStack_80,auStack_50);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_authenticateForKey_scope_reason__0269cdd0,puVar3,1,&cf_NTgwJ_YU_,
                   &local_78,&local_a0);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(auStack_58);
        _objc_destroyWeak(auStack_50);
        local_40 = 0;
      }
      else {
        local_40 = 1;
      }
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

