// FUN_007d9c4c @ 007d9c4c

void FUN_007d9c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint local_6c;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineRootViewController);
  local_6c = 1;
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_6c = (uint)puVar4 ^ 1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  if ((local_6c & 1) == 0) {
    uVar5 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_copy_0269d150);
    uVar1 = DAT_028ccd38;
    DAT_028ccd38 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    uVar1 = DAT_028ccd40;
    DAT_028ccd40 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

