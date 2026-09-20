// FUN_0209b0fc @ 0209b0fc

void FUN_0209b0fc(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_170;
  undefined *local_168;
  undefined *local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  byte local_e1;
  undefined *local_e0;
  int local_d4;
  undefined *local_d0;
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_WCRBubbleCutInsetsVersion);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((long)puVar2 < 2) {
    local_48 = &cf_bubbleCutTop;
    local_40 = &cf_bubbleCutLeft;
    local_38 = &cf_bubbleCutBottom;
    local_30 = &cf_bubbleCutRight;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 1;
    local_e0 = puVar1;
    _memset(auStack_130,0,0x40);
    puVar1 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_c8,0x10);
    if (local_168 != (undefined *)0x0) {
      lVar3 = *local_120;
      local_170 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar3 != 0) {
            _objc_enumerationMutation(*local_120 - lVar3,puVar1);
          }
          local_f0 = *(undefined8 *)(local_128 + (long)local_170 * 8);
          puVar2 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectForKeyedSubscript__0269d098,local_f0);
          _objc_retainAutoreleasedReturnValue();
          local_138 = puVar2;
          if (puVar2 == (undefined *)0x0) {
LAB_0209b354:
            local_d4 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_doubleValue_026ca608);
            param_1 = ABS(param_1 - 20.0);
            if (param_1 <= DAT_02323db0) goto LAB_0209b354;
            local_e1 = 0;
            local_d4 = 2;
          }
          _objc_storeStrong(&local_138,0);
          if (local_d4 != 0) goto LAB_0209b3dc;
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_c8,
                   0x10);
        local_170 = (undefined *)0x0;
      } while (local_168 != (undefined *)0x0);
    }
    local_d4 = 0;
LAB_0209b3dc:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((local_e1 & 1) != 0) {
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x1e);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_bubbleCutTop);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x19);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_bubbleCutLeft);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_bubbleCutBottom);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x14);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_bubbleCutRight);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,
               &cf_WCRBubbleCutInsetsVersion);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_d0);
    _objc_storeStrong(&local_e0,0);
    local_d4 = 0;
  }
  else {
    local_d4 = 1;
  }
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

