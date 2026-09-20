// layoutBadge:onButton: @ 01e56aec

/* Function Stack Size: 0x20 bytes */

void WCRefineTelegramTabStripView::layoutBadge_onButton_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ID IVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double in_d2;
  double in_d3;
  double local_208;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_60;
  double dStack_58;
  undefined8 local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isHidden_026ca768);
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    if ((in_d2 < 1.0) ||
       (dVar4 = 1.0, dVar3 = in_d3, local_60 = in_d2, dStack_58 = in_d3, in_d3 < 1.0)) {
      dVar4 = 10.0;
      dVar3 = 10.0;
      FUN_01e56878();
      local_60 = dVar3;
      dStack_58 = dVar4;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
    _CGRectGetMaxX(dVar3,dVar4);
    uVar5 = 0x4010000000000000;
    dVar4 = (dVar3 - local_60) + 4.0;
    IVar2 = local_28;
    local_1e8 = dVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scrollView_0269dcc0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _CGRectGetWidth();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    dVar3 = local_1e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
    _CGRectGetMaxX(dVar3,uVar5,in_d2);
    if (local_1e8 < dVar3 + 12.0) {
      local_1e8 = dVar3 + 12.0;
    }
    local_1f0 = (local_1e8 - local_60) - 2.0;
    if (dVar4 < local_1f0) {
      local_1f0 = dVar4;
    }
    if (local_1f0 <= 2.0) {
      local_1f8 = 2.0;
    }
    else {
      local_1f8 = local_1f0;
    }
    local_208 = 2.0;
    dVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
    _CGRectGetMinY(local_208,local_1f0,dVar3,in_d3);
    local_208 = local_208 - DAT_02323c78 * dStack_58;
    if (local_208 <= 2.0) {
      local_208 = 2.0;
    }
    FUN_01e55a50();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1f8,local_208,local_60,dStack_58,local_38,PTR_s_setFrame__026ca960);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

