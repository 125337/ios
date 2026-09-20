// uniqueThemePathForName: @ 015d25ac

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

ID WCRefineWechatThemeStore::uniqueThemePathForName_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_repositoryPath_026aeb48);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  while( true ) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar1 = local_30[0];
    if (((ulong)puVar4 & 1) == 0) break;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_repositoryPath_026aeb48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____lu);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_30[0];
    local_30[0] = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

