// walkPastOverlaysFrom: @ 00ffb4f0

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkMediaSender::walkPastOverlaysFrom_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  long local_40;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = IVar2;
  local_40 = 0;
  while( true ) {
    lVar1 = local_40;
    if (local_38 != 0) {
      local_40 = local_40 + 1;
    }
    if (local_38 == 0 || 0xb < lVar1) break;
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_isTransientOverlayController__026ad890,local_38);
    local_18 = local_38;
    if ((IVar2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      goto LAB_00ffb6e0;
    }
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_presentingViewController_026a0db0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar2 == 0) {
      IVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_parentViewController_0269e500);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar2 == 0) break;
      IVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_parentViewController_0269e500);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_38;
      local_38 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    else {
      IVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_presentingViewController_026a0db0);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_38;
      local_38 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
  }
  IVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = IVar2;
LAB_00ffb6e0:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

