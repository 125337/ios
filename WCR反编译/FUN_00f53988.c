// FUN_00f53988 @ 00f53988

void FUN_00f53988(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *local_78;
  undefined *local_48;
  undefined *local_40;
  long local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_3);
  local_78 = local_28;
  local_38 = param_1;
  local_30 = param_4;
  _WCRefineEnhancedAdBlockProcessObject();
  _objc_retainAutoreleasedReturnValue();
  bVar1 = local_78 == (undefined *)0x0;
  local_40 = local_78;
  if (bVar1) {
    local_48 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_48;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,local_78,
             local_20);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

