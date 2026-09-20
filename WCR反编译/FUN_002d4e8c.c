// FUN_002d4e8c @ 002d4e8c

void FUN_002d4e8c(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint local_4c;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  local_4c = 1;
  if (local_18 != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_4c = (uint)puVar3 ^ 1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if ((local_4c & 1) == 0) {
    _CACurrentMediaTime();
    lVar1 = local_18;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1 + 0.75,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar1,&DAT_028c9806,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

