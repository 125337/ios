// animateDeleteDraggingCell:record: @ 01b14eac

/* Function Stack Size: 0x20 bytes */

void WCRefineKeywordAlertHistoryCardViewController::animateDeleteDraggingCell_record_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  double dVar6;
  double in_d2;
  double in_d3;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  ID local_110;
  ulong local_108;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  double local_a8;
  undefined8 local_98;
  double local_50;
  undefined4 local_44;
  ulong local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar4 = local_40;
  if (local_38 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar6 = in_d3;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      in_d3 = in_d3 + dVar6;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      local_50 = in_d3;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_center_026ca560);
      IVar5 = local_28;
      dVar6 = in_d3;
      local_a8 = in_d3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_98 = 0x4041000000000000;
      if (in_d3 < in_d2 * 0.5) {
        local_98 = 0xc041000000000000;
      }
      local_c8 = dVar6;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      lVar2 = local_38;
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      puVar3 = PTR___NSConcreteStackBlock_02578660;
      local_100 = PTR___NSConcreteStackBlock_02578660;
      local_f8 = 0xc2000000;
      local_f4 = 0;
      local_f0 = FUN_01b15274;
      local_e8 = &DAT_02580e60;
      (*(code *)PTR__objc_retain_02578638)();
      IVar5 = local_28;
      local_e0 = lVar2;
      local_d8 = local_98;
      local_d0 = local_50;
      local_130 = puVar3;
      local_128 = 0xc2000000;
      local_124 = 0;
      local_120 = FUN_01b153d8;
      local_118 = &DAT_02583fe0;
      (*(code *)PTR__objc_retain_02578638)();
      uVar4 = local_40;
      local_110 = IVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_108 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323d58,0,puVar1,PTR_s_animateWithDuration_delay_option_026ca4f0,0x10000,
                 &local_100,&local_130);
      _objc_storeStrong(&local_108);
      _objc_storeStrong(&local_110,0);
      _objc_storeStrong(&local_e0,0);
      local_44 = 0;
      goto LAB_01b15248;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resetDraggingDeleteState_026bebe0);
  local_44 = 1;
LAB_01b15248:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

