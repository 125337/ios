// saveEmoticonToLocalRepositoryFromCell: @ 00f47fe8

/* Function Stack Size: 0x18 bytes */

void WCRefineEmoticonToolsHelper::saveEmoticonToLocalRepositoryFromCell_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  uint local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  bVar1 = ((ulong)puVar3 & 1) != 0;
  if (bVar1) {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_messageWrapFromCell__026ac0d8,local_28);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_18;
    local_38 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_emoticonMD5FromMessageWrap__026aa7d0,IVar4)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideMenuController_026aa7a0);
    IVar2 = local_18;
    IVar4 = local_40;
    IVar6 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_downloadCandidatesFromMessageWra_026ac348,local_38);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_40;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_00f481d8;
    local_50 = &DAT_02582f98;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_fetchEmoticonDataWithMD5_candida_026ac050,IVar4,IVar6,0,&local_68);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

