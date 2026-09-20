// filterMutableArray:tab: @ 015222c0

/* Function Stack Size: 0x20 bytes */

void WCRefineTelegramGroupingStore::filterMutableArray_tab_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_54;
  long local_50;
  ulong local_48;
  SEL local_40;
  ID local_38;
  long local_30;
  ulong local_28;
  ulong local_20;
  long local_18;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_4);
  uVar2 = local_48;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) || (local_50 == 0)) {
    local_54 = 1;
  }
  else {
    local_60 = 0;
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    local_68 = uVar2;
    for (local_70 = 0; local_70 < local_68; local_70 = local_70 + 1) {
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_70);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_38;
      local_78 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_session_matchesTab__026b02b8,uVar2,local_50);
      if ((IVar3 & 1) != 0) {
        if (local_60 != local_70) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_setObject_atIndexedSubscript__0269e970,local_78,local_60);
        }
        local_60 = local_60 + 1;
      }
      _objc_storeStrong(&local_78,0);
    }
    local_30 = local_68 - local_60;
    local_28 = local_60;
    local_20 = local_60;
    local_18 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_removeObjectsInRange__0269dad0,local_60,local_30);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  return;
}

