// FUN_003c7a00 @ 003c7a00

void FUN_003c7a00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_20;
  FUN_003612b8(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_20;
  uVar3 = local_28;
  if ((uVar1 & 1) == 0) {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_UTF8String_026a2e68);
    FUN_003b3da8(uVar4,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar4 = local_38;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar1 = local_38;
  if ((uVar4 & 1) == 0) {
    uVar4 = local_20;
    FUN_003b3ef4(local_20,local_30,5);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar4;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

