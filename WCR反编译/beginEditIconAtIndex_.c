// beginEditIconAtIndex: @ 01e33a78

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatURLSchemeViewController::beginEditIconAtIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  long_long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  undefined *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRSuperFloatProfileStore_026cee48;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_urlSchemes_026b1a10);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_28;
  local_30 = puVar2;
  if (((long)local_28 < 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0),
     (long)puVar2 <= (long)lVar1)) {
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEditingIndex__026c62e8,local_28);
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_40;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       puVar2 == (undefined *)0x0)) {
      _objc_storeStrong(&local_40,&cf_icons_outlined_link);
    }
    puVar2 = PTR_RepeatThemeIconSelectorViewController_026ceed0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_RepeatThemeIconSelectorViewController_026ceed0,PTR_s_new_0269d288);
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setIconType__026b3010,&cf_URLScheme);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setIsDark__026b3018,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCustomTitle__026b7050,&cf_bVh);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setAllowsAlbumPick__026b7058,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCurrentIconValue__026b32a8,local_40);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDelegate__026ca910,local_18);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

