// _WCRefineClownTimeOverrideForMessage @ 00f17ad8

void _WCRefineClownTimeOverrideForMessage(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  _WCRefineClownMessageKey();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0;
  }
  else {
    FUN_00f16cb4();
    uVar2 = DAT_028e2b50;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e2b50,PTR_s_objectForKeyedSubscript__0269d098,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar2;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

