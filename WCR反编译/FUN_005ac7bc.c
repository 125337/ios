// FUN_005ac7bc @ 005ac7bc

void FUN_005ac7bc(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,param_3 & 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_1,&DAT_028cb77c,puVar1,1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

