// addSegmentCellTo:title:items:index:action:width: @ 01e4c3ec

/* Function Stack Size: 0x40 bytes */

void WCRefineTelegramGroupingViewController::addSegmentCellTo_title_items_index_action_width_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6,
               SEL param_7,double param_8)

{
  long_long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  char *pcVar7;
  ID IVar8;
  long_long local_d0;
  long_long local_c8;
  undefined *local_68;
  double local_60;
  SEL local_58;
  long_long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  puVar5 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  local_60 = param_8;
  local_58 = param_7;
  local_50 = param_6;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  lVar1 = local_50;
  lVar6 = local_48;
  local_68 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
  local_c8 = lVar6 - 1;
  if ((long)lVar1 < (long)local_c8) {
    local_c8 = lVar1;
  }
  if ((long)local_c8 < 1) {
    local_d0 = 0;
  }
  else {
    local_d0 = local_c8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setSelectedSegmentIndex__0269e9e0,local_d0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,local_58,0x1000);
  uVar3 = local_38;
  pcVar7 = "WCTableViewCellManager";
  _objc_getClass();
  IVar4 = local_28;
  uVar2 = local_40;
  IVar8 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,local_28,PTR_s_alignedControl_width__026b7c58,local_68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar7,PTR_s_normalCellForSel_target_title_ri_026b2e78,0,IVar4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  (*(code *)PTR__objc_release_02578630)(IVar8);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

