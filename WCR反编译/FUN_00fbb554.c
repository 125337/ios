// FUN_00fbb554 @ 00fbb554

byte FUN_00fbb554(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_70;
  bool local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  int local_30;
  int local_2c;
  cfstringStruct *local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_00fbb780(local_20,local_28);
  local_2c = (int)uVar1;
  uVar1 = local_20;
  FUN_00fbb918(local_20,PTR_s_m_uiShowType_026acfd8);
  pcVar3 = local_28;
  local_30 = (int)uVar1;
  if ((local_2c == 1) || (local_2c == 0x39)) {
    local_11 = 1;
    local_34 = 1;
  }
  else if ((local_2c == 9) && (local_30 == 5)) {
    local_11 = 1;
    local_34 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_49 = ((ulong)pcVar3 & 1) == 0;
    if (local_49) {
      local_70 = &cf___;
    }
    else {
      local_70 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_70;
    }
    local_49 = !local_49;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_70;
    if (local_49) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_<refermsg);
    local_11 = (byte)pcVar3 & 1;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

