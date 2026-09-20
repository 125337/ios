// FUN_003dc694 @ 003dc694

void FUN_003dc694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if (local_18 != 0) {
    _objc_setAssociatedObject(local_18,&DAT_028ca296,local_20);
    _objc_setAssociatedObject(local_18,&DAT_028ca298,local_28,1);
    lVar1 = local_18;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar1,&DAT_028ca299,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

