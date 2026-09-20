// normalizeVideoVersusCover: @ 01023aac

/* Function Stack Size: 0x18 bytes */

void WCRefineLinkParser::normalizeVideoVersusCover_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  ulong uVar5;
  ID IVar6;
  ulong uVar7;
  uint local_78;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar4 = local_28;
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoURL_026ad970);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_URLLooksLikeAudioMediaURL__026add00);
  IVar6 = local_28;
  local_78 = 1;
  if ((IVar4 & 1) == 0) {
    uVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoURL_026ad970);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_douyinURLLooksLikeStaticOrPrevie_026add18);
    local_78 = (uint)IVar6;
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if ((local_78 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setVideoURL__026adbb0,0);
  }
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoURL_026ad970);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = true;
  if (uVar5 == 0) {
    uVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoVariants_026ada88);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = uVar7 != 0;
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (bVar1) {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isImageNote_026ad960);
    bVar1 = false;
    if ((uVar3 & 1) != 0) {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_imageURLs_026adac8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = uVar5 != 0;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setVideoURL__026adbb0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setVideoVariants__026add50,*(undefined8 *)PTR____NSArray0___02578280
                );
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBrowserPlaybackURL__026add58,0);
    }
    else {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_coverURL_026ad9a8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = false;
      if (uVar5 == 0) {
        uVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_imageURLs_026adac8);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = uVar7 != 0;
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      IVar4 = local_28;
      if (bVar1) {
        uVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_imageURLs_026adac8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_preferCleanMediaURL__026add40);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCoverURL__026add60);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      else {
        uVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_coverURL_026ad9a8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        IVar4 = local_28;
        if (uVar5 != 0) {
          uVar3 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_coverURL_026ad9a8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_preferCleanMediaURL__026add40);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCoverURL__026add60);
          (*(code *)PTR__objc_release_02578630)(IVar4);
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
      }
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_imageURLs_026adac8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar2 = PTR____NSArray0___02578280;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setImageURLs__026add68,*(undefined8 *)PTR____NSArray0___02578280);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setLivePhotoVideoURLs__026add70,*(undefined8 *)puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setIsImageNote__026adad0,0);
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoURL_026ad970);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      IVar4 = local_28;
      if (uVar5 != 0) {
        uVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_videoURL_026ad970);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_preferCleanMediaURL__026add40);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setVideoURL__026adbb0);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

