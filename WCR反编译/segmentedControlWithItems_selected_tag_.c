// segmentedControlWithItems:selected:tag: @ 01e1eb64

/* Function Stack Size: 0x28 bytes */

ID WCRefineSuperFloatSettingsViewController::segmentedControlWithItems_selected_tag_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,long_long param_5)

{
  undefined *puVar1;
  long lVar2;
  long_long local_90;
  long_long local_88;
  undefined *local_40;
  long_long local_38;
  long_long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  local_38 = param_5;
  local_30 = param_4;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  if ((long)local_30 < 1) {
    local_88 = 0;
  }
  else {
    local_88 = local_30;
  }
  lVar2 = local_28;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  local_90 = lVar2 - 1;
  if ((long)local_88 < (long)local_90) {
    local_90 = local_88;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setSelectedSegmentIndex__0269e9e0,local_90);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTag__026caa80,local_38);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_18,
             PTR_s_superFloatSegmentChanged__026c5f28,0x1000);
  puVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

