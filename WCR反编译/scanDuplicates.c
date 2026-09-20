// scanDuplicates @ 0189e76c

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomDuplicateJoinViewController::scanDuplicates(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  ID IVar4;
  undefined1 *local_48;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    local_48 = *(undefined1 **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_48;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar3) {
    puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_duplicateMembersInRooms__026b7480,
               local_28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setItems__026a17a8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    puVar1 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_hKm0R);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQb__N_N_);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

