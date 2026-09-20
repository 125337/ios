// openSongNameCustomization @ 01c240d8

/* Function Stack Size: 0x10 bytes */

void WCRefineMusicCoverViewController::openSongNameCustomization(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_songName_026c1568);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_showInputAlertWithTitle_placehol_026b9588,&cf_LkfTy,&cf_eQLkfTy,IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_28,0);
  return;
}

