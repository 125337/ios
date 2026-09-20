// updateLocalEntry: @ 01f19948

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoStore::updateLocalEntry_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  ID local_48;
  ulong local_40;
  byte local_31;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mutableLocalItems_026c82d0);
  _objc_retainAutoreleasedReturnValue();
  local_31 = 0;
  local_30 = IVar3;
  for (local_40 = 0; uVar2 = local_40, IVar3 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0), uVar2 < IVar3;
      local_40 = local_40 + 1) {
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entryId_026c7430);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isEqual__0269e9a8);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    bVar1 = (IVar5 & 1) != 0;
    if (bVar1) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_localDictFromEntry__026c82d8,local_28);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_setObject_atIndexedSubscript__0269e970,IVar3,local_40);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      local_31 = 1;
    }
    _objc_storeStrong(&local_48,0);
    if (bVar1) break;
  }
  IVar3 = local_30;
  if ((local_31 & 1) == 0) {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_localDictFromEntry__026c82d8,local_28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(IVar5);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveLocalItems__026c82e0,local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

