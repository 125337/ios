// FUN_00ef276c @ 00ef276c

void FUN_00ef276c(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined *local_140;
  uint local_104;
  uint local_f4;
  undefined *local_d8;
  bool local_b9;
  undefined *local_b8;
  cfstringStruct *local_98;
  undefined *local_88;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_54;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_50 = (undefined *)0x0;
  _objc_storeStrong(&local_50,param_1);
  puVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
  if (puVar4 == (undefined *)0x0) {
    if (local_50 == (undefined *)0x0) {
      local_d8 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_d8 = local_50;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_d8;
    local_54 = 1;
  }
  else {
    local_60 = (undefined *)0x0;
    for (local_68 = (undefined *)0x0; puVar4 = local_68, puVar5 = local_50,
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0), puVar4 < puVar5;
        local_68 = local_68 + 1) {
      puVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      FUN_00eee23c();
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar5 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_hasPrefix__0269d320,&cf_chat_);
      puVar4 = local_78;
      bVar2 = false;
      bVar1 = false;
      if (((ulong)puVar5 & 1) == 0) {
LAB_00ef297c:
        puVar4 = local_78;
        local_98 = &cf_theme_life_mall;
        FUN_00ef5110();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isEqualToString__0269ccc8);
        local_104 = 0;
        uVar3 = (uint)puVar4;
        if (((ulong)puVar4 & 1) != 0) {
          _WCRThemeLifeMallEntriesVisible();
          local_104 = uVar3 ^ 1;
        }
        local_f4 = local_104;
      }
      else {
        pcVar6 = &cf_chat_;
        (*(code *)PTR__objc_msgSend_02578628)(&cf_chat_,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_substringFromIndex__0269d120,pcVar6);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        puVar5 = puVar4;
        FUN_00ef585c();
        local_f4 = 1;
        local_88 = puVar4;
        if (((ulong)puVar5 & 1) != 0) goto LAB_00ef297c;
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      if (((local_f4 & 1) == 0) || (local_60 != (undefined *)0x0)) {
        if (((local_f4 & 1) == 0) && (local_60 != (undefined *)0x0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,local_70);
        }
      }
      else {
        puVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_arrayWithCapacity__0269d9b8,puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_60;
        local_60 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar4 = local_60;
        if (local_68 != (undefined *)0x0) {
          local_38 = 0;
          local_40 = local_68;
          local_30 = 0;
          local_28 = local_68;
          puVar5 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_subarrayWithRange__0269d848,0,local_68);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObjectsFromArray__0269d540);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
      }
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
    }
    local_b9 = local_60 == (undefined *)0x0;
    if (local_b9) {
      local_140 = local_50;
    }
    else {
      local_140 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_copy_0269d150);
      local_b8 = local_140;
    }
    local_b9 = !local_b9;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_140;
    if (local_b9) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
    local_54 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

