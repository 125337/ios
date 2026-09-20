// FUN_0053b650 @ 0053b650

void FUN_0053b650(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  undefined1 auStack_1c28 [1024];
  undefined1 auStack_1828 [1024];
  undefined1 uStack_1428;
  undefined1 uStack_1427;
  undefined1 uStack_1426;
  undefined1 uStack_1425;
  undefined1 uStack_1028;
  undefined1 uStack_1027;
  undefined1 uStack_1026;
  undefined1 uStack_1025;
  undefined1 uStack_c28;
  undefined1 uStack_c27;
  undefined1 uStack_c26;
  undefined1 uStack_c25;
  undefined1 auStack_828 [1024];
  undefined1 uStack_428;
  undefined1 uStack_427;
  undefined1 uStack_426;
  undefined1 uStack_425;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar2 = "WCTimeLineViewController";
  _objc_getClass();
  uStack_428 = 0x76;
  uStack_427 = 0x40;
  uStack_426 = 0x3a;
  uStack_425 = 0;
  _class_addMethod(pcVar2,PTR_s_WCRefineOpenDraftBoxFromTimeline_026a4c80,FUN_0053be5c);
  sVar3 = _strlen("B");
  _memcpy(auStack_828,"B",sVar3);
  sVar3 = _strlen("B");
  iVar1 = (int)sVar3;
  auStack_828[sVar3 & 0xffffffff] = 0x40;
  auStack_828[iVar1 + 1] = 0x3a;
  auStack_828[iVar1 + 2] = 0x40;
  sVar3 = _strlen("@");
  _memcpy(auStack_828 + (iVar1 + 3U),"@",sVar3);
  sVar3 = _strlen("@");
  auStack_828[iVar1 + 3U + (int)sVar3] = 0;
  _class_addMethod(pcVar2,PTR_s_WCRefineInjectDraftEntryToSheet__026a4c88,FUN_0053c368);
  _MSHookMessageEx(pcVar2,PTR_s_configDataReportForActionSheet__026a4c90,FUN_0053cd10,&DAT_028cb2a8)
  ;
  _MSHookMessageEx(pcVar2,PTR_s_recoverFromManualSavedDraft_026a4c98,FUN_0053cee4,&DAT_028cb2b0);
  _MSHookMessageEx(pcVar2,PTR_s_recoverFromAutoSavedDraft_026a4ca0,FUN_0053cfec,&DAT_028cb2b8);
  pcVar2 = "WCNewCommitViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_viewDidPopOrDismiss__026a4ca8,FUN_0053d0f4,&DAT_028cb2c0);
  _MSHookMessageEx(pcVar2,PTR_s_showSaveOrNotAlert__026a4cb0,FUN_0053d1f0,&DAT_028cb2c8);
  uStack_c28 = 0x76;
  uStack_c27 = 0x40;
  uStack_c26 = 0x3a;
  uStack_c25 = 0;
  _class_addMethod(pcVar2,PTR_s_WCRefineShowCustomSaveDraftAlert_026a4cb8,FUN_0053d3d4);
  uStack_1028 = 0x76;
  uStack_1027 = 0x40;
  uStack_1026 = 0x3a;
  uStack_1025 = 0;
  _class_addMethod(pcVar2,PTR_s_WCRefineOnDraftAlertNotSave_026a4cc0,FUN_0053d50c);
  uStack_1428 = 0x76;
  uStack_1427 = 0x40;
  uStack_1426 = 0x3a;
  uStack_1425 = 0;
  _class_addMethod(pcVar2,PTR_s_WCRefineOnDraftAlertSave_026a4cc8,FUN_0053d544);
  _MSHookMessageEx(pcVar2,PTR_s_onSaveBtnClickedWithTag__026a4cd0,FUN_0053d80c,&DAT_028cb2d0);
  sVar3 = _strlen("B");
  _memcpy(auStack_1828,"B",sVar3);
  sVar3 = _strlen("B");
  auStack_1828[sVar3 & 0xffffffff] = 0x40;
  auStack_1828[(int)sVar3 + 1] = 0x3a;
  auStack_1828[(int)sVar3 + 2] = 0;
  _class_addMethod(pcVar2,PTR_s_WCRefineHasDraftContent_026a4cd8,FUN_0053dc2c);
  _MSHookMessageEx(pcVar2,PTR_s_initWithSightDraft__026a4ce0,FUN_0053e7e4,&DAT_028cb2d8);
  _MSHookMessageEx(pcVar2,PTR_s_initWithImages_contacts__026a4ce8,FUN_0053eab8,&DAT_028cb2e0);
  _MSHookMessageEx(pcVar2,PTR_s_initWithTextType_026a4cf0,FUN_0053ed60,&DAT_028cb2e8);
  _MSHookMessageEx(pcVar2,PTR_s_beginAnimationStepOne_026a4cf8,FUN_0053ef9c,&DAT_028cb2f0);
  _MSHookMessageEx(pcVar2,PTR_s_beginAnimationStepTwo_026a4d00,FUN_0053efe8,&DAT_028cb2f8);
  _MSHookMessageEx(pcVar2,PTR_s_beginAnimationStepTwoWithCustomV_026a4d08,FUN_0053f034,&DAT_028cb300
                  );
  _MSHookMessageEx(pcVar2,PTR_s_OnDone_026a4d10,FUN_0053f0f0,&DAT_028cb308);
  _MSHookMessageEx(pcVar2,PTR_s_animationDidStop_finished_contex_026a4d18,FUN_0053f370,&DAT_028cb310
                  );
  sVar3 = _strlen("@");
  _memcpy(auStack_1c28,"@",sVar3);
  sVar3 = _strlen("@");
  auStack_1c28[sVar3 & 0xffffffff] = 0x40;
  auStack_1c28[(int)sVar3 + 1] = 0x3a;
  auStack_1c28[(int)sVar3 + 2] = 0;
  _class_addMethod(pcVar2,PTR_s_WCRefineGetCurrentDraftModel_026a4d20,FUN_0053f80c);
  pcVar2 = "WCTimelineEnhanceDraftController";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_createDraft_026a4d28,FUN_00540884,&DAT_028cb318);
  _MSHookMessageEx(pcVar2,PTR_s_cleanCurrentDraftSynchronizeWith_026a4d30,FUN_0054099c,&DAT_028cb320
                  );
  pcVar2 = "WCTempSaveService";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_setText_poiInfo_tempSelectContac_026a4d38,FUN_00540ac4,&DAT_028cb328
                  );
  _MSHookMessageEx(pcVar2,PTR_s_setMediaText_imageArray_sightDra_026a4d40,FUN_00540d4c,&DAT_028cb330
                  );
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

