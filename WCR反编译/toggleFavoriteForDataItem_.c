// toggleFavoriteForDataItem: @ 010bf768

/* Function Stack Size: 0x18 bytes */

bool WCRefineMomentsMonitor::toggleFavoriteForDataItem_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ID IVar6;
  ID IVar7;
  undefined *puVar8;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar3 = local_30;
  FUN_010bf2ec();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = local_30;
  FUN_010b66f4();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  FUN_010b8aa8();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar5;
  (*(code *)PTR__objc_release_02578630)(lVar4);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  IVar2 = local_20;
  if (lVar3 == 0) {
    local_11 = false;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar2);
    IVar6 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_favoriteMomentKeys_026ae728);
    _objc_retainAutoreleasedReturnValue();
    IVar7 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar6);
    bVar1 = (IVar7 & 1) == 0;
    if (bVar1) {
      IVar6 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_favoriteMomentKeys_026ae728);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
    }
    else {
      IVar6 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_favoriteMomentKeys_026ae728);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
    }
    puVar8 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_favoriteMomentKeys_026ae728);
    _objc_retainAutoreleasedReturnValue();
    IVar7 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar8,PTR_s_setObject_forKey__026ca9e8,IVar7,&cf_WCRefineMomentsCacheFavorites);
    (*(code *)PTR__objc_release_02578630)(IVar7);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    _objc_sync_exit(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_11 = bVar1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

