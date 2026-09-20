// FUN_008d5be0 @ 008d5be0

void FUN_008d5be0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    _objc_setAssociatedObject(local_18,DAT_026f4ac0,0,1);
    _objc_setAssociatedObject(local_18,DAT_026f4ac8,0,1);
    _objc_setAssociatedObject(local_18,DAT_026f4ad0,0,1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

