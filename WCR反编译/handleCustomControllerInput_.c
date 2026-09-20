// handleCustomControllerInput: @ 01a49a94

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::handleCustomControllerInput_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  ID local_a8;
  undefined *local_a0;
  ID local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70 [2];
  undefined *local_60;
  uint local_54;
  ID local_50;
  ID local_48;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = local_28;
  local_40 = uVar1;
  _objc_getAssociatedObject(local_28,PTR_s_handleCustomControllerInput__026bca58);
  _objc_retainAutoreleasedReturnValue();
  local_48 = local_a8;
  if (local_a8 == 0) {
    local_a8 = 0xffffffffffffffff;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_integerValue_026ca750);
  }
  local_50 = local_a8;
  if (((long)local_a8 < 0) || (3 < (long)local_a8)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_WCRefine,&cf_elnx_Mn_vceb,&cf_nx_);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_setAssociatedObject(local_28,PTR_s_handleCustomControllerInput__026bca58,0,1);
    local_54 = 1;
    goto LAB_01a4a430;
  }
  _objc_setAssociatedObject(local_28,PTR_s_handleCustomControllerInput__026bca58,0,1);
  if ((local_40 == 0) ||
     (uVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_WCRefine,&cf_eQN_Nzz,&cf_nx_,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    local_54 = 1;
    goto LAB_01a4a430;
  }
  local_60 = (undefined *)0x0;
  local_70[1] = 0;
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&::cf__);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_40;
    _NSClassFromString();
    puVar6 = PTR_WCRefineHelper_026ce000;
    local_90 = uVar1;
    if (uVar1 != 0) {
      _objc_storeStrong(&local_60,local_40);
      _objc_storeStrong(local_70 + 1,local_40);
      goto LAB_01a49fb4;
    }
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_WCRefine,puVar3,&cf_nx_,0,
               in_x6,in_x7,uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_54 = 1;
  }
  else {
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_70[0] = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
    if (uVar1 == 2) {
      uVar1 = local_70[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_70[0];
      local_78 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      local_80 = uVar2;
      _NSClassFromString();
      puVar6 = PTR_WCRefineHelper_026ce000;
      local_88 = uVar2;
      if (uVar2 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_60;
        local_60 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        _objc_storeStrong(local_70 + 1,local_80);
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        uVar1 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_WCRefine,puVar3,
                   &cf_nx_,0,in_x6,in_x7,uVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      local_54 = (uint)(uVar2 == 0);
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      if (local_54 == 0) {
        local_54 = 0;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                 &cf_WCRefine,&cf_<h__:NTy_,&cf_nx_,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      local_54 = 1;
    }
    _objc_storeStrong(local_70,0);
    if (local_54 == 0) {
LAB_01a49fb4:
      IVar4 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028e4488);
      _objc_retainAutoreleasedReturnValue();
      local_98 = IVar4;
      if (IVar4 != 0) {
        (**(code **)(IVar4 + 0x10))();
        _objc_setAssociatedObject(local_28,&DAT_028e4488,0,3);
      }
      local_a0 = (undefined *)0x0;
      if (local_50 == 0) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_a0;
        local_a0 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar6 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      else if (local_50 == 1) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_a0;
        local_a0 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar6 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      else if (local_50 == 2) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_a0;
        local_a0 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar6 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      else if (local_50 == 3) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_a0;
        local_a0 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar6 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      puVar6 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_98,0);
      local_54 = 0;
    }
  }
  _objc_storeStrong(local_70 + 1);
  _objc_storeStrong(&local_60,0);
LAB_01a4a430:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

