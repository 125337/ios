// FUN_000c9f94 @ 000c9f94

void FUN_000c9f94(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  double local_88;
  double local_80;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_3);
  uVar1 = local_18;
  local_80 = param_1;
  if (param_1 <= 0.0) {
    local_80 = 0.0;
  }
  local_88 = param_2;
  if (param_2 <= 0.0) {
    local_88 = 0.0;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar1,&DAT_028c8292,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar1 = local_18;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar1,&DAT_028c8293,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_18,0);
  return;
}

