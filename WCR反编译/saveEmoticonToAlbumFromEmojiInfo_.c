// saveEmoticonToAlbumFromEmojiInfo: @ 00f48fe4

/* Function Stack Size: 0x18 bytes */

void WCRefineEmoticonToolsHelper::saveEmoticonToAlbumFromEmojiInfo_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  ID local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  bVar1 = local_28 != 0;
  if (bVar1) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_stringValueFromObject_key__026abfe0,local_28,&cf_md5);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    IVar4 = local_18;
    local_38 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_downloadCandidatesFromEmojiInfo__026ac398,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc0000000;
    local_54 = 0;
    local_50 = FUN_00f49150;
    local_48 = &DAT_02582f48;
    local_40 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_fetchEmoticonDataWithMD5_candida_026ac358,IVar3,IVar4,&local_60);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_38,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastErrorWithText__0269ced8,&cf_elSh_Oo_);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

