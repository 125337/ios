// FUN_00681308 @ 00681308

void FUN_00681308(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *puStack_68;
  cfstringStruct *local_60;
  undefined *puStack_58;
  cfstringStruct *local_48;
  undefined4 local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = local_30;
  FUN_0067e628();
  if (((ulong)pcVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_40 = 1;
  }
  else {
    pcVar1 = local_30;
    FUN_0067d82c();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_48;
    puVar4 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rangeOfString__0269d838,&cf__);
    local_60 = pcVar1;
    puStack_58 = puVar4;
    if (pcVar1 == (cfstringStruct *)0x7fffffffffffffff) {
      pcVar1 = local_48;
      puVar4 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rangeOfString__0269d838,&cf_format_s_);
      local_70 = pcVar1;
      puStack_68 = puVar4;
      local_60 = pcVar1;
      puStack_58 = puVar4;
    }
    if (local_60 == (cfstringStruct *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_40 = 1;
    }
    else {
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_substringFromIndex__0269d120,
                 (undefined1 *)((long)&local_60->field0_0x0 + 1));
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_rangeOfString_options__0269d118,&cf__,4);
      if (pcVar1 != (cfstringStruct *)0x7fffffffffffffff) {
        pcVar2 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_substringToIndex__0269d6c0,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_78;
        local_78 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      pcVar1 = local_78;
      FUN_0067d82c();
      _objc_retainAutoreleasedReturnValue();
      local_40 = 1;
      local_28 = pcVar1;
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

