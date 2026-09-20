// wcr_layoutOfficialBadge @ 015e08a8

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatCellView::wcr_layoutOfficialBadge(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double in_d2;
  double in_d3;
  uint local_124;
  double local_50;
  double dStack_48;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_officialBadge_026b10b0);
  _objc_retainAutoreleasedReturnValue();
  local_124 = 1;
  if (IVar1 != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_officialBadge_026b10b0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_124 = (uint)IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((local_124 & 1) == 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_officialBadge_026b10b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar4 = in_d2;
    dVar6 = in_d3;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((in_d2 < 1.0) || (local_50 = in_d2, dStack_48 = in_d3, in_d3 < 1.0)) {
      IVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_officialBadge_026b10b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      local_50 = dVar4;
      dStack_48 = dVar6;
    }
    if ((1.0 <= local_50) && (uVar5 = 0x3ff0000000000000, 1.0 <= dStack_48)) {
      IVar1 = param_1;
      dVar4 = dStack_48;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_avatarHost_026b1098);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      _CGRectGetMaxX(dVar4,uVar5);
      dVar6 = 2.0;
      dVar4 = (dVar4 - local_50) + 2.0;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_avatarHost_026b1098);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar6 = dVar6 - 2.0;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      FUN_015dff84();
      IVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_officialBadge_026b10b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar4,dVar6,local_50,dStack_48);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_officialBadge_026b10b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bringSubviewToFront__026ca550);
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
  }
  return;
}

