// FUN_00064aa8 @ 00064aa8

void FUN_00064aa8(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_38;
  undefined4 local_30;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  local_19 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_30 = 1;
  }
  else {
    FUN_0006538c();
    uVar1 = DAT_028c7c38;
    local_38 = 0;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c7c48,PTR_s_removeObject__0269d678,local_18);
    if ((local_19 & 1) != 0) {
      uVar3 = DAT_028c7c40;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028c7c40,PTR_s_containsObject__0269cbb8,local_18);
      if ((uVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028c7c40,PTR_s_addObject__0269d180,local_18);
        uVar4 = DAT_028c7c40;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028c7c40,PTR_s_allObjects_0269d228);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_38;
        local_38 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
    }
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_38 != 0) {
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    _objc_storeStrong(&local_38,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

