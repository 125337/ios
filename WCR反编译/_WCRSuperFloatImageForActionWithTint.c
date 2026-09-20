// _WCRSuperFloatImageForActionWithTint @ 01618f9c

void _WCRSuperFloatImageForActionWithTint(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_58;
  ulong local_50;
  uint local_44;
  ulong local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_20;
  FUN_01619268(local_28,local_20,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
  if (uVar3 != 0) {
    FUN_01619920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_40;
    bVar1 = local_40 != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar3;
    }
    local_44 = (uint)bVar1;
    _objc_storeStrong(&local_40,0);
    if (local_44 != 0) goto LAB_01619230;
  }
  uVar3 = local_20;
  FUN_01619994(local_28,local_20,local_30);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_38;
  local_50 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  bVar2 = false;
  bVar1 = false;
  if ((uVar4 != 0) && (bVar1 = false, local_50 != 0)) {
    local_58 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_images_026ca698);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    uVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = uVar4 < 2;
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)();
    uVar4 = local_58;
  }
  if (bVar1) {
    FUN_01619920();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  uVar3 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = uVar3;
  local_44 = 1;
  _objc_storeStrong(&local_50,0);
LAB_01619230:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

