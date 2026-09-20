// _WCRMomentsScheduledDeleteTask @ 00585c38

byte _WCRMomentsScheduledDeleteTask(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  FUN_0057a910();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  bVar1 = true;
  if (lVar2 != 0) {
    lVar2 = local_28;
    FUN_005854b8();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 == 0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  if (!bVar1) {
    FUN_0057d18c(local_28);
  }
  local_11 = !bVar1;
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

