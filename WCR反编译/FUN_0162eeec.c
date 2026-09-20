// FUN_0162eeec @ 0162eeec

bool FUN_0162eeec(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  ulong *local_60;
  ulong *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_28;
  
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_1);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_2);
  local_60 = param_4;
  local_58 = param_3;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = &cf___;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_48;
  local_70 = &cf___;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  pcVar4 = local_48;
  if (((ulong)pcVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
    pcVar2 = local_48;
    if (((ulong)pcVar4 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = pcVar2;
      puVar1 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_rangeOfString__0269d838,&cf__);
      local_88 = pcVar2;
      local_80 = puVar1;
      if ((pcVar2 == (cfstringStruct *)0x7fffffffffffffff) || (pcVar2 == (cfstringStruct *)0x0)) {
        _objc_storeStrong(0,&local_68,local_78);
      }
      else {
        pcVar4 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_substringToIndex__0269d6c0,pcVar2);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_70;
        local_70 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar4 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_substringFromIndex__0269d120,
                   (undefined1 *)((long)&local_88->field0_0x0 + 1));
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_68;
        local_68 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      _objc_storeStrong(&local_78,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar4;
    FUN_01618794();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_68;
    local_68 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_storage);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar4;
    FUN_01618794();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_70;
    local_70 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  pcVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  if ((pcVar2 == (cfstringStruct *)0x0) &&
     (pcVar4 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf_wcr_sf_switch_),
     pcVar2 = local_50, ((ulong)pcVar4 & 1) != 0)) {
    pcVar4 = &cf_wcr_sf_switch_;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_wcr_sf_switch_,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_hasPrefix__0269d320,&cf_switch_);
    pcVar4 = local_90;
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = &cf_switch_;
      (*(code *)PTR__objc_msgSend_02578628)(&cf_switch_,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_substringFromIndex__0269d120,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_90;
      local_90 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar2 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
    if (pcVar2 < (cfstringStruct *)0x2) {
      _objc_storeStrong((undefined1 *)((long)&pcVar2[-1].field3_0x18 + 6),&local_68,local_90);
    }
    else {
      pcVar4 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar4;
      FUN_01618794();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_70;
      local_70 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar2 = local_98;
      pcVar4 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0);
      local_40 = (undefined1 *)((long)&pcVar4[-1].field3_0x18 + 7);
      local_38 = 1;
      local_30 = 1;
      local_28 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_subarrayWithRange__0269d848,1,local_40);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_68;
      local_68 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
  }
  pcVar2 = local_68;
  if (local_58 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_58 = (ulong)pcVar2;
  }
  pcVar2 = local_70;
  if (local_60 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_60 = (ulong)pcVar2;
  }
  pcVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  return pcVar2 != (cfstringStruct *)0x0;
}

