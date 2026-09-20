// isTransientOverlayController: @ 00ffa7e4

/* Function Stack Size: 0x18 bytes */

bool WCRefineLinkMediaSender::isTransientOverlayController_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_11 = 1;
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_ActionSheet);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_containsString__0269d0b0,&cf_AlertController);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_containsString__0269d0b0,&cf_UISnapshot);
        if ((uVar1 & 1) == 0) {
          local_11 = 0;
        }
        else {
          local_11 = 1;
        }
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 1;
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

