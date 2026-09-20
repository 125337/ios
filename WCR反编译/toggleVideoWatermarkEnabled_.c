// toggleVideoWatermarkEnabled: @ 01802a68

/* Function Stack Size: 0x18 bytes */

void WCRefineAssistFunctionViewController::toggleVideoWatermarkEnabled_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_88;
  undefined *local_80;
  ID local_78;
  ID local_70;
  ID local_68;
  ID local_60;
  ID local_58;
  undefined4 local_4c;
  ID local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar6;
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  if (local_48 == 0) {
    local_4c = 1;
    goto LAB_01802fb4;
  }
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = IVar5;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  if (local_58 == 0) {
LAB_01802c64:
    local_4c = 1;
  }
  else {
    IVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_section_0269e988);
    IVar6 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
    IVar4 = local_58;
    if (IVar6 <= IVar5) goto LAB_01802c64;
    IVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_section_0269e988);
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_objectAtIndexedSubscript__0269cc78,IVar5);
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_performSelector__026ca7b8,PTR_s_getAllCells_026a5540);
    _objc_retainAutoreleasedReturnValue();
    local_68 = IVar4;
    if (IVar4 == 0) {
LAB_01802d38:
      local_4c = 1;
    }
    else {
      IVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_row_0269e210);
      IVar6 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
      IVar4 = local_68;
      if (IVar6 <= IVar5) goto LAB_01802d38;
      IVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_row_0269e210);
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_objectAtIndexedSubscript__0269cc78,IVar5);
      _objc_retainAutoreleasedReturnValue();
      local_70 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_valueForKey__0269d128,&cf_userInfo);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar7 = PTR_WCRefineConfig_026cdf58;
      local_78 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_80 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_videoWatermark_ldEnabled);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_80;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      uVar2 = local_38;
      local_88 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isOn_0269d560);
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithBool__0269ce60,uVar2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setValue_forKey__0269d300,puVar7,local_88);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_saveConfig_0269e5d0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_70,0);
      local_4c = 0;
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_58,0);
LAB_01802fb4:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

