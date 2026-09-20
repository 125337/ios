// FUN_01638e8c @ 01638e8c

void FUN_01638e8c(ulong param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *local_c8;
  undefined4 local_bc;
  cfstringStruct *local_b8;
  ulong local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_01639cc4();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = &cf_applyQuickChatState_;
  local_b0 = param_1;
  _NSSelectorFromString();
  local_b8 = pcVar1;
  if ((local_b0 == 0) ||
     (uVar2 = local_b0,
     (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_respondsToSelector__026ca818,pcVar1),
     (uVar2 & 1) == 0)) {
    local_bc = 1;
  }
  else {
    local_a8 = &cf_linked;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,DAT_028e3c90 & 1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_a0 = &cf_tapOpen;
    puVar4 = PTR_WCRefineConfig_026cdf58;
    local_68 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_numberWithBool__0269ce60,puVar5);
    _objc_retainAutoreleasedReturnValue();
    local_98 = &cf_showBadge;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_60 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,DAT_028e3c91 & 1);
    _objc_retainAutoreleasedReturnValue();
    local_90 = &cf_badgeSide;
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_58 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,DAT_028e3c98);
    _objc_retainAutoreleasedReturnValue();
    local_88 = &cf_unread;
    puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
               DAT_028e3ca0);
    _objc_retainAutoreleasedReturnValue();
    local_80 = &cf_mutedOnly;
    puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,DAT_028e3ca4 & 1);
    _objc_retainAutoreleasedReturnValue();
    local_78 = &cf_alertStyle;
    puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,DAT_028e3cb0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = &cf_avatarSide;
    puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028c6000,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_68,&local_a8,8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c8 = puVar13;
    (*(code *)PTR__objc_release_02578630)(puVar12);
    (*(code *)PTR__objc_release_02578630)(puVar11);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar14 = DAT_028e3c78;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3c78,PTR_s_length_0269cca0);
    if (lVar14 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_setObject_forKeyedSubscript__0269d248,DAT_028e3c78,&cf_username);
    }
    if (DAT_028e3c80 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_setObject_forKeyedSubscript__0269d248,DAT_028e3c80,&cf_avatarView);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,local_b8,local_c8);
    _objc_storeStrong(&local_c8,0);
    local_bc = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

