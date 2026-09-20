// persistSelectedGroupIdentifier @ 0178f7b8

/* Function Stack Size: 0x10 bytes */

void WCPluginsViewControllerBehavior::persistSelectedGroupIdentifier(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  
  puVar2 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = true;
  if (((ulong)puVar3 & 1) != 0) {
    IVar4 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedGroupIdentifier_026b4548);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar5 == 0;
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (!bVar1) {
    puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedGroupIdentifier_026b4548);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_setObject_forKey__026ca9e8,param_1,
               &cf_WCRPluginHubLastSelectedGroupIdentifier);
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

