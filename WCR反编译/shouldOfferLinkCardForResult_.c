// shouldOfferLinkCardForResult: @ 01004540

/* Function Stack Size: 0x18 bytes */

bool WCRefineLinkMediaSender::shouldOfferLinkCardForResult_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_11 = false;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_platform_026ad958);
    if (uVar1 == 1) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isImageNote_026ad960);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_browserPlaybackURL_026ad968);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_11 = uVar2 != 0;
      }
      else {
        local_11 = false;
      }
    }
    else {
      local_11 = false;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

