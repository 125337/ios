// selectAll @ 01c7684c

/* Function Stack Size: 0x10 bytes */

void WCRefinePageBackgroundLibraryViewController::selectAll(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_displayFiles_026c2680);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSPredicate_026ce8f0;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01c76aec;
  local_38 = &DAT_02589138;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_predicateWithBlock__026ab6e0,&local_50);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_filteredArrayUsingPredicate__026b0178);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedFiles_026c2690);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar3 == IVar4) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedFiles_026c2690);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedFiles_026c2690);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_30,0);
  return;
}

