// FUN_01c22388 @ 01c22388

void FUN_01c22388(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_98;
  cfstringStruct *local_80;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_01bfdeac();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    FUN_01bfdd7c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar1;
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_LabelNameToId__026c14e8),
       ((ulong)pcVar1 & 1) == 0)) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_2c = 1;
    }
    else {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_methodSignatureForSelector__0269e190,PTR_s_LabelNameToId__026c14e8);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = local_40;
      local_48 = &cf___;
      if (local_40 == (cfstringStruct *)0x0) {
        local_80 = (cfstringStruct *)0x0;
      }
      else {
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_methodReturnType_0269e198);
      }
      local_50 = local_80;
      if ((local_80 == (cfstringStruct *)0x0) || ((char)local_80->field0_0x0 != '@')) {
        pcVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_LabelNameToId__026c14e8,local_28);
        if ((int)pcVar1 != 0) {
          pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__u);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_48;
          local_48 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
      }
      else {
        pcVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_LabelNameToId__026c14e8,local_28);
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_stringValue_0269ef08);
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar3 = local_58;
          FUN_01bfdeac();
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_48;
          local_48 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        else {
          pcVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_stringValue_0269ef08);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar3;
          FUN_01bfdeac();
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_48;
          local_48 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
        _objc_storeStrong(&local_58,0);
      }
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_98 = local_28;
      }
      else {
        local_98 = local_48;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_98;
      local_2c = 1;
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

