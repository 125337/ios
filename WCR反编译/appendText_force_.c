// appendText:force: @ 00958c48

/* Function Stack Size: 0x1c bytes */

void WCRClipboardHistoryStore::appendText_force_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  long lVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_1b0;
  undefined *local_158;
  uint local_12c;
  cfstringStruct *local_120;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  byte local_c9;
  undefined *local_c8;
  undefined *local_c0;
  byte local_b1;
  undefined *local_b0;
  int local_a4;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  SEL local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_90 = (cfstringStruct *)0x0;
  local_88 = param_2;
  local_80 = (undefined *)param_1;
  _objc_storeStrong(&local_90,param_3);
  pcVar3 = local_90;
  local_91 = (byte)param_4;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_120 = &::cf___;
  }
  else {
    local_120 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
  pcVar3 = local_a0;
  if (local_120 == (cfstringStruct *)0x0) {
    local_a4 = 1;
  }
  else {
    local_b1 = 0;
    local_12c = 0;
    if ((local_91 & 1) == 0) {
      puVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_lastCapturedText_026aab78);
      _objc_retainAutoreleasedReturnValue();
      local_b1 = 1;
      local_b0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isEqualToString__0269ccc8);
      local_12c = (uint)pcVar3;
    }
    if ((local_b1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    if ((local_12c & 1) == 0) {
      puVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_items_0269e4b0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_c9 = 0;
      local_158 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        local_158 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = local_158;
      }
      local_c9 = puVar4 == (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = local_158;
      if ((local_c9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c8);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_d8 = 0x7fffffffffffffff;
      for (local_e0 = 0; lVar1 = local_e0, puVar2 = local_c0,
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0), lVar1 < (long)puVar2
          ; local_e0 = local_e0 + 1) {
        puVar2 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_e0);
        _objc_retainAutoreleasedReturnValue();
        local_e8 = puVar2;
        FUN_009463a8();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (((ulong)puVar4 & 1) == 0) {
          local_a4 = 4;
        }
        else {
          puVar2 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_f0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((((ulong)puVar2 & 1) == 0) ||
             (puVar2 = local_f0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_f0,PTR_s_isEqualToString__0269ccc8,local_a0), ((ulong)puVar2 & 1) == 0
             )) {
            local_a4 = 0;
          }
          else {
            local_d8 = local_e0;
            local_a4 = 2;
          }
          _objc_storeStrong(&local_f0,0);
        }
        _objc_storeStrong(&local_e8,0);
        if ((local_a4 != 0) && (local_a4 == 2)) break;
      }
      if (local_d8 == 0x7fffffffffffffff) {
        local_78 = &cf_id;
        puVar4 = PTR__OBJC_CLASS___NSUUID_026ce668;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_70 = &cf_type;
        local_48 = &cf_text;
        local_68 = &cf_text;
        local_40 = local_a0;
        local_60 = &cf_time;
        puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
        local_50 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        local_58 = &cf_pinned;
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_38 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_30 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_78,5);
        _objc_retainAutoreleasedReturnValue();
        local_108 = puVar8;
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = local_c0;
        puVar2 = local_108;
        puVar5 = local_c0;
        FUN_00959544(local_c0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_insertObject_atIndex__0269eac0,puVar2,puVar5);
        _objc_storeStrong(&local_108,0);
      }
      else {
        puVar2 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_d8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_f8 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_time);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_removeObjectAtIndex__0269d530,local_d8)
        ;
        puVar2 = local_f8;
        FUN_009464dc();
        if (((ulong)puVar2 & 1) == 0) {
          local_1b0 = local_c0;
          FUN_00959544();
        }
        else {
          local_1b0 = (undefined *)0x0;
        }
        local_100 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_insertObject_atIndex__0269eac0,local_f8,local_1b0);
        _objc_storeStrong(&local_f8,0);
      }
      FUN_0095963c(local_c0);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setLastCapturedText__026aab98,local_a0);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setItems__026a17a8,local_c0);
      _objc_storeStrong(&local_c0,0);
      local_a4 = 0;
    }
    else {
      local_a4 = 1;
    }
  }
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

