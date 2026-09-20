// customEntry:conflictsWithExistingExceptIndex: @ 017795b8

/* Function Stack Size: 0x20 bytes */

bool WCRefinePluginHubManager::customEntry_conflictsWithExistingExceptIndex_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ulong local_58;
  ID local_50;
  undefined4 local_44;
  ID local_40;
  long_long local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_identifierForCustomEntry__026b4450,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_11 = 1;
    local_44 = 1;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_customEntryDefinitions_026b4448);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar1;
    for (local_58 = 0; IVar2 = local_50,
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0), IVar1 = local_20,
        local_58 < IVar2; local_58 = local_58 + 1) {
      if (local_58 != local_38) {
        IVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_58);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_identifierForCustomEntry__026b4450);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar1);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        if ((IVar3 & 1) != 0) {
          local_11 = 1;
          goto LAB_017797ac;
        }
      }
    }
    local_11 = 0;
LAB_017797ac:
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

