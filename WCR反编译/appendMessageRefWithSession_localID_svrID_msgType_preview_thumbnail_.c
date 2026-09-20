// appendMessageRefWithSession:localID:svrID:msgType:preview:thumbnail: @ 0095c398

/* Function Stack Size: 0x40 bytes */

bool WCRClipboardHistoryStore::appendMessageRefWithSession_localID_svrID_msgType_preview_thumbnail_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,long_long param_5,
               long_long param_6,ID param_7,ID param_8)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  cfstringStruct *local_360;
  cfstringStruct *local_2d8;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2b8;
  cfstringStruct *local_2a8;
  cfstringStruct *local_230;
  cfstringStruct *local_1d8;
  undefined *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  undefined8 local_180;
  undefined8 local_178;
  cfstringStruct *local_170;
  long local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  long local_150;
  long local_148;
  byte local_139;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  int local_124;
  ulong local_120;
  cfstringStruct *local_118;
  long_long local_110;
  long_long local_108;
  cfstringStruct *local_100;
  long local_f8;
  SEL local_f0;
  cfstringStruct *local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  undefined *local_70;
  long local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f8 = 0;
  local_f0 = param_2;
  local_e8 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_f8,param_3);
  local_118 = (cfstringStruct *)0x0;
  local_110 = param_6;
  local_108 = param_5;
  local_100 = (cfstringStruct *)param_4;
  _objc_storeStrong(&local_118,param_7);
  local_120 = 0;
  _objc_storeStrong(&local_120,param_8);
  lVar1 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || ((long)local_100 < 1)) {
    local_d9 = 0;
    local_124 = 1;
  }
  else {
    pcVar2 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_139 = 0;
    local_1d8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_1d8 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_138 = local_1d8;
    }
    local_139 = pcVar3 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_1d8;
    if ((local_139 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_148 = 0x7fffffffffffffff;
    for (local_150 = 0; lVar1 = local_150, pcVar2 = local_130,
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0), lVar1 < (long)pcVar2;
        local_150 = local_150 + 1) {
      pcVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_objectAtIndexedSubscript__0269cc78,local_150);
      _objc_retainAutoreleasedReturnValue();
      local_158 = pcVar2;
      FUN_009463a8();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if (((ulong)pcVar3 & 1) == 0) {
        local_124 = 4;
      }
      else {
        pcVar2 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        if (((ulong)pcVar3 & 1) == 0) {
          local_124 = 4;
        }
        else {
          pcVar3 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          pcVar2 = local_100;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          if (pcVar4 == pcVar2) {
            local_148 = local_150;
            local_124 = 2;
          }
          else {
            local_124 = 4;
          }
        }
      }
      _objc_storeStrong(&local_158,0);
      if (local_124 == 2) break;
    }
    pcVar2 = local_118;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
    if ((((ulong)pcVar2 & 1) == 0) ||
       (pcVar2 = local_118, (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0),
       pcVar2 == (cfstringStruct *)0x0)) {
      local_230 = &::cf__;
    }
    else {
      local_230 = local_118;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = local_230;
    local_168 = 0;
    local_170 = (cfstringStruct *)0x0;
    if (local_120 != 0) {
      local_178 = 0;
      local_180 = 0;
      uVar6 = local_120;
      FUN_0095b294(local_120,&local_178,&local_180,0);
      _objc_storeStrong(&local_168,local_178);
      _objc_storeStrong(&local_170,local_180);
      if ((uVar6 & 1) == 0) {
        _objc_storeStrong(&local_168);
        _objc_storeStrong(&local_170,0);
      }
    }
    if (local_148 == 0x7fffffffffffffff) {
      local_d8 = &cf_id;
      puVar7 = PTR__OBJC_CLASS___NSUUID_026ce668;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_d0 = &cf_type;
      local_88 = &cf_message;
      local_c8 = &cf_text;
      local_80 = local_160;
      local_c0 = &cf_time;
      puVar9 = PTR__OBJC_CLASS___NSDate_026cdf88;
      local_90 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = &cf_pinned;
      puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_78 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = &cf_session;
      local_68 = local_f8;
      local_a8 = &cf_localID;
      puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_70 = puVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithLongLong__0269d808,local_100);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = &cf_svrID;
      puVar12 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_60 = puVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithLongLong__0269d808,local_108);
      _objc_retainAutoreleasedReturnValue();
      local_98 = &cf_msgType;
      puVar13 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_58 = puVar12;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_110);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_50 = puVar13;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_90,&local_d8,9);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_198 = puVar15;
      (*(code *)PTR__objc_release_02578630)(puVar14);
      (*(code *)PTR__objc_release_02578630)(puVar13);
      (*(code *)PTR__objc_release_02578630)(puVar12);
      (*(code *)PTR__objc_release_02578630)(puVar11);
      (*(code *)PTR__objc_release_02578630)(puVar10);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      lVar1 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
      if (lVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,local_168,&cf_imagePath);
        if (local_170 == (cfstringStruct *)0x0) {
          local_360 = &::cf___;
        }
        else {
          local_360 = local_170;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,local_360,&cf_thumbPath);
      }
      pcVar2 = local_130;
      puVar5 = local_198;
      pcVar3 = local_130;
      FUN_00959544(local_130);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_insertObject_atIndex__0269eac0,puVar5,pcVar3);
      FUN_0095963c(local_130);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setItems__026a17a8,local_130);
      local_d9 = 1;
      local_124 = 1;
      _objc_storeStrong(&local_198,0);
    }
    else {
      pcVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_objectAtIndexedSubscript__0269cc78,local_148);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_188 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      puVar7 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_188,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_time);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_188,PTR_s_setObject_forKeyedSubscript__0269d248,local_160,&cf_text);
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithLongLong__0269d808,local_108);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_188,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_svrID);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_110);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_188,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_msgType);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      lVar1 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
      if (lVar1 != 0) {
        local_48 = &cf_imagePath;
        pcVar2 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        local_2a8 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_2a8 = &::cf___;
        }
        local_38 = local_2a8;
        local_40 = &cf_thumbPath;
        pcVar3 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        local_2b8 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_2b8 = &::cf___;
        }
        local_30 = local_2b8;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
        _objc_retainAutoreleasedReturnValue();
        FUN_0095d1e4();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_188,PTR_s_setObject_forKeyedSubscript__0269d248,local_168,&cf_imagePath);
        if (local_170 == (cfstringStruct *)0x0) {
          local_2d0 = &::cf___;
        }
        else {
          local_2d0 = local_170;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_188,PTR_s_setObject_forKeyedSubscript__0269d248,local_2d0,&cf_thumbPath);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_removeObjectAtIndex__0269d530,local_148)
      ;
      pcVar2 = local_188;
      FUN_009464dc();
      if (((ulong)pcVar2 & 1) == 0) {
        local_2d8 = local_130;
        FUN_00959544();
      }
      else {
        local_2d8 = (cfstringStruct *)0x0;
      }
      local_190 = local_2d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_insertObject_atIndex__0269eac0,local_188,local_2d8);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setItems__026a17a8,local_130);
      local_d9 = 1;
      local_124 = 1;
      _objc_storeStrong(&local_188,0);
    }
    _objc_storeStrong(&local_170);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_130,0);
  }
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_d9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

