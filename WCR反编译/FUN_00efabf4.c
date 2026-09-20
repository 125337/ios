// FUN_00efabf4 @ 00efabf4

byte FUN_00efabf4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  local_11 = lVar1 != 0;
  if ((bool)local_11) {
    _WCRSFOpenSmartLink(local_20);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

