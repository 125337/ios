// pushLat:lng:name: @ 01950698

/* Function Stack Size: 0x28 bytes */

void WCRefineFakeLocationHistoryStore::pushLat_lng_name_
               (ID param_1,SEL param_2,double param_3,double param_4,ID param_5)

{
  double dVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  double dVar13;
  undefined *local_2b0;
  undefined *local_2a8;
  cfstringStruct *local_248;
  undefined *local_1e0;
  undefined *local_1c0;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  ulong local_168;
  byte local_159;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  byte local_13a;
  byte local_139;
  undefined *local_138;
  undefined *local_130;
  undefined4 local_124;
  cfstringStruct *local_120;
  double local_118;
  double local_110;
  SEL local_108;
  undefined *local_100;
  undefined1 auStack_f8 [128];
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  dVar1 = DAT_02339de0;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_120 = (cfstringStruct *)0x0;
  local_118 = param_4;
  local_110 = param_3;
  local_108 = param_2;
  local_100 = (undefined *)param_1;
  _objc_storeStrong(&local_120,param_5);
  puVar3 = local_100;
  dVar13 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_110,local_118,local_100,PTR_s_coordValidLat_lng__026b9ad8);
  if (((ulong)puVar3 & 1) == 0) {
    local_124 = 1;
  }
  else {
    puVar3 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_allItems_026a2730);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_139 = 0;
    local_1e0 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_1e0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_138 = local_1e0;
    }
    local_139 = puVar4 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_1e0;
    if ((local_139 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_13a = 0;
    puVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
    local_148 = puVar3;
    while (puVar3 = local_130, local_148 = local_148 + -1, -1 < (long)local_148) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_objectAtIndexedSubscript__0269cc78,local_148);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_150 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((ulong)puVar3 & 1) == 0) {
        local_124 = 4;
      }
      else {
        puVar3 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_lat);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        dVar13 = ABS(dVar13 - local_110);
        local_159 = 0;
        bVar2 = false;
        if (dVar13 < dVar1) {
          puVar4 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_lng);
          _objc_retainAutoreleasedReturnValue();
          local_159 = 1;
          local_158 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar13 = ABS(dVar13 - local_118);
          bVar2 = dVar13 < dVar1;
        }
        if ((local_159 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_158);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (bVar2) {
          puVar3 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_favorite);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_13a = (byte)puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_130,PTR_s_removeObjectAtIndex__0269d530,local_148);
        }
        local_124 = 0;
      }
      _objc_storeStrong(&local_150,0);
    }
    local_78 = &cf_lat;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_110,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = &cf_lng;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_118,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = &cf_name;
    if (local_120 == (cfstringStruct *)0x0) {
      local_248 = &::cf___;
    }
    else {
      local_248 = local_120;
    }
    local_40 = local_248;
    local_60 = &cf_favorite;
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_13a & 1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_58 = &cf_ts;
    puVar7 = PTR__OBJC_CLASS___NSDate_026cdf88;
    local_38 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_78,5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_insertObject_atIndex__0269eac0,puVar9,0);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_168 = 0;
    _memset(auStack_1b0,0,0x40);
    puVar3 = local_130;
    (*(code *)PTR__objc_retain_02578638)();
    local_2a8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_f8,0x10);
    if (local_2a8 != (undefined *)0x0) {
      lVar11 = *local_1a0;
      local_2b0 = (undefined *)0x0;
      do {
        do {
          if (*local_1a0 - lVar11 != 0) {
            _objc_enumerationMutation(*local_1a0 - lVar11,puVar3);
          }
          uVar12 = *(ulong *)(local_1a8 + (long)local_2b0 * 8);
          local_170 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar12,PTR_s_objectForKeyedSubscript__0269d098,&cf_favorite);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar12);
          if ((uVar10 & 1) == 0) {
            local_168 = local_168 + 1;
          }
          local_2b0 = local_2b0 + 1;
        } while (local_2b0 < local_2a8);
        local_2a8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_f8,
                   0x10);
        local_2b0 = (undefined *)0x0;
      } while (local_2a8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    do {
      if (local_168 < 0x15) break;
      bVar2 = false;
      local_1c0 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
      do {
        local_1c0 = local_1c0 + -1;
        if ((long)local_1c0 < 0) goto LAB_01950fbc;
        puVar3 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_objectAtIndexedSubscript__0269cc78,local_1c0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      } while (((ulong)puVar5 & 1) != 0);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_removeObjectAtIndex__0269d530,local_1c0)
      ;
      local_168 = local_168 - 1;
      bVar2 = true;
LAB_01950fbc:
    } while (bVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_saveItems__026b9ae0,local_130);
    _objc_storeStrong(&local_130,0);
    local_124 = 0;
  }
  _objc_storeStrong(&local_120,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

