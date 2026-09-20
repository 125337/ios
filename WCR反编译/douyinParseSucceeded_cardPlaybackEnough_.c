// douyinParseSucceeded:cardPlaybackEnough: @ 0102eee8

/* Function Stack Size: 0x1c bytes */

bool WCRefineLinkParser::douyinParseSucceeded_cardPlaybackEnough_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ID IVar4;
  ID IVar5;
  ulong uVar6;
  uint local_9c;
  uint local_74;
  ulong local_68;
  ulong local_58;
  ulong local_48;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imagesFromPageScan_026ade90);
  if ((uVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_ensureDouyinBrowserPlaybackURLFo_026ad9e8,local_30);
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isImageNote_026ad960);
    IVar4 = local_20;
    bVar2 = false;
    bVar1 = false;
    local_74 = 1;
    if ((uVar3 & 1) == 0) {
      local_48 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_resolvedURL_026ad978);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_douyinURLIsImageNote__026ade98);
      IVar5 = local_20;
      local_74 = 1;
      if ((IVar4 & 1) == 0) {
        local_58 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sourceURL_026ad980);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_douyinURLIsImageNote__026ade98);
        local_74 = (uint)IVar5;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if ((local_74 & 1) == 0) {
      bVar1 = false;
      local_9c = 0;
      if ((param_4 & 1) != 0) {
        local_68 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_browserPlaybackURL_026ad968);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        uVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_9c = 0;
        if (uVar3 != 0) {
          uVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isImageNote_026ad960);
          local_9c = (uint)uVar3 ^ 1;
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      if ((local_9c & 1) == 0) {
        IVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_douyinResultHasPrimaryMedia__026adea0,local_30);
        local_11 = (byte)IVar4 & 1;
      }
      else {
        local_11 = 1;
      }
    }
    else {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageURLs_026adac8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = uVar6 != 0;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

