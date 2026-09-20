// FUN_003b2d64 @ 003b2d64

byte FUN_003b2d64(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *local_88;
  ulong local_70;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  bool local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) ||
     (pcVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     pcVar1 == (cfstringStruct *)0x0)) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    local_41 = false;
    if (pcVar1 < (cfstringStruct *)0x2) {
      local_88 = &cf___;
    }
    else {
      local_88 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_substringFromIndex__0269d120,1);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_88;
    }
    local_41 = pcVar1 >= (cfstringStruct *)0x2;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_88;
    if ((local_41 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_substringToIndex__0269d6c0,1);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_set_____);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    uVar4 = local_20;
    puVar3 = local_50;
    _NSSelectorFromString(local_50);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_respondsToSelector__026ca818,puVar3);
    pcVar1 = local_28;
    if ((uVar4 & 1) == 0) {
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_UTF8String_026a2e68);
      local_58 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_11 = 0;
        local_2c = 1;
      }
      else {
        pcVar1 = &cf__;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf__,PTR_s_stringByAppendingString__0269d398,local_28);
        _objc_retainAutoreleasedReturnValue();
        local_60 = pcVar1;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_UTF8String_026a2e68);
        local_70 = local_20;
        _object_getClass();
        while (local_70 != 0) {
          uVar4 = local_70;
          _class_getInstanceVariable(local_70,local_58);
          if ((uVar4 != 0) ||
             ((pcVar1 != (cfstringStruct *)0x0 &&
              (uVar4 = local_70, _class_getInstanceVariable(local_70,pcVar1), uVar4 != 0)))) {
            local_11 = 1;
            goto LAB_003b30e8;
          }
          _class_getSuperclass();
        }
        local_11 = 0;
LAB_003b30e8:
        local_2c = 1;
        _objc_storeStrong(&local_60,0);
      }
    }
    else {
      local_11 = 1;
      local_2c = 1;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

