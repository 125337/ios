// FUN_0088c320 @ 0088c320

void FUN_0088c320(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *puStack_68;
  cfstringStruct *local_60;
  undefined *puStack_58;
  uint local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  FUN_008825d8();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
  }
  else {
    pcVar2 = local_38;
    puVar4 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rangeOfString__0269d838,&cf_format_s_);
    local_60 = pcVar2;
    puStack_58 = puVar4;
    if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
      pcVar2 = local_38;
      puVar4 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rangeOfString__0269d838,&cf__);
      local_70 = pcVar2;
      puStack_68 = puVar4;
      local_60 = pcVar2;
      puStack_58 = puVar4;
    }
    lVar5 = 0;
    if (local_60 != (cfstringStruct *)0x7fffffffffffffff) {
      pcVar2 = (cfstringStruct *)((long)&local_60->field0_0x0 + 1);
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      lVar5 = (long)pcVar2 - (long)pcVar3;
      if (pcVar2 < pcVar3) {
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_substringToIndex__0269d6c0,
                   (undefined1 *)((long)&local_60->field0_0x0 + 1));
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_38;
        local_78 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_substringFromIndex__0269d120,
                   (undefined1 *)((long)&local_60->field0_0x0 + 1));
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar3;
        FUN_008825d8();
        _objc_retainAutoreleasedReturnValue();
        local_80 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar2 = local_80;
        FUN_0088575c();
        _objc_retainAutoreleasedReturnValue();
        local_88 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
        bVar1 = pcVar2 != (cfstringStruct *)0x0;
        if (bVar1) {
          pcVar2 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_stringByAppendingString__0269d398,local_88);
          _objc_retainAutoreleasedReturnValue();
          local_28 = pcVar2;
        }
        local_48 = (uint)bVar1;
        _objc_storeStrong(bVar1,&local_88);
        _objc_storeStrong(&local_80,0);
        _objc_storeStrong(&local_78,0);
        if (local_48 != 0) goto LAB_0088c6e0;
        lVar5 = 0;
      }
    }
    pcVar2 = local_38;
    FUN_0088575c(lVar5);
    _objc_retainAutoreleasedReturnValue();
    local_48 = 1;
    local_28 = pcVar2;
  }
LAB_0088c6e0:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

