// FUN_00150f9c @ 00150f9c

/* WARNING: Removing unreachable block (ram,0x00151154) */
/* WARNING: Removing unreachable block (ram,0x00151134) */

void FUN_00150f9c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_getAssociatedObject(lVar1,&DAT_0257a608);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar4,&DAT_0257a608,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar3 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_updateView_0269f520);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_updateView_0269f520);
    }
    _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),&DAT_0257a608,0,1);
  }
  return;
}

