// FUN_005c1204 @ 005c1204

undefined4 FUN_005c1204(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contentObj_026a5990);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_0059d260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (lVar3 == 0x32) {
    local_14 = 0x6a;
  }
  else if (lVar3 == 0x3b) {
    local_14 = 0x81;
  }
  else {
    local_14 = 0x33;
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

