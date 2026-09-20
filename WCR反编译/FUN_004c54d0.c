// FUN_004c54d0 @ 004c54d0

void FUN_004c54d0(undefined8 param_1,double param_2,undefined8 param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  char *pcVar4;
  double dVar5;
  double local_b8;
  double local_b0;
  double local_80;
  double local_68;
  ulong local_60;
  cfstringStruct *local_58;
  double local_50;
  double local_48;
  double local_40;
  cfstringStruct *local_38;
  double local_30;
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_3);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    uVar1 = local_18;
    FUN_004c5a18();
    _objc_retainAutoreleasedReturnValue();
    dVar5 = 0.0;
    local_30 = 0.0;
    pcVar2 = &cf_getContentViewY;
    local_28 = uVar1;
    _NSSelectorFromString();
    uVar1 = local_18;
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,local_38);
      local_30 = dVar5;
    }
    if (local_28 == 0) {
      local_b0 = 0.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentOffset_0269dd18);
      local_b0 = param_2;
      local_50 = dVar5;
      local_48 = param_2;
    }
    local_40 = local_b0;
    if ((local_28 == 0) || (local_b0 <= -(local_30 + 80.0))) {
      pcVar2 = &cf_notifyTaskBarOnMainTableViewDidScroll_;
      _NSSelectorFromString();
      local_58 = pcVar2;
      if ((local_28 != 0) &&
         (uVar1 = local_18,
         (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar2),
         (uVar1 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,local_58,local_28);
      }
      uVar1 = local_18;
      FUN_004c5ecc();
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar1;
      if (uVar1 == 0) {
        local_1c = 1;
      }
      else {
        if (local_28 == 0) {
          local_b8 = 0.0;
        }
        else {
          local_b8 = -local_40 - local_30;
        }
        local_68 = local_b8;
        if ((local_b8 < 150.0) &&
           ((*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_height_026a12d8),
           (uVar1 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_height_026a12d8);
          local_68 = local_b8;
        }
        pcVar2 = &cf_unreset;
        _NSSelectorFromString();
        uVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar2);
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,pcVar2);
        }
        pcVar2 = &cf_updateVisiableOffset_borderOffset_;
        _NSSelectorFromString();
        uVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar2);
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_68,0x4059000000000000,local_60,pcVar2);
        }
        dVar5 = 0.0;
        local_80 = 0.0;
        pcVar3 = "UiUtil";
        _objc_getClass();
        pcVar2 = &cf_navigationBarHeightCurOri;
        _NSSelectorFromString();
        if ((pcVar3 != (char *)0x0) &&
           (pcVar4 = pcVar3,
           (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,pcVar2),
           ((ulong)pcVar4 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar2);
          local_80 = dVar5;
        }
        pcVar2 = &cf_updateVisibleOffset_startOffset_borderOffset_;
        _NSSelectorFromString();
        uVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar2);
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68 + local_80,0,0x4059000000000000,local_60,pcVar2);
        }
        pcVar2 = &cf_updateWebBgViewAlphaProgress_;
        _NSSelectorFromString();
        uVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar2);
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_60,pcVar2);
        }
        pcVar2 = &cf_relayoutSubviews;
        _NSSelectorFromString();
        uVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar2);
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,pcVar2);
        }
        local_1c = 0;
      }
      _objc_storeStrong(&local_60,0);
    }
    else {
      local_1c = 1;
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

