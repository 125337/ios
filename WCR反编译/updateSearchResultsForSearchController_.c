// updateSearchResultsForSearchController: @ 017d43b0

/* Function Stack Size: 0x18 bytes */

void WCRAIModelPickerViewController::updateSearchResultsForSearchController_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchBar_026a2698);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  lVar1 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSPredicate_026ce8f0;
  if (lVar2 == 0) {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_allModels_026b51d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setVisibleModels__026b51e0);
    (*(code *)PTR__objc_release_02578630)(IVar5);
  }
  else {
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_017d46c0;
    local_48 = &DAT_02589138;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_predicateWithBlock__026ab6e0,&local_60);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_18;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_allModels_026b51d8);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setVisibleModels__026b51e0);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_40,0);
  }
  IVar5 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

