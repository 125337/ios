// isDataItemFavorite: @ 010bf598

/* Function Stack Size: 0x18 bytes */

bool WCRefineMomentsMonitor::isDataItemFavorite_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar2 = local_30;
  FUN_010bf2ec();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_30;
  FUN_010b66f4();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_010b8aa8();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar4;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  IVar1 = local_20;
  if (lVar2 == 0) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar1);
    IVar5 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_favoriteMomentKeys_026ae728);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)IVar6 & 1;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_sync_exit(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

