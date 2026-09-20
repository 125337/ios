// wcrHomeAvatarStrip_viewDidAppear: @ 0034eb78

/* Function Stack Size: 0x14 bytes */

void WCRefineHomeAvatarStripHook::wcrHomeAvatarStrip_viewDidAppear_
               (ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_wcrHomeAvatarStrip_viewDidAppear_026a2328,param_3 & 1);
  FUN_0034e7a8();
  if ((IVar1 & 1) != 0) {
    FUN_0034e734();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    FUN_0034ec20(param_1,&cf_viewDidAppear);
  }
  return;
}

