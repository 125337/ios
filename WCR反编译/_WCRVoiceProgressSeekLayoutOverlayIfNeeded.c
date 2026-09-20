// _WCRVoiceProgressSeekLayoutOverlayIfNeeded @ 015c38ec

void _WCRVoiceProgressSeekLayoutOverlayIfNeeded
               (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  double dVar2;
  long local_30;
  uint local_24;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_5);
  lVar1 = local_18;
  FUN_015c33ec();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  if ((lVar1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_alpha_026ca4d8), param_1 < DAT_02323d38)) {
    local_24 = 1;
  }
  else {
    lVar1 = local_18;
    dVar2 = DAT_02323d38;
    FUN_015c2a0c();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    if (lVar1 != 0) {
      FUN_015c3a54(local_18,lVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,dVar2,param_3,param_4,local_20,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_layoutIfNeeded_026ca790);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bringSubviewToFront__026ca550,local_20);
    }
    local_24 = (uint)(lVar1 == 0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

