// FUN_0158ca74 @ 0158ca74

void FUN_0158ca74(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 local_1b8;
  
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_4 + 0x20),PTR_s_frame_026ca640);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,param_2,param_3,*(undefined8 *)(param_4 + 0x50),*(undefined8 *)(param_4 + 0x20)
             ,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_4 + 0x58),*(undefined8 *)(param_4 + 0x60),
             *(undefined8 *)(param_4 + 0x68),*(undefined8 *)(param_4 + 0x70),
             *(undefined8 *)(param_4 + 0x28),PTR_s_setFrame__026ca960);
  uVar4 = 0;
  if ((*(byte *)(param_4 + 0xd8) & 1) == 0) {
    uVar4 = 0x3ff0000000000000;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,*(undefined8 *)(param_4 + 0x30),PTR_s_setAlpha__026ca860);
  if ((*(byte *)(param_4 + 0xd8) & 1) == 0) {
    local_1b8 = 0x3ff0000000000000;
    if ((*(byte *)(param_4 + 0xd9) & 1) == 0) {
      local_1b8 = 0;
    }
  }
  else {
    local_1b8 = 0x3ff0000000000000;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1b8,*(undefined8 *)(param_4 + 0x28),PTR_s_setAlpha__026ca860);
  if (*(long *)(param_4 + 0x38) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_4 + 0x78),*(undefined8 *)(param_4 + 0x80),
               *(undefined8 *)(param_4 + 0x88),*(undefined8 *)(param_4 + 0x90),
               *(undefined8 *)(param_4 + 0x38),PTR_s_setFrame__026ca960);
    uVar4 = 0x3ff0000000000000;
    if ((*(byte *)(param_4 + 0xda) & 1) == 0) {
      uVar4 = 0;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,*(undefined8 *)(param_4 + 0x38),PTR_s_setAlpha__026ca860);
  }
  bVar1 = false;
  if (*(long *)(param_4 + 0x40) != 0) {
    puVar3 = *(undefined **)(param_4 + 0x40);
    puVar2 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar3 != puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_4 + 0x98),*(undefined8 *)(param_4 + 0xa0),
               *(undefined8 *)(param_4 + 0xa8),*(undefined8 *)(param_4 + 0xb0),
               *(undefined8 *)(param_4 + 0x40),PTR_s_setFrame__026ca960);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_4 + 0xb8),*(undefined8 *)(param_4 + 0xc0),
             *(undefined8 *)(param_4 + 200),*(undefined8 *)(param_4 + 0xd0),
             *(undefined8 *)(param_4 + 0x48),PTR_s_setFrame__026ca960);
  return;
}

