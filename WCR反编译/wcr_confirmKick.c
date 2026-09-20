// wcr_confirmKick @ 01d8bb48

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsActivityViewController::wcr_confirmKick(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ID IVar5;
  undefined1 *local_100;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined1 *local_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *local_70;
  undefined *local_68;
  byte local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined *local_48;
  undefined4 local_3c;
  undefined1 *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_kickable_026c4d88);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (undefined1 *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if ((undefined1 *)param_1 == (undefined1 *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MR__lgS_vN);
    local_3c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    for (local_50 = (undefined1 *)0x0; puVar4 = local_50, puVar3 = local_38,
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0), puVar1 = local_48,
        puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8,
        puVar4 < puVar3 && local_50 <= (undefined1 *)((long)&MACH_HEADER.cputype + 1);
        local_50 = local_50 + 1) {
      puVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_roomUsr_026c4cc0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_displayNameForUser_inRoom__0269ecd0,puVar4)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_59 = 0;
      local_100 = puVar2;
      if (puVar2 == (undefined1 *)0x0) {
        local_100 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
        _objc_retainAutoreleasedReturnValue();
        local_58 = local_100;
      }
      local_59 = puVar2 == (undefined1 *)0x0;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180,local_100);
      if ((local_59 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_componentsJoinedByString__0269d140,&::cf_0)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_38;
    local_68 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    puVar2 = local_68;
    if ((undefined1 *)((long)&MACH_HEADER.cputype + 2) < puVar4) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_stringByAppendingFormat__026a2088,&::cf_space_s_);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_68;
      local_68 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_displayName_026ac378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__b__Qv);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar2;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_initWeak(auStack_78,local_28);
    puVar1 = local_70;
    puVar2 = PTR_WCRefineHelper_026ce000;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_01d8c0c4;
    local_90 = &DAT_0257cd48;
    _objc_copyWeak(auStack_80,auStack_78);
    puVar4 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_nx_QN_mbXT,puVar1,&cf_nx_Q
               ,&local_a8,&cf_Q__,0);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
    _objc_storeStrong(&local_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

