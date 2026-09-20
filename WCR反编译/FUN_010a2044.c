// FUN_010a2044 @ 010a2044

ulong FUN_010a2044(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
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
      goto LAB_010a222c;
    }
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_010a2838();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_hasPrefix__0269d320,_kWCRefineMessageRepositoryIDPrefix);
  local_18 = local_38;
  if ((uVar1 & 1) == 0) {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    uVar3 = _kWCRefineMessageRepositoryIDPrefix;
    (*(code *)PTR__objc_msgSend_02578628)(_kWCRefineMessageRepositoryIDPrefix,PTR_s_length_0269cca0)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_substringFromIndex__0269d120,uVar3);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_longLongValue_0269d5e0);
    local_2c = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_38,0);
LAB_010a222c:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

