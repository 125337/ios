// FUN_0018ac98 @ 0018ac98

void FUN_0018ac98(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,param_2 & 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar1,&DAT_028c897a,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_18,0);
  return;
}

