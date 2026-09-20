// openKeywordAlertSelectedGroupsPicker: @ 01b3fe0c

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertViewController::openKeywordAlertSelectedGroupsPicker_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID local_80;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedGroups_026beff8);
  _objc_retainAutoreleasedReturnValue();
  local_80 = IVar3;
  if (IVar3 == 0) {
    local_80 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30[0] = local_80;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_initWeak(auStack_38,local_18);
  IVar2 = local_18;
  IVar3 = local_30[0];
  puVar1 = PTR_WCRefineChatRoomPicker_026cef60;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01b3ffb4;
  local_48 = &DAT_0257a7d0;
  _objc_copyWeak(auStack_40,auStack_38);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_presentFromViewController_title__026ab898,IVar2,&cf_b_J,IVar3,&local_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

