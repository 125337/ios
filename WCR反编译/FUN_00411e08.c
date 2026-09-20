// FUN_00411e08 @ 00411e08

byte FUN_00411e08(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_198;
  byte local_174;
  cfstringStruct *local_160;
  byte local_11c;
  cfstringStruct *local_108;
  long local_c0;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  long local_68;
  undefined4 local_5c;
  long local_58 [3];
  cfstringStruct *local_40;
  long local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  pcVar1 = local_30;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_38;
  local_40 = pcVar1;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_40;
  local_58[0] = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (lVar2 = local_58[0], (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_21 = 0;
    local_5c = 1;
  }
  else {
    lVar2 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = lVar2;
    if (lVar2 == 0) {
      local_c0 = local_58[0];
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_c0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf__);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf__);
      lVar2 = local_68;
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        local_198 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_198 = local_40;
        }
        (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_isEqualToString__0269ccc8,local_198);
        local_21 = (byte)lVar2 & 1;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        local_5c = 1;
      }
      else {
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringFromIndex__0269d120,1);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar1;
        FUN_0040494c();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_160 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_160 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = local_160;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
        local_174 = 0;
        if (pcVar1 != (cfstringStruct *)0x0) {
          lVar2 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_hasPrefix__0269d320,local_78);
          local_174 = (byte)lVar2;
        }
        local_21 = local_174 & 1;
        local_5c = 1;
        _objc_storeStrong(&local_78,0);
      }
    }
    else {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringFromIndex__0269d120,1);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar1;
      FUN_0040494c();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_108 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_108 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_108;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      local_11c = 0;
      if (pcVar1 != (cfstringStruct *)0x0) {
        lVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_containsString__0269d0b0,local_70);
        local_11c = (byte)lVar2;
      }
      local_21 = local_11c & 1;
      local_5c = 1;
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

