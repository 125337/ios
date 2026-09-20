// WCRefine_removeNativeSearchBar @ 004cb6b8

/* Function Stack Size: 0x10 bytes */

void WCRefineMainFrameSearchButton::WCRefine_removeNativeSearchBar(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  double in_d3;
  uint local_fc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ID local_a8;
  ID local_a0;
  char local_91;
  ID local_90;
  byte local_82;
  byte local_81;
  double local_60;
  ID local_58;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefine_mainFrameTableView_026a4070);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  if (param_1 == 0) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tableHeaderView_0269ea08);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_28;
    local_48 = param_1;
    _objc_getAssociatedObject(local_28,&DAT_028cac47);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar2;
    if ((local_48 == 0) && (IVar2 != 0)) {
      _objc_storeStrong(&local_48,IVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTableHeaderView__0269ea10,local_48);
    }
    if (local_48 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_WCRefine_normalizeTopGapIfNeeded_026a4078,local_38);
      local_3c = 1;
    }
    else {
      IVar2 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028cac48);
      _objc_retainAutoreleasedReturnValue();
      local_58 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
      IVar4 = local_28;
      IVar2 = local_50;
      local_60 = in_d3;
      if ((local_50 == 0) || (IVar2 = local_50 - local_48, IVar2 != 0)) {
        _objc_setAssociatedObject(IVar2,local_28,&DAT_028cac47,local_48,1);
        IVar2 = local_28;
        if (local_60 <= 0.5) {
          if (local_58 == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x4046000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
                       PTR_s_numberWithDouble__0269d6d0);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(IVar2,&DAT_028cac48,puVar3,1);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(IVar2,&DAT_028cac48,puVar3,1);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
      }
      else if ((local_58 == 0) && (0.5 < in_d3)) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (in_d3,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(IVar4,&DAT_028cac48,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      local_81 = 0.5 < local_60;
      IVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isHidden_026ca768);
      local_fc = 1;
      if ((IVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_alpha_026ca4d8);
        local_fc = 1;
        if (local_60 <= DAT_02323d38) {
          IVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isUserInteractionEnabled_026ca770);
          local_fc = (uint)IVar2;
        }
      }
      local_82 = (byte)local_fc & 1;
      local_91 = '\0';
      bVar1 = true;
      if (((local_81 & 1) == 0) && (bVar1 = true, (local_fc & 1) == 0)) {
        IVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tableHeaderView_0269ea08);
        _objc_retainAutoreleasedReturnValue();
        local_91 = '\x01';
        bVar1 = IVar2 != local_48;
        local_90 = IVar2;
      }
      if (local_91 != '\0') {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      IVar2 = local_48;
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      if (bVar1) {
        local_c8 = PTR___NSConcreteGlobalBlock_02578658;
        local_c0 = 0xd0800000;
        local_bc = 0;
        local_b8 = FUN_004cbcb0;
        local_b0 = &DAT_0257ab20;
        (*(code *)PTR__objc_retain_02578638)();
        IVar4 = local_38;
        local_a8 = IVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_performWithoutAnimation__0269e7e0,&local_c8);
        _objc_storeStrong(&local_a0);
        _objc_storeStrong(&local_a8,0);
      }
      IVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tableHeaderView_0269ea08);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar2;
      FUN_004cbe00();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if ((IVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTableHeaderView__0269ea10,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_WCRefine_normalizeTopGapIfNeeded_026a4078,local_38);
      _objc_storeStrong(&local_58,0);
      local_3c = 0;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

