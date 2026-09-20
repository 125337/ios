// detailForVoiceItem:pinnedPaths:favoritePaths: @ 01f89768

/* Function Stack Size: 0x28 bytes */

ID WCRefineVoicePackPickerViewController::detailForVoiceItem_pinnedPaths_favoritePaths_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ID IVar6;
  ID IVar7;
  uint local_a4;
  undefined *local_60;
  long local_58;
  undefined *local_50;
  ulong local_48;
  ulong local_40;
  long local_38;
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
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_40;
  lVar3 = local_38;
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_relativePath_026ac370);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_containsObject__0269cbb8);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  if ((uVar4 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,&cf_n_v);
  }
  uVar4 = local_48;
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_relativePath_026ac370);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_containsObject__0269cbb8);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  if ((uVar4 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,&cf__);
  }
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_relativePath_026ac370);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar5;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_keyword_026c9a28);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_a4 = 0;
  if (IVar7 != 0) {
    lVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    local_a4 = 0;
    if (lVar3 != 0) {
      lVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&::cf__);
      local_a4 = (uint)lVar3 ^ 1;
    }
  }
  (*(code *)PTR__objc_release_02578630)(IVar6);
  if ((local_a4 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,local_58);
  }
  puVar2 = PTR_WCRefineVoicePackStore_026cea20;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoicePackStore_026cea20,PTR_s_listVoiceDetailForItem__026c97e0,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
  if (puVar2 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,local_60);
  }
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_repositoryCode_026b0ba8);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar3);
  puVar1 = local_50;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (lVar5 != 0) {
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_repositoryCode_026b0ba8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf____N_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  puVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_componentsJoinedByString__0269d140,&::cf_space_s_);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

