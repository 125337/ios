// FUN_015f6ce8 @ 015f6ce8

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_015f6ce8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_new_0269d288);
  uVar1 = DAT_028e3bd8;
  DAT_028e3bd8 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3bd8,PTR_s_setTemporarilyHiddenUsernames__026b1628);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  return;
}

