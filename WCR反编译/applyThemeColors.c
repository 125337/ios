// applyThemeColors @ 00ff0af0

/* Function Stack Size: 0x10 bytes */

void WCRKeywordAlertDanmakuBubbleView::applyThemeColors(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ulong uVar3;
  undefined *puVar4;
  uint uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  FUN_00ff06d4();
  uVar5 = (uint)IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_blurView_026ad620);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
  uVar3 = (ulong)(uVar5 & 1);
  FUN_00ff076c(uVar3);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_effectWithStyle__026ca628,uVar3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setEffect__026ca930);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  uVar3 = (ulong)(uVar5 & 1);
  FUN_00ff07cc();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tintView_026ad628);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = (ulong)(uVar5 & 1);
  FUN_00ff0984();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sessionLabel_026ad630);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = (ulong)(uVar5 & 1);
  FUN_00ff0a50();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_contentLabel_026ad638);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = (ulong)(uVar5 & 1);
  FUN_00ff08b8();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_avatarView_026ad640);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = (ulong)(uVar5 & 1);
  FUN_00ff1054();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_CGColor_026ca470);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  dVar6 = DAT_02323e88;
  if ((IVar2 & 1) == 0) {
    dVar6 = DAT_02323cc0;
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)((float)dVar6);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4018000000000000);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  uVar7 = 0;
  uVar8 = 0x4000000000000000;
  FUN_00ff10f0();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,uVar8);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

