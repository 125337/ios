// wcr_refreshChipColors @ 01697ab0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRWordSegPickerController::wcr_refreshChipColors(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined **local_170;
  undefined **local_168;
  undefined *local_f0;
  undefined *local_d0;
  ID local_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  byte local_49;
  undefined *local_48;
  undefined *local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_isDark_026b29d0);
  local_31 = (byte)param_1;
  local_49 = 0;
  local_69 = 0;
  local_d0 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d48,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_d0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323da8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = local_d0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_d0;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  local_81 = 0;
  local_91 = 0;
  local_f0 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if ((local_31 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323cc0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    local_90 = local_f0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323e70,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = local_f0;
  }
  puVar2 = local_f0;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_f0;
  if ((local_91 & 1) != 0) {
    puVar2 = local_90;
    (*(code *)PTR__objc_release_02578630)();
  }
  if ((local_81 & 1) != 0) {
    puVar2 = local_80;
    (*(code *)PTR__objc_release_02578630)();
  }
  FUN_01698180();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_a0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = 0;
  local_a8 = puVar3;
  while( true ) {
    lVar1 = local_b0;
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chipViews_026b29c8);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if ((long)IVar5 <= lVar1) break;
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chipViews_026b29c8);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_b8 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedIndexes_026b2a08);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if ((IVar5 & 1) == 0) {
      local_168 = &local_40;
    }
    else {
      local_168 = &local_a0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setBackgroundColor__026ca888,*local_168);
    if ((IVar5 & 1) == 0) {
      local_170 = &local_78;
    }
    else {
      local_170 = &local_a8;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setTextColor__026caa98,*local_170);
    _objc_storeStrong(&local_b8,0);
    local_b0 = local_b0 + 1;
  }
  _objc_storeStrong(lVar1 - IVar5,&local_a8);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_40,0);
  return;
}

