// reloadCache @ 01bd2b54

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsCacheViewController::reloadCache(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  undefined1 auStack_30 [8];
  long local_28;
  SEL local_20;
  ID local_18;
  
  IVar1 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadGeneration_026c0728);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setLoadGeneration__026c0730);
  local_28 = IVar1 + 1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setIsLoading__026c06f8,1);
  IVar1 = local_18;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_filterGeneration_026c0748);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setFilterGeneration__026c0750,IVar2 + 1);
  IVar1 = local_18;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_namesGeneration_026c0758);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setNamesGeneration__026c0760,IVar2 + 1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_filterQueue_026c06f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setIndexComplete__026c07c0,0);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadingView_026c0770);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_initWeak(auStack_30,local_18);
  puVar3 = PTR_WCRefineMomentsMonitor_026ce718;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01bd2e14;
  local_58 = &DAT_0258b730;
  _objc_copyWeak(auStack_50,auStack_30);
  local_48 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_loadBrowseRecords__026c07d0,&local_70);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_30);
  return;
}

