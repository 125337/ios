// FUN_00694194 @ 00694194

byte FUN_00694194(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  byte local_84;
  ulong local_40;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_URL_026a1c90);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_host_0269dc50);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_84 = 0;
    bVar1 = (uVar4 & 1) != 0;
    if (bVar1) {
      local_40 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_path_0269d4d8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_84 = (byte)uVar4;
    }
    local_11 = local_84 & 1;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

