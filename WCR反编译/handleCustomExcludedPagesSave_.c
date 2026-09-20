// handleCustomExcludedPagesSave: @ 01a7ec2c

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineGlobalCornerSettingsViewController::handleCustomExcludedPagesSave_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  ID local_40;
  undefined4 local_34;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  IVar1 = local_18;
  _objc_getAssociatedObject(local_18,"globalCornerExcludeTextView");
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = IVar1;
  if (IVar1 == 0) {
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_resignFirstResponder_0269ea18);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    IVar1 = local_18;
    _objc_getAssociatedObject(local_18,"currentGlobalCornerExcludeSheet");
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar1;
    if (IVar1 != 0) {
      dVar3 = _dispatch_time(0,300000000);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_40;
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_01a7eea4;
      local_50 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = IVar1;
      _dispatch_after(dVar3,puVar2,&local_68);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

