// FUN_01e96a08 @ 01e96a08

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_01e96a08(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  cfstringStruct *pcVar9;
  byte local_16c;
  ulong local_148;
  ulong local_118;
  undefined *local_e8;
  bool local_d9;
  ulong local_d8;
  bool local_c9;
  ulong local_c8;
  bool local_b9;
  ulong local_b8;
  ulong local_a8;
  undefined *local_98;
  ulong local_88;
  ulong local_78;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined *local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar7 = local_30;
  puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar6);
  if (((uVar7 & 1) == 0) ||
     (uVar8 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_wcrasset_),
     uVar7 = local_30, (uVar8 & 1) == 0)) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    pcVar9 = &cf_wcrasset_;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_wcrasset_,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_substringFromIndex__0269d120,pcVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_s_rangeOfString__0269d838;
    local_40 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_rangeOfString__0269d838,&cf__);
    local_50 = uVar7;
    local_48 = puVar6;
    if (uVar7 != 0x7fffffffffffffff) {
      uVar8 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringToIndex__0269d6c0,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_40;
      local_40 = uVar8;
      (*(code *)PTR__objc_release_02578630)(uVar7);
    }
    uVar7 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_count_0269cfe0);
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    local_b9 = false;
    local_c9 = false;
    local_d9 = false;
    if (uVar7 < 3) {
      uVar7 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
      local_b9 = uVar7 != 2;
      if (local_b9) {
        local_148 = 0;
      }
      else {
        local_b8 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectAtIndexedSubscript__0269cc78,0);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectAtIndexedSubscript__0269cc78,1);
        _objc_retainAutoreleasedReturnValue();
        local_148 = local_b8;
        FUN_01e708e8();
        _objc_retainAutoreleasedReturnValue();
        local_d8 = local_148;
      }
      local_c9 = !local_b9;
      local_d9 = !local_b9;
      local_b9 = !local_b9;
      local_118 = local_148;
    }
    else {
      local_68 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      local_98 = PTR__OBJC_CLASS___NSString_026cdfe8;
      bVar5 = true;
      local_78 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      bVar4 = true;
      local_88 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectAtIndexedSubscript__0269cc78,2);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_stringWithFormat__0269cca8,&cf______);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_118 = local_68;
      FUN_01e708e8();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_a8 = local_118;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_118;
    if (local_d9) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    if (local_c9) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    if (local_b9) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if (bVar4) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if (bVar5) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    uVar7 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    local_16c = 0;
    if (uVar7 != 0) {
      local_e8 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_16c = (byte)puVar6;
    }
    local_21 = local_16c & 1;
    if (uVar7 != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    local_34 = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

