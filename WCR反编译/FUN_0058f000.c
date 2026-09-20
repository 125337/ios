// FUN_0058f000 @ 0058f000

void FUN_0058f000(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_138;
  bool local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct local_68;
  undefined4 local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = local_30;
  FUN_0057a910();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
    goto LAB_0058f580;
  }
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_38;
  local_68.field3_0x18 = (long)puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf__);
  if (((ulong)pcVar1 & 1) == 0) {
LAB_0058f188:
    pcVar1 = local_38;
    FUN_0058e8a8();
    _objc_retainAutoreleasedReturnValue();
    local_68.field2_0x10 = (undefined *)pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_48 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = local_68.field2_0x10;
      local_68.field1_0x8 = (qword)&cf_W;
      (*(code *)PTR__objc_retain_02578638)();
      local_68.field0_0x0 = (qword)puVar2;
      pcVar1 = (cfstringStruct *)local_68.field1_0x8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68.field1_0x8,PTR_s_stringByAppendingString__0269d398,&cf__);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = (cfstringStruct *)local_68.field2_0x10;
      local_70 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_68.field2_0x10,PTR_s_hasPrefix__0269d320,pcVar1);
      pcVar1 = (cfstringStruct *)local_68.field2_0x10;
      if (((ulong)pcVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68.field2_0x10,PTR_s_isEqualToString__0269ccc8,local_68.field1_0x8);
        if (((ulong)pcVar1 & 1) != 0) {
          pcVar3 = &local_68;
          _objc_storeStrong(pcVar3,&cf___);
          goto LAB_0058f3bc;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf___;
        local_48 = 1;
      }
      else {
        pcVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_substringFromIndex__0269d120,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = (cfstringStruct *)local_68.field0_0x0;
        local_68.field0_0x0 = (qword)pcVar1;
        (*(code *)PTR__objc_release_02578630)();
LAB_0058f3bc:
        FUN_00589dc8();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = (cfstringStruct *)local_68.field0_0x0;
        local_78 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_68.field0_0x0,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_138 = local_78;
        }
        else {
          local_138 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_stringByAppendingPathComponent__026cab30,local_68.field0_0x0);
          _objc_retainAutoreleasedReturnValue();
          local_80 = local_138;
        }
        local_81 = pcVar1 != (cfstringStruct *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_138;
        if (local_81) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        local_48 = 1;
        _objc_storeStrong(&local_78,0);
      }
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_68.field1_0x8,0);
    }
    _objc_storeStrong(&local_68.field2_0x10,0);
  }
  else {
    puVar2 = (undefined *)local_68.field3_0x18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68.field3_0x18,PTR_s_fileExistsAtPath__026ca630,local_38);
    pcVar1 = local_38;
    if (((ulong)puVar2 & 1) == 0) goto LAB_0058f188;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
    local_48 = 1;
  }
  _objc_storeStrong(&local_68.field3_0x18,0);
LAB_0058f580:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

