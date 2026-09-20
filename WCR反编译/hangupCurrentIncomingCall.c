// hangupCurrentIncomingCall @ 00f27340

/* Function Stack Size: 0x10 bytes */

bool __thiscall
WCRefineDoNotDisturbSupport::hangupCurrentIncomingCall
          (WCRefineDoNotDisturbSupport *this,ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  dispatch_time_t dVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  ID IVar9;
  double in_d0;
  char *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined *local_e8;
  byte local_d9;
  char *local_d8;
  double local_d0;
  ID local_a8;
  cfstringStruct *local_a0;
  char *local_98;
  int local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ID local_68;
  long local_60;
  long local_58;
  byte local_49;
  undefined *local_48;
  ID local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_38 = param_2;
  local_30 = param_1;
  FUN_00f27b34();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = &DAT_028e2c80;
  local_40 = param_1;
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  FUN_00f26448();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  FUN_00f26a48(local_48);
  local_49 = 0;
  if ((local_48 == (undefined *)0x0) ||
     (puVar2 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_hangup_026a0d08),
     ((ulong)puVar2 & 1) == 0)) {
    if (DAT_028e2cb8 < 8) {
      DAT_028e2cb8 = DAT_028e2cb8 + 1;
      local_60 = DAT_028e2cb8;
      dVar6 = _dispatch_time(0,150000000);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc0000000;
      local_7c = 0;
      local_78 = FUN_00f27be8;
      local_70 = &DAT_02578c00;
      local_68 = local_30;
      _dispatch_after(dVar6,puVar2,&local_88);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      FUN_00f27c28(local_40);
      local_21 = 0;
      local_8c = 1;
      goto LAB_00f27af8;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hangup_026a0d08);
    DAT_028e2cb8 = 0;
    local_49 = 1;
    lVar4 = DAT_028e2c98;
    FUN_00f21dc0();
    _objc_retainAutoreleasedReturnValue();
    local_58 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
    if (lVar4 != 0) {
      _objc_storeStrong(lVar4,&DAT_028e2c98);
      lVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
      lVar4 = DAT_028e2c90;
      DAT_028e2c90 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar4);
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      DAT_028e2cc0 = in_d0;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&DAT_028e2c88,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_sendHangupAutoReplyIfNeeded__026abe98,local_58);
    }
    _objc_storeStrong(&local_58,0);
  }
  FUN_00f27c28(local_40);
  pcVar7 = "VoIPInvitationService";
  FUN_00f27d14();
  _objc_retainAutoreleasedReturnValue();
  pcVar8 = &cf_rejectInvitationWithInfo_;
  local_98 = pcVar7;
  _NSSelectorFromString();
  local_a0 = pcVar8;
  if (((local_98 != (char *)0x0) && (local_40 != 0)) &&
     (pcVar7 = local_98,
     (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_respondsToSelector__026ca818,pcVar8),
     ((ulong)pcVar7 & 1) != 0)) {
    local_a8 = 0;
    IVar9 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_info);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_a8;
    local_a8 = IVar9;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (local_a8 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_98,local_a0,local_a8);
    }
    _objc_storeStrong(&local_a8,0);
  }
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_d0 = in_d0 - DAT_028e2cc8;
  if (1.5 <= local_d0) {
    pcVar7 = "VoipUIManager";
    DAT_028e2cc8 = in_d0;
    FUN_00f27d14();
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 0;
    local_d8 = pcVar7;
    if ((pcVar7 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar7,PTR_s_respondsToSelector__026ca818,PTR_s_isCaller_026a91a0),
       ((ulong)pcVar7 & 1) != 0)) {
      pcVar7 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isCaller_026a91a0);
      local_d9 = (byte)pcVar7;
    }
    if ((local_d9 & 1) == 0) {
      local_e8 = PTR_s_HangupWithReason_ifIsConnect__026abea8;
      if ((local_d8 == (char *)0x0) ||
         (pcVar7 = local_d8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_d8,PTR_s_respondsToSelector__026ca818,
                    PTR_s_HangupWithReason_ifIsConnect__026abea8), ((ulong)pcVar7 & 1) == 0)) {
        if ((local_d8 != (char *)0x0) &&
           (pcVar7 = local_d8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_d8,PTR_s_respondsToSelector__026ca818,PTR_s_HangupWithReason__026abeb0),
           ((ulong)pcVar7 & 1) != 0)) {
          local_f0 = 1;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_HangupWithReason__026abeb0,1);
        }
      }
      else {
        local_ec = 1;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,local_e8,1,0);
      }
      pcVar7 = "VoipCXMgr";
      FUN_00f27d14();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_s_requestEndCallTrans_026abeb8;
      local_f8 = pcVar7;
      if ((pcVar7 != (char *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar7,PTR_s_respondsToSelector__026ca818,PTR_s_requestEndCallTrans_026abeb8),
         ((ulong)pcVar7 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,puVar2);
      }
      _objc_storeStrong(&local_f8,0);
      local_8c = 0;
    }
    else {
      local_21 = local_49 & 1;
      local_8c = 1;
    }
    _objc_storeStrong(&local_d8,0);
    if (local_8c == 0) {
      local_21 = local_49 & 1;
      local_8c = 1;
    }
  }
  else {
    local_21 = local_49 & 1;
    local_8c = 1;
  }
  _objc_storeStrong(&local_98,0);
LAB_00f27af8:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

