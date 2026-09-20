// adjustHorizontalOffset @ 003494b0

/* Function Stack Size: 0x10 bytes */

void WCRefineHomeAvatarStripPickerBridge::adjustHorizontalOffset(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  char *pcVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint local_6c;
  char *local_60;
  byte local_51;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined1 local_31;
  ID local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar3 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  local_31 = 0;
  bVar2 = true;
  uVar1 = pcVar3 != (char *)0x0;
  local_28 = pcVar3;
  if ((bool)uVar1) {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_host_0269dc50);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar4 == 0;
    local_31 = uVar1;
    local_30 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  if (bVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_releaseFromHost_026a2230);
  }
  else {
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar7;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = local_40;
    uVar8 = 0;
    local_48 = 0;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
    local_51 = 0;
    local_6c = 0;
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_horizontalOffset);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_6c = (uint)puVar5;
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if ((local_6c & 1) != 0) {
      puVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_horizontalOffset);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_48 = uVar8;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    pcVar3 = local_28;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,8);
    pcVar3 = local_60;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setTextFieldDefaultText__0269fd98);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_cancelAction_026a2260);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_confirmHorizontalOffset_026a22b0);
    _objc_setAssociatedObject(local_18,PTR_s_adjustHorizontalOffset_026a22b8,local_60,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_show_0269d280);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_40,0);
  }
  return;
}

