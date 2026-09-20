// selectLinkedGroupsFrom:selected:preserveGroups:completion: @ 01e44864

/* Function Stack Size: 0x2c bytes */

void WCRefineTelegramGroupingTabsViewController::
     selectLinkedGroupsFrom_selected_preserveGroups_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6,
               undefined4 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long local_80;
  undefined *local_50;
  undefined *local_48;
  undefined8 local_40;
  byte local_31;
  long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_31 = (byte)param_5;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  puVar1 = PTR_WCRTGLinkedGroupPicker_026cf650;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_30 == 0) {
    local_80 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_80 = local_30;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSetWithArray__026a4b80,
             local_80);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setSelected__0269fd48);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setPreserveGroups__026c64c0,local_31 & 1);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCompletion__0269fdc8,local_40);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setModalPresentationStyle__0269d2a8,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_50,1);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

