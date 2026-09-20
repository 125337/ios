// FUN_005ac5c4 @ 005ac5c4

void FUN_005ac5c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_2,&DAT_028cb77a,puVar1,1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

