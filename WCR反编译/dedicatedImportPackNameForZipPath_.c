// dedicatedImportPackNameForZipPath: @ 0108af04

/* Function Stack Size: 0x18 bytes */

ID WCRefineLocalEmoticonStore::dedicatedImportPackNameForZipPath_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ID IVar3;
  ulong local_60;
  ulong local_50;
  ID local_48;
  bool local_39;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_39 = false;
  if (uVar2 == 0) {
    local_60 = local_28;
  }
  else {
    local_60 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_60;
  }
  local_39 = uVar2 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_60;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_packNameFromZipFileName__026ae398,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar3;
  FUN_0108b178();
  if ((IVar3 & 1) == 0) goto LAB_0108b0fc;
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stringByDeletingPathExtension_0269fd18);
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
LAB_0108b0d8:
    _objc_storeStrong(&local_48,&cf__eQh_S);
  }
  else {
    uVar1 = local_50;
    FUN_0108b178();
    if ((uVar1 & 1) != 0) goto LAB_0108b0d8;
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&::cf_W);
    if ((uVar1 & 1) != 0) goto LAB_0108b0d8;
    _objc_storeStrong(&local_48,local_50);
  }
  _objc_storeStrong(&local_50,0);
LAB_0108b0fc:
  IVar3 = local_48;
  FUN_0108b178();
  if ((IVar3 & 1) != 0) {
    _objc_storeStrong(&local_48,&cf__eQh_S);
  }
  IVar3 = local_48;
  FUN_0108688c();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar3;
}

