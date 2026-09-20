// FUN_01b13b08 @ 01b13b08

void FUN_01b13b08(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [48];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  long local_18;
  
  local_20 = param_3;
  local_18 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_3 + 0x28),PTR_s_draggingDeleteStartCenter_026bebe8);
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_1;
  uStack_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,param_2,*(undefined8 *)(param_3 + 0x20),PTR_s_setCenter__026ca8c0);
  _memcpy(auStack_70,PTR__CGAffineTransformIdentity_025782d8,0x30);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  _memcpy(auStack_a0,auStack_70,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTransform__026caad0,auStack_a0);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,*(undefined8 *)(param_3 + 0x20),PTR_s_setAlpha__026ca860);
  return;
}

