// FUN_010eb6b0 @ 010eb6b0

void FUN_010eb6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) != 0) &&
     (uVar2 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,param_3),
     (uVar2 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,local_18,param_3);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

