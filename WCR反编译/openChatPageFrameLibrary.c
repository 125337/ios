// openChatPageFrameLibrary @ 01841468

/* Function Stack Size: 0x10 bytes */

void WCRefineAvatarFrameSpecialUserDetailViewController::openChatPageFrameLibrary
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_setAssociatedObject(param_1,"WCRefineAvatarFrameSelectTarget",&cf_chatPage,3);
  puVar1 = PTR_WCRefineAvatarFrameLibraryViewController_026ce218;
  _objc_alloc_init();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setIsSelectMode__026b5890,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPreviewRole__026b62e0,1);
  IVar5 = local_18;
  puVar1 = local_28;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stringValueForKey__026b6670,&cf_chatPagePath)
  ;
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_stringValueForKey__026b6670,&cf_chatPageNightPath);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_integerValueForKey_default__026b6678,&cf_chatPageAddMode,0);
  uVar6 = 0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_floatValueForKey_default__026b6680,&cf_chatPageOffsetX);
  uVar7 = 0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_floatValueForKey_default__026b6680,&cf_chatPageOffsetY);
  uVar8 = 0x3ff8000000000000;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff8000000000000,local_18,PTR_s_floatValueForKey_default__026b6680,&cf_chatPageScale)
  ;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar7,uVar8,IVar5,PTR_s_configureLibraryForSpecialSelect_026b6740,puVar1,IVar2,
             IVar3,IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDelegate__026ca910,local_18);
  IVar5 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  if ((IVar2 & 1) == 0) {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
  }
  else {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

