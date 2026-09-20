// FUN_0157e748 @ 0157e748

void FUN_0157e748(void)

{
  undefined8 uVar1;
  
  if (DAT_028e3930 == 0) {
    _objc_storeStrong(&DAT_028e3928,0);
  }
  else {
    _dispatch_sync(DAT_028e3930,&PTR___NSConcreteGlobalBlock_02586970);
  }
  uVar1 = DAT_028e3938;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3938,PTR_s_removeAllObjects_0269d508);
  FUN_0152ecd8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

