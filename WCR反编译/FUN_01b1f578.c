// FUN_01b1f578 @ 01b1f578

void FUN_01b1f578(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineKeywordAlertHistoryViewController_026cebf8;
  local_20 = param_1;
  local_18 = param_1;
  _objc_alloc_init();
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x20);
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_messageDanmakuOnly);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar1 = local_30;
  if ((uVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_keywordAlertPopupJumpMode_026bed60);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_messageDanmakuTapJumpMode_026bbcf8);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setPopupLocateUsesHalfScreen__026bed68,puVar1 == (undefined *)0x0);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_locateHistoryRecord_autoRemoveOn_026beb98,
             *(undefined8 *)(param_1 + 0x20),*(byte *)(param_1 + 0x28) & 1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

