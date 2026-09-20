// indicatorFrameForButton:style: @ 01e5724c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

CGRect WCRefineTelegramTabStripView::indicatorFrameForButton_style_
                 (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  CGRect CVar1;
  double *pdVar2;
  double in_d0;
  double dVar3;
  double in_d1;
  undefined8 uVar4;
  double in_d2;
  double in_d3;
  double dVar5;
  double dVar6;
  double local_190;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  long_long local_60;
  undefined8 local_58;
  SEL local_50;
  ID local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  local_60 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
  if (local_60 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
    _CGRectGetMinX(in_d0,in_d1);
    uVar4 = 0x4020000000000000;
    in_d0 = in_d0 + 8.0;
    dVar3 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
    _CGRectGetMaxY(dVar3,uVar4);
    uVar4 = 0x4000000000000000;
    dVar3 = dVar3 - 2.0;
    local_190 = 16.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
    _CGRectGetWidth(local_190,uVar4,in_d2,in_d3);
    local_190 = local_190 - 16.0;
    if (local_190 <= 16.0) {
      local_190 = 16.0;
    }
    dVar5 = 2.0;
    FUN_01e55a50();
    pdVar2 = &local_80;
    local_80 = in_d0;
    dStack_78 = dVar3;
    local_70 = local_190;
    dStack_68 = dVar5;
    local_40 = in_d0;
    dStack_38 = dVar3;
    local_30 = local_190;
    dStack_28 = dVar5;
  }
  else {
    pdVar2 = (double *)(local_60 - 2);
    local_40 = in_d0;
    dStack_38 = in_d1;
    local_30 = in_d2;
    dStack_28 = in_d3;
    if ((double *)(local_60 - 2) == (double *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
      _CGRectGetMidX(in_d0,in_d1);
      uVar4 = 0x4008000000000000;
      in_d0 = in_d0 - 3.0;
      dVar3 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
      _CGRectGetMaxY(dVar3,uVar4,in_d2,in_d3);
      dVar6 = 6.0;
      dVar3 = dVar3 - 6.0;
      dVar5 = 6.0;
      FUN_01e55a50();
      pdVar2 = &local_80;
      local_40 = in_d0;
      dStack_38 = dVar3;
      local_30 = dVar5;
      dStack_28 = dVar6;
    }
  }
  _objc_storeStrong(pdVar2,&local_58,0);
  CVar1.field0_0x0.field1_0x8 = dStack_38;
  CVar1.field0_0x0.field0_0x0 = local_40;
  CVar1.field1_0x10.field0_0x0 = local_30;
  CVar1.field1_0x10.field1_0x8 = dStack_28;
  return CVar1;
}

