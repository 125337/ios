// FUN_008fbdec @ 008fbdec

void FUN_008fbdec(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  FUN_008e575c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_18;
  local_20 = uVar2;
  FUN_008e5898();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  FUN_008fb12c();
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar4 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_Wl_);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_20;
  uVar2 = local_38[0];
  puVar1 = PTR_WCRefineVoiceCloneHelper_026cea40;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_008fc8a0;
  local_50 = &DAT_02579940;
  local_40 = puVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_sendClonedVoiceForText_toChatNam_026a9ea8,uVar3,uVar2,&local_68);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

