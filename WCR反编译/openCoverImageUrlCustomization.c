// openCoverImageUrlCustomization @ 01c24478

/* Function Stack Size: 0x10 bytes */

void WCRefineMusicCoverViewController::openCoverImageUrlCustomization(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_coverImageUrl_026c1588);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getDefaultAvatarUrl_026c15b0);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_28;
    local_28 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  IVar2 = local_18;
  IVar1 = local_28;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01c245f0;
  local_38 = &DAT_025872d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_showInputAlertWithTitle_placehol_026b9588,&cf_Lkf_b,&cf_eQ_bVGrU,IVar1,
             &local_50);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

