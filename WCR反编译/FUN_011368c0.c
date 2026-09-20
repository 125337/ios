// FUN_011368c0 @ 011368c0

ulong FUN_011368c0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_addedAt);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_longLongValue_0269d5e0);
  if ((uVar1 & 1) != 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_longLongValue_0269d5e0);
    if (0 < (long)uVar1) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_longLongValue_0269d5e0);
      local_2c = 1;
      local_18 = uVar1;
      goto LAB_01136aa0;
    }
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_01130f58();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_WCRefine_Msg_);
  local_18 = local_38;
  if ((uVar1 & 1) == 0) {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    pcVar3 = &cf_WCRefine_Msg_;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_WCRefine_Msg_,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_substringFromIndex__0269d120,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_longLongValue_0269d5e0);
    local_2c = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_38,0);
LAB_01136aa0:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

