// FUN_009d3468 @ 009d3468

byte FUN_009d3468(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_58;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_58 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_58;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_localhost);
  if (((((ulong)pcVar1 & 1) == 0) &&
      (pcVar1 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_127_0_0_1),
      ((ulong)pcVar1 & 1) == 0)) &&
     (pcVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf___1),
     ((ulong)pcVar1 & 1) == 0)) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_count_0269cfe0);
    if (pcVar1 == (cfstringStruct *)0x4) {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if (pcVar2 == (cfstringStruct *)0xa) {
        local_11 = 1;
      }
      else if ((pcVar2 == (cfstringStruct *)0xc0) && (pcVar3 == (cfstringStruct *)0xa8)) {
        local_11 = 1;
      }
      else if ((pcVar2 == (cfstringStruct *)0xac) && ((0xf < (long)pcVar3 && ((long)pcVar3 < 0x20)))
              ) {
        local_11 = 1;
      }
      else {
        local_11 = 0;
      }
    }
    else {
      local_11 = 0;
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_11 = 1;
    local_2c = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

