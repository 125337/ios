// FUN_014e2694 @ 014e2694

void FUN_014e2694(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = DAT_028e36c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e36c0,PTR_s_objectForKeyedSubscript__0269d098,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  lVar4 = *(long *)(param_1 + 0x28);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (lVar2 == lVar4) {
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  return;
}

