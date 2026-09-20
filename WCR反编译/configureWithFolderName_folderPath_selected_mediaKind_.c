// configureWithFolderName:folderPath:selected:mediaKind: @ 01cfbb34

/* Function Stack Size: 0x2c bytes */

void WCRefineProfileBgRegularRepoCell::configureWithFolderName_folderPath_selected_mediaKind_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,long_long param_6)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long local_128;
  long local_118;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  long_long local_50;
  byte local_41;
  undefined8 local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_41 = (byte)param_5;
  local_50 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameLabel_026ad1e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  uVar6 = 0x4000000000000000;
  if ((local_41 & 1) == 0) {
    uVar6 = 0;
  }
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardView_026a5340);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar6);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBlueColor_026cab58);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardView_026a5340);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  _WCRefineProfileBgPreviewResolveDayNightOfKind(local_40,local_50,&local_68,&local_70);
  _objc_storeStrong(&local_58,local_68);
  _objc_storeStrong(&local_60,local_70);
  lVar4 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  lVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_applyVisibleDay_night__026c3ba0,lVar4 != 0,lVar5 != 0);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dayPane_026c3b20);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    local_118 = local_58;
  }
  else {
    local_118 = 0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_showMediaAtPath__026c3ba8,local_118);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nightPane_026c3b28);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    local_128 = local_60;
  }
  else {
    local_128 = 0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_showMediaAtPath__026c3ba8,local_128);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

