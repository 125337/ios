// FUN_001003e0 @ 001003e0

void FUN_001003e0(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  uVar2 = local_18;
  uVar1 = DAT_026df8c0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_timeIntervalSinceReferenceDate_0269e4e0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1 + 1.5,puVar3,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar2,uVar1,puVar3,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_18,0);
  return;
}

