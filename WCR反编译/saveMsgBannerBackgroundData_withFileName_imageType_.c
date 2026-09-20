// saveMsgBannerBackgroundData:withFileName:imageType: @ 01b9b320

/* Function Stack Size: 0x28 bytes */

void WCRefineMessageBannerBeautifyViewController::
     saveMsgBannerBackgroundData_withFileName_imageType_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ulong uVar1;
  long lVar2;
  ID IVar3;
  ID local_60;
  ID local_58;
  undefined4 local_4c;
  long local_48;
  long local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (lVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    FUN_01b98aa8(&cf_saverawdataskippedimageType___fileName___dataLen__lu);
    local_4c = 1;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getCurrentMsgBannerImageFolderPa_026c0090);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_deleteOldMsgBannerImagesInFolder_026c0130,IVar3,local_48);
    IVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_stringByAppendingPathComponent__026cab30,local_40);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_60 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_writeToFile_atomically__0269f928,IVar3,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    FUN_01b98aa8(&cf_saverawdataimageType___fileName___target___dataLen__lusuccess___);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_triggerHapticFeedback_0269dc78);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sendSettingsChangedNotification_026b61d8)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

