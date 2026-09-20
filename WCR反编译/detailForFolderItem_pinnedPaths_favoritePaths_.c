// detailForFolderItem:pinnedPaths:favoritePaths: @ 01f892e0

/* Function Stack Size: 0x28 bytes */

ID WCRefineVoicePackPickerViewController::detailForFolderItem_pinnedPaths_favoritePaths_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *local_58;
  undefined *local_50;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
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
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_40;
  uVar4 = local_38;
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_relativePath_026ac370);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_containsObject__0269cbb8);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  if ((uVar5 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,&cf_n_v);
  }
  uVar5 = local_48;
  uVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_relativePath_026ac370);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_containsObject__0269cbb8);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  if ((uVar5 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,&cf__);
  }
  puVar3 = PTR_WCRefineVoicePackStore_026cea20;
  uVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_absolutePath_026ae300);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_cachedFolderStatsForPath__026b0bf0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  IVar2 = local_28;
  puVar1 = local_50;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (local_58 == (undefined *)0x0) {
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_absolutePath_026ae300);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_requestFolderStatsIfNeededForPat_026c99d8);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,&cf__);
  }
  else {
    puVar6 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_count);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar9 = PTR_WCRefineVoicePackStore_026cea20;
    puVar7 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_size)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_formattedSize__026b0c58,puVar8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  puVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_componentsJoinedByString__0269d140,&::cf_space_s_);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar3;
}

