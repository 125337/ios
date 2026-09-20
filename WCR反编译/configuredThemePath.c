// configuredThemePath @ 015d17ac

/* WARNING: Removing unreachable block (ram,0x015d19dc) */
/* Function Stack Size: 0x10 bytes */

ID WCRefineWechatThemeStore::configuredThemePath(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_78;
  undefined *local_60;
  ID local_50;
  ID local_40;
  ID local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_78 = 0;
  }
  else {
    local_40 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_repositoryPath_026aeb48);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_78;
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  IVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (IVar3 != 0) {
    local_60 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = 0;
  if (IVar3 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

