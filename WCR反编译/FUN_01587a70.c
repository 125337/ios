// FUN_01587a70 @ 01587a70

void FUN_01587a70(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setHidden__026ca970,*(byte *)(param_1 + 0x40) & 1
            );
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setUserInteractionEnabled__026caad8,
             (*(byte *)(param_1 + 0x40) ^ 1) & 1);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setHidden__026ca970,
             (*(byte *)(param_1 + 0x40) ^ 1) & 1);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setUserInteractionEnabled__026caad8,
             *(byte *)(param_1 + 0x40) & 1);
  if (*(long *)(param_1 + 0x30) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_setHidden__026ca970,
               (*(byte *)(param_1 + 0x41) ^ 1) & 1);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_setUserInteractionEnabled__026caad8,
               *(byte *)(param_1 + 0x41) & 1);
  }
  uVar1 = DAT_028c5ea8;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
             *(byte *)(param_1 + 0x40) & 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar3,uVar1,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

