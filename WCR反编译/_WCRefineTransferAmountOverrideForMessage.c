// _WCRefineTransferAmountOverrideForMessage @ 00f17170

void _WCRefineTransferAmountOverrideForMessage(undefined8 param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  _WCRefineTransferMessageKey();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0;
  }
  else {
    lVar1 = local_28;
    _WCRefineTransferAmountOverrideForKey();
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

