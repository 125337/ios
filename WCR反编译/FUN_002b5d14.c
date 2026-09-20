// FUN_002b5d14 @ 002b5d14

void FUN_002b5d14(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  long local_18;
  
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  local_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  local_50 = *(undefined8 *)(param_1 + 0x40);
  local_40 = local_60;
  uStack_38 = uStack_58;
  local_30 = local_50;
  uStack_28 = uStack_48;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,uStack_58,local_50,uStack_48,*(undefined8 *)(param_1 + 0x20),
             PTR_s_setFrame__026ca960);
  _memcpy(auStack_90,PTR__CGAffineTransformIdentity_025782d8,0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _memcpy(auStack_c0,auStack_90,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTransform__026caad0,auStack_c0);
  FUN_002af980(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}

