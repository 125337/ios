// FUN_016c4340 @ 016c4340

void FUN_016c4340(double param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  cfstringStruct *local_350;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2d8;
  undefined *local_238;
  undefined *local_230;
  undefined *local_200;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  undefined *local_170;
  undefined *local_168;
  long local_160;
  ulong local_158;
  int local_14c;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  undefined *local_100;
  undefined *local_f8 [2];
  int local_e4;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  int local_d0;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b0,param_2);
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_3);
  pcVar2 = local_b0;
  FUN_016aa360();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar2;
  if ((pcVar2 == (cfstringStruct *)0x0) || (FUN_016aa590(), ((ulong)pcVar2 & 1) != 0)) {
    FUN_016abf68(&cf_mo__1YHee_cTQmR);
    local_d0 = 1;
    goto LAB_016c53e0;
  }
  pcVar2 = local_c0;
  FUN_016ae6d4();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    FUN_016abf68(&cf_fN_ec___WReQOSVY);
    local_d0 = 1;
  }
  else {
    pcVar2 = local_b0;
    FUN_016b15dc();
    _objc_retainAutoreleasedReturnValue();
    local_e4 = 0;
    pcVar3 = local_c0;
    local_e0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiMesLocalID_0269d238);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_valueForKey__0269d128,&cf_m_uiMesLocalID)
      ;
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e4 = (int)pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_f8[0] = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_messageRepositoryItems_0269d730);
    _objc_retainAutoreleasedReturnValue();
    local_200 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_200 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = local_200;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if ((local_e4 == 0) ||
       (pcVar2 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0),
       pcVar2 == (cfstringStruct *)0x0)) {
LAB_016c4a34:
      puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_160 = (long)(param_1 * 1000.0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____lld);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      local_168 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_170 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_setObject_forKeyedSubscript__0269d248,local_168,&cf_id);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,local_d8,&cf_type);
      if (local_b8 == (cfstringStruct *)0x0) {
        local_2d8 = &cf___;
      }
      else {
        local_2d8 = local_b8;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,local_2d8,&cf_remark);
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_valid);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (local_e0 == (cfstringStruct *)0x0) {
        local_2f8 = &cf___;
      }
      else {
        local_2f8 = local_e0;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,local_2f8,&cf_sessionUserName
                );
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithLongLong__0269d808,local_160);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_addedAt);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (local_e4 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                   local_e4);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_localId);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      pcVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_m_uiMessageType_0269d0a8);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_numberWithInt__0269d810,(ulong)pcVar2 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_msgType);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_m_nsContent_0269d0a0);
      _objc_retainAutoreleasedReturnValue();
      local_350 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_350 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_178 = local_350;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isEqualToString__0269ccc8,&cf_text);
      if ((((ulong)pcVar2 & 1) == 0) &&
         (pcVar2 = local_d8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_d8,PTR_s_isEqualToString__0269ccc8,&cf_emoticon), ((ulong)pcVar2 & 1) == 0
         )) {
        pcVar2 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isEqualToString__0269ccc8,&cf_note);
        if (((((ulong)pcVar2 & 1) == 0) &&
            (pcVar2 = local_d8,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_isEqualToString__0269ccc8,&cf_favorite),
            ((ulong)pcVar2 & 1) == 0)) &&
           (pcVar2 = local_d8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_d8,PTR_s_isEqualToString__0269ccc8,&cf_location),
           ((ulong)pcVar2 & 1) == 0)) {
          pcVar2 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isEqualToString__0269ccc8,&cf_voice);
          if (((ulong)pcVar2 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,local_178,&cf_content);
          }
          else {
            pcVar2 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_respondsToSelector__026ca818,PTR_s_getVoicePath_026a4578);
            if (((ulong)pcVar2 & 1) != 0) {
              local_180 = (cfstringStruct *)0x0;
              pcVar3 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_getVoicePath_026a4578);
              _objc_retainAutoreleasedReturnValue();
              pcVar2 = local_180;
              local_180 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              pcVar2 = local_180;
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
              if ((((ulong)pcVar2 & 1) != 0) &&
                 (pcVar2 = local_180,
                 (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_length_0269cca0),
                 pcVar2 != (cfstringStruct *)0x0)) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,local_180,
                           &cf_voicePath);
              }
              _objc_storeStrong(&local_180,0);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,local_178,&cf_content);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,local_178,&cf_content);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_170,PTR_s_setObject_forKeyedSubscript__0269d248,local_178,&cf_content);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_addItem_completion__026ae5b0,
                 local_170,&PTR___NSConcreteGlobalBlock_02588190);
      _objc_storeStrong(&local_178);
      _objc_storeStrong(&local_170,0);
      _objc_storeStrong(&local_168,0);
      local_d0 = 0;
    }
    else {
      _memset(auStack_148,0,0x40);
      puVar4 = local_100;
      (*(code *)PTR__objc_retain_02578638)();
      local_230 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10)
      ;
      if (local_230 != (undefined *)0x0) {
        lVar7 = *local_138;
        local_238 = (undefined *)0x0;
        do {
          do {
            if (*local_138 - lVar7 != 0) {
              _objc_enumerationMutation(*local_138 - lVar7,puVar4);
            }
            uVar8 = *(ulong *)(local_140 + (long)local_238 * 8);
            local_108 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar8);
            local_14c = (int)uVar5;
            uVar5 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_108,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
            _objc_retainAutoreleasedReturnValue();
            iVar1 = local_14c - local_e4;
            local_158 = uVar5;
            if (iVar1 == 0) {
              puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
              iVar1 = (int)uVar5;
              if ((uVar5 & 1) == 0) goto LAB_016c4968;
              uVar5 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_158,PTR_s_isEqualToString__0269ccc8,local_e0);
              iVar1 = (int)uVar5;
              if ((uVar5 & 1) == 0) goto LAB_016c4968;
              FUN_016abf68(&cf_mo__mR);
              iVar1 = 1;
              local_d0 = 1;
            }
            else {
LAB_016c4968:
              local_d0 = 0;
            }
            _objc_storeStrong(iVar1,&local_158,0);
            if (local_d0 != 0) goto LAB_016c49fc;
            local_238 = local_238 + 1;
          } while (local_238 < local_230);
          local_230 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_238 = (undefined *)0x0;
        } while (local_230 != (undefined *)0x0);
      }
      local_d0 = 0;
LAB_016c49fc:
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (local_d0 == 0) goto LAB_016c4a34;
    }
    _objc_storeStrong(&local_100);
    _objc_storeStrong(local_f8,0);
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d8,0);
LAB_016c53e0:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

