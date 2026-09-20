// FUN_0158cdec @ 0158cdec

void FUN_0158cdec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_1b0 [48];
  undefined1 auStack_180 [48];
  undefined1 auStack_150 [48];
  undefined1 auStack_120 [48];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  local_30 = param_5;
  local_28 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_frame_026ca640);
  local_50 = 0;
  local_70 = 0;
  local_90 = 0;
  uStack_88 = param_2;
  local_80 = param_3;
  uStack_78 = param_4;
  uStack_68 = param_2;
  local_60 = param_3;
  uStack_58 = param_4;
  uStack_48 = param_2;
  local_40 = param_3;
  uStack_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x28),PTR_s_frame_026ca640);
  local_b0 = 0;
  local_d0 = 0;
  local_f0 = 0;
  uStack_e8 = param_2;
  local_e0 = param_3;
  uStack_d8 = param_4;
  uStack_c8 = param_2;
  local_c0 = param_3;
  uStack_b8 = param_4;
  uStack_a8 = param_2;
  local_a0 = param_3;
  uStack_98 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (0,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x28),PTR_s_setFrame__026ca960);
  puVar2 = PTR__CGAffineTransformIdentity_025782d8;
  _memcpy(auStack_120,PTR__CGAffineTransformIdentity_025782d8,0x30);
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  _memcpy(auStack_150,auStack_120,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setTransform__026caad0,auStack_150);
  _memcpy(auStack_180,puVar2,0x30);
  uVar3 = *(undefined8 *)(param_5 + 0x28);
  _memcpy(auStack_1b0,auStack_180,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setTransform__026caad0,auStack_1b0);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_5 + 0x20),PTR_s_setHidden__026ca970,*(byte *)(param_5 + 0x40) & 1
            );
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_5 + 0x20),PTR_s_setUserInteractionEnabled__026caad8,
             (*(byte *)(param_5 + 0x40) ^ 1) & 1);
  if ((*(byte *)(param_5 + 0x40) & 1) == 0) {
    bVar1 = (*(byte *)(param_5 + 0x41) ^ 1) & 1;
  }
  else {
    bVar1 = 0;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_5 + 0x28),PTR_s_setHidden__026ca970,bVar1 != 0);
  bVar1 = 1;
  if ((*(byte *)(param_5 + 0x40) & 1) == 0) {
    bVar1 = *(byte *)(param_5 + 0x41);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_5 + 0x28),PTR_s_setUserInteractionEnabled__026caad8,bVar1 & 1);
  if (*(long *)(param_5 + 0x30) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_5 + 0x30),PTR_s_setHidden__026ca970,
               (*(byte *)(param_5 + 0x42) ^ 1) & 1);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_5 + 0x30),PTR_s_setUserInteractionEnabled__026caad8,
               *(byte *)(param_5 + 0x42) & 1);
  }
  uVar3 = DAT_028c5eb8;
  uVar4 = *(undefined8 *)(param_5 + 0x38);
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
             *(byte *)(param_5 + 0x40) & 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar4,uVar3,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

