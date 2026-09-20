// FUN_00762ca8 @ 00762ca8

byte FUN_00762ca8(undefined8 param_1,undefined8 *param_2)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *local_b0;
  long local_60;
  undefined8 *local_58;
  cfstringStruct *local_50;
  byte local_41;
  undefined8 local_40;
  long *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_1);
  local_38 = &DAT_028cc890;
  local_40 = 0;
  local_58 = param_2;
  _objc_storeStrong(&local_40,&PTR___NSConcreteGlobalBlock_0257fa38);
  if (*local_38 + 1 != 0) {
    _dispatch_once(*local_38 + 1,local_38,local_40);
  }
  _objc_storeStrong(&local_40,0);
  lVar2 = DAT_028cc888;
  if (local_50 == (cfstringStruct *)0x0) {
    local_b0 = &cf___;
  }
  else {
    local_b0 = local_50;
  }
  pcVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  local_28 = 0;
  local_20 = 0;
  local_30 = pcVar1;
  local_18 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar2,PTR_s_firstMatchInString_options_range_0269ef48,local_b0,0,0,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_50;
  local_60 = lVar2;
  if (lVar2 == 0) {
    local_41 = 0;
  }
  else {
    if (local_58 != (undefined8 *)0x0) {
      puVar3 = PTR_s_rangeAtIndex__0269ef20;
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_rangeAtIndex__0269ef20,1);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_substringWithRange__0269d138,lVar2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_58 = pcVar1;
    }
    local_41 = 1;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_50,0);
  return local_41 & 1;
}

