// FUN_0080c6c8 @ 0080c6c8

void FUN_0080c6c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_026ca800);
  lVar1 = DAT_028ccf48;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028ccf48,PTR_s_objectForKeyedSubscript__0269d098,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 == lVar2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028ccf48,PTR_s_removeObjectForKey__0269d700,*(undefined8 *)(param_1 + 0x28));
  }
  return;
}

