// saveEmoticonToAlbumFromCell: @ 00f47db0

/* Function Stack Size: 0x18 bytes */

void WCRefineEmoticonToolsHelper::saveEmoticonToAlbumFromCell_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  ID local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_messageWrapFromCell__026ac0d8,local_28);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_emoticonMD5FromMessageWrap__026aa7d0,IVar1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideMenuController_026aa7a0);
  IVar2 = local_18;
  IVar1 = local_38;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_downloadCandidatesFromMessageWra_026ac348,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc0000000;
  local_54 = 0;
  local_50 = FUN_00f47f30;
  local_48 = &DAT_02582f48;
  local_40 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_fetchEmoticonDataWithMD5_candida_026ac358,IVar1,IVar3,&local_60);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

