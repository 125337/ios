// FUN_0006bde8 @ 0006bde8

void FUN_0006bde8(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  (*DAT_028c7e50)(param_1,param_2);
  uVar2 = param_1;
  _objc_getAssociatedObject(param_1,DAT_026df7b0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar1 = DAT_026df7b0;
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(param_1,uVar1,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    FUN_00091280(param_1);
    _objc_setAssociatedObject(param_1,DAT_026df7b0,0,1);
  }
  return;
}

