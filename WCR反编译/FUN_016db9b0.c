// FUN_016db9b0 @ 016db9b0

void FUN_016db9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_20;
  local_30 = param_1;
  if (local_28 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar1 = local_20;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_saveSelectedImage_type_isDark__026b3110,uVar1
                 ,*(undefined8 *)(param_1 + 0x28),*(byte *)(param_1 + 0x30) & 1);
      _objc_storeStrong(&local_40,0);
      local_34 = 0;
      goto LAB_016dbab0;
    }
  }
  local_34 = 1;
LAB_016dbab0:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

