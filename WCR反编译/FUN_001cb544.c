// FUN_001cb544 @ 001cb544

void FUN_001cb544(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  (*DAT_028c8e70)(param_1,param_2);
  lVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (lVar2 != 0) {
    lVar3 = param_1;
    _objc_getAssociatedObject(param_1,&DAT_028c91aa);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 == 0;
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  (*(code *)PTR__objc_release_02578630)(lVar2);
  if (bVar1) {
    FUN_0021d044(param_1);
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(param_1,&DAT_028c91aa,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  return;
}

