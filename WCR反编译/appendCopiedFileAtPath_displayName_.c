// appendCopiedFileAtPath:displayName: @ 0095b880

/* Function Stack Size: 0x20 bytes */

bool WCRClipboardHistoryStore::appendCopiedFileAtPath_displayName_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *local_258;
  cfstringStruct *local_220;
  undefined *local_1f8;
  cfstringStruct *local_1d8;
  cfstringStruct *local_178;
  uint local_154;
  undefined *local_150;
  byte local_141;
  undefined *local_140;
  undefined *local_138;
  byte local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  bool local_e1;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined4 local_d0;
  byte local_c9;
  undefined *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  SEL local_b0;
  undefined *local_a8;
  byte local_99;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  local_b0 = param_2;
  local_a8 = (undefined *)param_1;
  _objc_storeStrong(&local_b8,param_3);
  local_c0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c0,param_4);
  pcVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  local_c9 = 0;
  local_154 = 1;
  if (pcVar1 != (cfstringStruct *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_c9 = 1;
    local_c8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_154 = (uint)puVar2 ^ 1;
  }
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  if ((local_154 & 1) == 0) {
    pcVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e1 = false;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_178 = &cf_bin;
    }
    else {
      local_178 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = local_178;
    }
    local_e1 = pcVar3 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = local_178;
    if ((local_e1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar4 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_files______);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar2 = local_f0;
    FUN_0095c294();
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      local_99 = 0;
      local_d0 = 1;
    }
    else {
      puVar2 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_stringByDeletingLastPathComponen_0269fb90);
      _objc_retainAutoreleasedReturnValue();
      local_108 = 0;
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_100 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_110 = local_108;
      puVar2 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_storeStrong(&local_108,local_110);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (((ulong)puVar2 & 1) == 0) {
        local_99 = 0;
        local_d0 = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        local_118 = local_108;
        puVar4 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_storeStrong(&local_108,local_118);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (((ulong)puVar4 & 1) == 0) {
          local_99 = 0;
          local_d0 = 1;
        }
        else {
          pcVar1 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
          local_129 = 0;
          if (pcVar1 == (cfstringStruct *)0x0) {
            local_1d8 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_lastPathComponent_026ca780);
            _objc_retainAutoreleasedReturnValue();
            local_128 = local_1d8;
          }
          else {
            local_1d8 = local_c0;
          }
          local_129 = pcVar1 == (cfstringStruct *)0x0;
          (*(code *)PTR__objc_retain_02578638)();
          local_120 = local_1d8;
          if ((local_129 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_128);
          }
          puVar2 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_items_0269e4b0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_141 = 0;
          local_1f8 = puVar4;
          if (puVar4 == (undefined *)0x0) {
            local_1f8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            local_140 = local_1f8;
          }
          local_141 = puVar4 == (undefined *)0x0;
          (*(code *)PTR__objc_retain_02578638)();
          local_138 = local_1f8;
          if ((local_141 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_140);
          }
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_98 = &cf_id;
          puVar4 = PTR__OBJC_CLASS___NSUUID_026ce668;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_90 = &cf_type;
          local_58 = &cf_file;
          local_88 = &cf_text;
          if (local_120 == (cfstringStruct *)0x0) {
            local_220 = &cf_eN;
          }
          else {
            local_220 = local_120;
          }
          local_50 = local_220;
          local_80 = &cf_time;
          puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
          local_60 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          local_78 = &cf_pinned;
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_48 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
          _objc_retainAutoreleasedReturnValue();
          local_70 = &cf_filePath;
          local_38 = local_f0;
          local_68 = &cf_fileName;
          if (local_120 == (cfstringStruct *)0x0) {
            local_258 = &cf_eN;
          }
          else {
            local_258 = local_120;
          }
          local_30 = local_258;
          puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_40 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_98,7);
          _objc_retainAutoreleasedReturnValue();
          local_150 = puVar8;
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar4 = local_138;
          puVar2 = local_150;
          puVar5 = local_138;
          FUN_00959544(local_138);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_insertObject_atIndex__0269eac0,puVar2,puVar5);
          FUN_0095963c(local_138);
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setItems__026a17a8,local_138);
          local_99 = 1;
          local_d0 = 1;
          _objc_storeStrong(&local_150);
          _objc_storeStrong(&local_138,0);
          _objc_storeStrong(&local_120,0);
        }
      }
      _objc_storeStrong(&local_108);
      _objc_storeStrong(&local_100,0);
    }
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_d8,0);
  }
  else {
    local_99 = 0;
    local_d0 = 1;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_99 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

