// presentPercentInputForKey:title: @ 01a833f0

/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRefineGlobalPageBackgroundViewController::presentPercentInputForKey_title_
          (WCRefineGlobalPageBackgroundViewController *this,ID param_1,SEL param_2,ID param_3,
          ID param_4)

{
  char *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 in_d0;
  undefined8 local_d8;
  char *local_88;
  byte local_79;
  ID local_78;
  byte local_69;
  ID local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined4 local_4c;
  char *local_48;
  undefined8 local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_48 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_4c = 1;
  }
  else {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_expandedScene_026bd750);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (IVar3 == 0) {
      local_4c = 1;
    }
    else {
      puVar4 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRGlobalPageBackgroundStore_026ce9b0,PTR_s_configuration_026a1de8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_38;
      local_58 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_blur);
      puVar4 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
      local_69 = 0;
      local_79 = 0;
      if ((uVar5 & 1) == 0) {
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_expandedScene_026bd750);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_78 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_opacityForScene_configuration__026a8c40,IVar2,local_58);
        local_d8 = in_d0;
      }
      else {
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_expandedScene_026bd750);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_68 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_blurForScene_configuration__026a8c48,IVar2,local_58);
        local_d8 = in_d0;
      }
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      local_60 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingPercentKey__026bd7c8,local_38);
      pcVar1 = local_48;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_88 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPercentAlert__026bd7d0,pcVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,
                 PTR_s_cancelPercentInput_026bd7d8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28,
                 PTR_s_confirmPercentInput_026bd7e0);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_showTextFieldWithMaxLen__0269e5e0,3);
      pcVar1 = local_88;
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setTextFieldDefaultText__0269fd98);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_show_0269d280);
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_58,0);
      local_4c = 0;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

