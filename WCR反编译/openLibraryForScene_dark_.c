// openLibraryForScene:dark: @ 01a844e4

/* Function Stack Size: 0x1c bytes */

void WCRefineGlobalPageBackgroundViewController::openLibraryForScene_dark_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_38;
  uint local_30;
  undefined1 local_29;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (undefined1)param_4;
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    puVar2 = PTR_WCRefinePageBackgroundLibraryViewController_026cf2d8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar3 = local_18;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_38,0);
  }
  local_30 = (uint)(lVar1 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

