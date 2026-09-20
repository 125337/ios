// updateRangeHintWithCount:primaryDateKey:includesToday:usedFallback: @ 0092b990

/* Function Stack Size: 0x28 bytes */

void WCRefineCrashMonitorViewController::
     updateRangeHintWithCount_primaryDateKey_includesToday_usedFallback_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4,bool param_5,
               bool param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ID IVar5;
  ulong uVar6;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined **local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  byte local_42;
  byte local_41;
  ulong local_40;
  unsigned_long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_40,param_4);
  local_41 = (byte)param_5;
  local_42 = (byte)param_6;
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4026000000000000,*(undefined8 *)PTR__UIFontWeightRegular_02578158,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_50;
  ppuVar4 = &local_a0;
  local_a0 = PTR___NSConcreteStackBlock_02578660;
  local_98 = 0xc2000000;
  local_94 = 0;
  local_90 = FUN_0092bfdc;
  local_88 = &DAT_02581100;
  local_68 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_58;
  local_80 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = puVar1;
  _objc_retainBlock();
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_70 = ppuVar4;
  if ((local_42 & 1) == 0) {
    if (local_38 == 0) {
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentRangeTitle_026aa680);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf_>f_yV_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)ppuVar4[2])(ppuVar4,puVar1,local_60);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rangeHintLabel_026aa6f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    else {
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentRangeTitle_026aa680);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf_>f_yV_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)ppuVar4[2])(ppuVar4,puVar1,local_60);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedRange_026a43a0);
      if ((IVar5 == 0) &&
         (uVar6 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
         ppuVar4 = local_70, puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8, uVar6 != 0)) {
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_displayDateFromDateKey__026aa6e8,local_40);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&::cf___);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)ppuVar4[2])(ppuVar4,puVar1,local_60);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        uVar6 = local_40;
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_todayDateKey_026aa6c0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isEqualToString__0269ccc8);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        if ((uVar6 & 1) != 0) {
          (*(code *)local_70[2])(local_70,&::cf_space_s_,local_60);
          (*(code *)local_70[2])(local_70,&cf_Ne,local_68);
        }
      }
      else if ((local_41 & 1) != 0) {
        (*(code *)local_70[2])(local_70,&::cf___,local_60);
        (*(code *)local_70[2])(local_70,&cf_Ne,local_68);
      }
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rangeHintLabel_026aa6f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
  }
  else {
    (*(code *)ppuVar4[2])(ppuVar4,&cf_>f_yl,local_60);
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rangeHintLabel_026aa6f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  return;
}

