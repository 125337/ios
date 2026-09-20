// FUN_003b7d60 @ 003b7d60

void FUN_003b7d60(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined8 uVar3;
  uint local_2c;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  pcVar1 = &cf_onLogicOpenSession_;
  _NSSelectorFromString();
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_session_0269d000);
  _objc_retainAutoreleasedReturnValue();
  local_2c = 0;
  if (lVar2 != 0) {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1);
    local_2c = (uint)uVar3;
  }
  (*(code *)PTR__objc_release_02578630)(lVar2);
  uVar3 = local_18;
  if ((local_2c & 1) != 0) {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar1);
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

