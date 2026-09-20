// FUN_010edd08 @ 010edd08

void FUN_010edd08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (uVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    FUN_010ef308();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_getValueOfProperty_inRuleSet_;
    local_38 = uVar2;
    _NSSelectorFromString();
    if ((local_38 == 0) ||
       (uVar2 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar3),
       (uVar2 & 1) == 0)) {
      local_18 = 0;
    }
    else {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar3,local_20,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar2;
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

