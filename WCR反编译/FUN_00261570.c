// FUN_00261570 @ 00261570

void FUN_00261570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar3;
  ulong uVar4;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulong *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_00264438();
  uVar4 = local_28;
  if ((uVar1 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___UIGestureRecognizer_026ce450;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIGestureRecognizer_026ce450,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
    }
    FUN_00264900(local_18);
  }
  (*DAT_028c94b8)(local_18,local_20,local_28);
  _objc_storeStrong(&local_28,0);
  return;
}

