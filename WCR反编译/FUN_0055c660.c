// FUN_0055c660 @ 0055c660

void FUN_0055c660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_1;
  uStack_28 = param_2;
  _objc_storeStrong(&local_48,param_5);
  if (local_48 == 0) goto LAB_0055caf4;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_00568274();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 != (undefined1 *)0x0) {
    if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_likeFlag_026a4708);
      if ((uVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,uStack_28,local_38,PTR_s_WCRefinePerformLikeAction_withTa_026a50a0,1);
      }
      goto LAB_0055caf4;
    }
    if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_WCRefineShowFakeEngagementInputF_026a5030,local_48);
      goto LAB_0055caf4;
    }
    if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_WCRefineFindWCTimeLineCellView_026a5090);
      _objc_retainAutoreleasedReturnValue();
      _WCRefineForwardMomentFromCellView();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      goto LAB_0055caf4;
    }
    if ((dword *)puVar2 == &MACH_HEADER.cputype) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_WCRefineFindWCTimeLineCellView_026a5090);
      _objc_retainAutoreleasedReturnValue();
      _WCRefineForwardMomentToChatFromCellView();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      goto LAB_0055caf4;
    }
    if (puVar2 == (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_WCRefineFindWCTimeLineCellView_026a5090);
      _objc_retainAutoreleasedReturnValue();
      _WCRefineForwardMomentFromCellView();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      goto LAB_0055caf4;
    }
    if (puVar2 == (undefined1 *)((long)&MACH_HEADER.cputype + 2)) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_WCRefineFindWCTimeLineCellView_026a5090);
      _objc_retainAutoreleasedReturnValue();
      FUN_005682b8();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      goto LAB_0055caf4;
    }
    if (puVar2 == (undefined1 *)((long)&MACH_HEADER.cputype + 3)) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_WCRefineFindWCTimeLineCellView_026a5090);
      _objc_retainAutoreleasedReturnValue();
      _WCRefineSaveMomentMediaFromCellView();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      goto LAB_0055caf4;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,uStack_28,local_38,PTR_s_WCRefinePerformCommentActionWith_026a5020);
LAB_0055caf4:
  _objc_storeStrong(&local_48,0);
  return;
}

