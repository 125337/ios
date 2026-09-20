// _WCRAvatarScaleFilterSerialize @ 00939f94

void _WCRAvatarScaleFilterSerialize(long param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  byte local_40;
  cfstringStruct *local_38;
  byte local_2d;
  undefined4 local_2c;
  undefined8 local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  if (local_20 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    local_2d = local_20 == 2;
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_68 = PTR___NSConcreteGlobalBlock_02578658;
    local_60 = 0xd0800000;
    local_5c = 0;
    local_58 = FUN_0093a17c;
    local_50 = &DAT_02581268;
    local_38 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_2d & 1;
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_enumerateIndexesUsingBlock__026a2090,&local_68);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = &cf__;
      if ((local_2d & 1) == 0) {
        pcVar2 = &cf__;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    else {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
      local_18 = pcVar2;
    }
    local_2c = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

