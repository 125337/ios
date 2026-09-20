// selectRandom @ 01c760f4

/* Function Stack Size: 0x10 bytes */

void WCRefinePageBackgroundLibraryViewController::selectRandom(ID param_1,SEL param_2)

{
  undefined *puVar1;
  bool bVar2;
  u_int32_t uVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  ID local_38;
  byte local_29;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_files_026c2670);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_29 = 0;
  bVar2 = true;
  if (IVar4 != 0) {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scene_026a6c60);
    _objc_retainAutoreleasedReturnValue();
    local_29 = 1;
    local_28 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = IVar4 == 0;
  }
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (bVar2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ofVN__Nzz);
  }
  else {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_files_026c2670);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_files_026c2670);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar3 = _arc4random_uniform((u_int32_t)IVar6);
    IVar6 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_objectAtIndexedSubscript__0269cc78,uVar3);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar6;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_38;
    puVar7 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scene_026a6c60);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dark_0269fb88);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_setMediaFileName_forScene_dark__026c2698,IVar4,IVar5,IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    puVar1 = PTR_WCRefineHelper_026ce000;
    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
    IVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringByDeletingPathExtension_0269fd18);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_stringWithFormat__0269cca8,&cf___gb_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

