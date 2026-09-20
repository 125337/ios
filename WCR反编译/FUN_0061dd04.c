// FUN_0061dd04 @ 0061dd04

void FUN_0061dd04(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  long lVar3;
  long local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_refreshMemberAvatarsInRoom__026a6018,
             *(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 0x28;
  local_28 = puVar2;
  _objc_loadWeakRetained();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    FUN_0061de94();
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  pcVar1 = &cf__cN;
  if (local_28 == (undefined *)0x0) {
    pcVar1 = &cf_7Re1Y_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  _objc_storeStrong(&local_30,0);
  return;
}

