// layoutDanmakuSubviews @ 00ff19f4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRKeywordAlertDanmakuBubbleView::layoutDanmakuSubviews(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  double in_d0;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 in_d1;
  undefined8 uVar6;
  undefined8 in_d2;
  double dVar7;
  undefined8 in_d3;
  undefined8 uVar8;
  double local_380;
  double local_1f0;
  double local_190;
  double local_38;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bounds_026ca548);
  _CGRectGetHeight();
  local_38 = in_d0;
  if (in_d0 <= 0.0) {
    local_38 = 38.0;
  }
  dVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bounds_026ca548);
  _CGRectGetWidth(dVar5,in_d1);
  uVar6 = 0x3fe0000000000000;
  dVar3 = local_38 * 0.5;
  dVar4 = dVar3;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bounds_026ca548);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_blurView_026ad620);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar4);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_blurView_026ad620);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  dVar4 = dVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_blurView_026ad620);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tintView_026ad628);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar4,uVar6,in_d2,in_d3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar3);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3fe0000000000000);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  uVar8 = 0x403a000000000000;
  dVar4 = (local_38 - 26.0) * 0.5;
  dVar3 = 7.0;
  uVar6 = 0x403a000000000000;
  FUN_00ff086c();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_avatarView_026ad640);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_avatarView_026ad640);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetMaxX(dVar3,dVar4,uVar6,uVar8);
  dVar3 = dVar3 + 7.0;
  (*(code *)PTR__objc_release_02578630)();
  local_190 = (dVar5 - dVar3) - 13.0;
  if (local_190 < 20.0) {
    local_190 = 20.0;
  }
  dVar5 = local_190;
  FUN_00ff0954();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar4 = (double)(long)dVar5;
  (*(code *)PTR__objc_release_02578630)();
  dVar5 = dVar4;
  FUN_00ff0a20();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar5 = (double)(long)dVar5;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_contentLabel_026ad638);
  _objc_retainAutoreleasedReturnValue();
  FUN_00ff10f0();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_sizeThatFits__0269ec10);
  (*(code *)PTR__objc_release_02578630)();
  local_380 = (double)(long)dVar5;
  dVar5 = local_380;
  FUN_00ff0a20();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_380 < (double)(long)dVar5) {
    local_380 = (double)(long)dVar5;
  }
  local_1f0 = (local_38 - (dVar4 + -1.0 + local_380)) * 0.5;
  if (local_1f0 < 3.0) {
    local_1f0 = 3.0;
  }
  dVar5 = dVar3;
  dVar7 = local_190;
  FUN_00ff086c();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sessionLabel_026ad630);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar5);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  dVar5 = dVar3;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sessionLabel_026ad630);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetMaxY(dVar5,local_1f0,dVar7,dVar4);
  dVar5 = dVar5 + -1.0;
  FUN_00ff086c();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_contentLabel_026ad638);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar3,dVar5,local_190,local_380);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

