// FUN_008c0aec @ 008c0aec

void FUN_008c0aec(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_008c0508(local_18,&local_30,&local_38);
  _objc_storeStrong(&local_20,local_30);
  _objc_storeStrong(&local_28,local_38);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  if (lVar2 == 0) {
    FUN_008c08b4(0);
  }
  else {
    uVar3 = local_18;
    FUN_008c0948();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar1 = DAT_028cde90;
    DAT_028cde90 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

