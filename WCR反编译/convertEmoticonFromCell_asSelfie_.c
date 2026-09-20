// convertEmoticonFromCell:asSelfie: @ 00f4b5b4

/* Function Stack Size: 0x1c bytes */

void WCRefineEmoticonToolsHelper::convertEmoticonFromCell_asSelfie_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ID local_a0;
  ID local_98;
  ID local_90;
  ID local_88;
  byte local_80;
  undefined8 local_78;
  undefined8 local_70;
  ID local_68;
  uint local_5c;
  ID local_58;
  ID local_50;
  ID local_48;
  byte local_39;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (byte)param_4;
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_messageWrapFromCell__026ac0d8,local_38);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_28;
  local_48 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_emoticonMD5FromMessageWrap__026aa7d0,IVar4);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_28;
  local_50 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_chatViewControllerFromView__026ab918,local_38);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_50;
  local_58 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (((IVar5 == 0) || (local_58 == 0)) || (local_48 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSh_);
    local_5c = 1;
  }
  else {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_emoticonWrapFromMessageWrap_asSe_026ac458,local_48,local_39 & 1);
    _objc_retainAutoreleasedReturnValue();
    local_68 = IVar4;
    if (IVar4 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSh_);
      local_5c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hideMenuController_026aa7a0);
      local_70 = 0;
      local_78 = 0;
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_sendEmoticonWrap_imageData_sourc_026ac460,local_68,0,local_48,
                 local_58,local_39 & 1,&local_78);
      _objc_storeStrong(&local_70,local_78);
      bVar1 = (IVar4 & 1) == 0;
      if (bVar1) {
        _NSLog(&cf__wcr__emoticon_selfieconvertlocalmissasSelfie__derr___md5___);
        IVar3 = local_28;
        IVar5 = local_50;
        IVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_downloadCandidatesFromMessageWra_026ac348,local_48);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_68;
        local_c0 = PTR___NSConcreteStackBlock_02578660;
        local_b8 = 0xc2000000;
        local_b4 = 0;
        local_b0 = FUN_00f4b9c4;
        local_a8 = &DAT_02582ff8;
        local_88 = local_28;
        (*(code *)PTR__objc_retain_02578638)();
        IVar2 = local_48;
        local_a0 = IVar4;
        (*(code *)PTR__objc_retain_02578638)();
        IVar4 = local_58;
        local_98 = IVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = IVar4;
        local_80 = local_39 & 1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_fetchEmoticonDataWithMD5_candida_026ac050,IVar5,IVar6,0,&local_c0);
        (*(code *)PTR__objc_release_02578630)(IVar6);
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_98,0);
        _objc_storeStrong(&local_a0,0);
      }
      local_5c = (uint)!bVar1;
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}

