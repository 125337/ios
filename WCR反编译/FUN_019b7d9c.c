// FUN_019b7d9c @ 019b7d9c

void FUN_019b7d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = param_1 + 0x20;
  local_30 = param_1;
  _objc_loadWeakRetained();
  local_38 = lVar1;
  if (lVar1 != 0) {
    uVar2 = local_28;
    _objc_retainBlock();
    _objc_setAssociatedObject(lVar1,&DAT_028e4429,uVar2,3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    lVar1 = local_38;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_20);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar1,&DAT_028e442a,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_showCustomControllerInputForFloa_026ba998);
  }
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

