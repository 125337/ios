// convertImageMessageToEmoticonFromCell: @ 00f3e4b8

/* Function Stack Size: 0x18 bytes */

void WCRefineEmoticonToolsHelper::convertImageMessageToEmoticonFromCell_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined **ppuVar4;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  ID local_b0;
  undefined **local_a8;
  ID local_a0;
  ID local_98;
  byte local_89;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ID local_68;
  ID local_60;
  undefined **local_58;
  undefined4 local_4c;
  ID local_48;
  ID local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_messageWrapFromCell__026ac0d8,local_38);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_chatViewControllerFromView__026ab918,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar3;
  if ((local_40 == 0) || (IVar3 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSVGr);
    local_4c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hideMenuController_026aa7a0);
    IVar2 = local_48;
    ppuVar4 = &local_88;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_00f3e80c;
    local_70 = &DAT_02582c18;
    local_60 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = IVar2;
    _objc_retainBlock();
    local_89 = 0;
    IVar2 = local_28;
    local_58 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_imageDataFromImageMessageWrap_ne_026ac1c8,local_40,&local_89);
    _objc_retainAutoreleasedReturnValue();
    local_98 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
    if ((IVar2 == 0) || ((local_89 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_startDownloadImageForWrap__026ac1d0,local_40);
      IVar2 = local_98;
      (*(code *)PTR__objc_retain_02578638)();
      IVar1 = local_28;
      IVar3 = local_40;
      ppuVar4 = local_58;
      local_a0 = IVar2;
      local_d0 = PTR___NSConcreteStackBlock_02578660;
      local_c8 = 0xc2000000;
      local_c4 = 0;
      local_c0 = FUN_00f3eb58;
      local_b8 = &DAT_02582c48;
      (*(code *)PTR__objc_retain_02578638)();
      IVar2 = local_a0;
      local_a8 = ppuVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_waitForOriginalImageFromWrap_att_026ac1b0,IVar3,0,&local_d0);
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_a0,0);
      local_4c = 0;
    }
    else {
      (*(code *)local_58[2])(local_58,local_98);
      local_4c = 1;
    }
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

