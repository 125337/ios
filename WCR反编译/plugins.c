// plugins @ 0176de78

/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginHubManager::plugins(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  IVar3 = *(ID *)(param_1 + 0x10);
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue();
  return IVar3;
}

