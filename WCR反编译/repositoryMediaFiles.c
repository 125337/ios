// repositoryMediaFiles @ 015d68cc

/* Function Stack Size: 0x10 bytes */

ID WCRGlobalPageBackgroundStore::repositoryMediaFiles(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_78;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_repositoryPath_026aeb48);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_contentsOfDirectoryAtPath_error__0269e088,IVar2,0);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_78 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_78;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc0000000;
  local_4c = 0;
  local_48 = FUN_015d6ad0;
  local_40 = &DAT_02587388;
  local_38 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSPredicate_026ce8f0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSPredicate_026ce8f0,PTR_s_predicateWithBlock__026ab6e0,&local_58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_filteredArrayUsingPredicate__026b0178,puVar1)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

