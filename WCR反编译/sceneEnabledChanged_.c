// sceneEnabledChanged: @ 01c4e714

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateSpecialUserDetailViewController::sceneEnabledChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ulong uVar2;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  lVar1 = uVar2 - 8000;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeExclusiveScene__026c1c78,lVar1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_seedDraftFromGlobalIfNeeded__026c1c70,lVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addExclusiveScene__026c1c60,lVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDraftDirty__026c1be8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

