// cachedAllMembers @ 01aadbb8

/* Function Stack Size: 0x10 bytes */

ID WCRGroupCreateViewController::cachedAllMembers(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined8 local_40;
  
  if (*(long *)(param_1 + (long)_allMembersSnapshot) == 0) {
    puVar1 = PTR_WCRefineGroupDataProvider_026ce540;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_40 = *(undefined **)PTR____NSArray0___02578280;
    }
    _objc_storeStrong(param_1 + (long)_allMembersSnapshot,local_40);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  IVar4 = *(ID *)(param_1 + (long)_allMembersSnapshot);
  _objc_retainAutoreleaseReturnValue();
  return IVar4;
}

