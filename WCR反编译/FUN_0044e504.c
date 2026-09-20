// FUN_0044e504 @ 0044e504

void FUN_0044e504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_70;
  byte local_61;
  undefined8 local_60;
  undefined4 local_54;
  undefined *local_50;
  undefined8 local_48 [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeFromSuperview_026ca800);
  uVar2 = local_18;
  FUN_0045fe90();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440;
  local_48[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_relativePathResolvingWrap__026a3d80,uVar2
            );
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
  if (puVar4 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el_Rh_);
    local_54 = 1;
  }
  else {
    local_60 = 0;
    local_70 = 0;
    puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_deleteRelativePath_error__026a3a78,
               local_50,&local_70);
    _objc_storeStrong(&local_60,local_70);
    local_61 = (byte)puVar4;
    uVar2 = local_18;
    FUN_00460088();
    FUN_004507ac();
    _objc_retainAutoreleasedReturnValue();
    FUN_0043c2a4();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    pcVar1 = &cf__Rd;
    if ((local_61 & 1) == 0) {
      pcVar1 = &cf_Rd1Y_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

