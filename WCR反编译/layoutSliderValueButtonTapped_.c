// layoutSliderValueButtonTapped: @ 018cda78

/* Function Stack Size: 0x18 bytes */

void WCRefineChatToolbarViewController::layoutSliderValueButtonTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char *local_68;
  char *local_60;
  long local_58;
  uint local_4c;
  long local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tag_026cab98);
  local_40 = lVar2 + -0xc1c;
  FUN_018c6f28();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_40;
  local_48 = lVar2;
  if ((local_40 < 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_count_0269cfe0), lVar2 <= lVar3)) {
    local_4c = 1;
  }
  else {
    lVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_58 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setPendingLayoutItemIndex__026b7e58,local_40);
    lVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingLayoutKey__026b8090);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_min);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingLayoutMin__026b8098);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_max);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingLayoutMax__026b80a0);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    pcVar4 = "WCUIAlertView";
    _objc_getClass();
    bVar1 = pcVar4 != (char *)0x0;
    local_60 = pcVar4;
    if (bVar1) {
      _objc_alloc();
      lVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingLayoutMin_026b80a8);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingLayoutMax_026b80b0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&::cf_eQ);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_initWithTitle_message__0269d260,lVar3);
      local_68 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_showTextFieldWithMaxLen__0269e5e0,7);
      pcVar4 = local_68;
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_valueForKey__0269d128);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar7 = 0;
      FUN_018cc1ac();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setTextFieldDefaultText__0269fd98);
      (*(code *)PTR__objc_release_02578630)(uVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,
                 PTR_s_cancelLayoutEdit_026b80b8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28,
                 PTR_s_confirmLayoutEdit__026b80c0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLayoutAlert__026b80c8,local_68);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_show_0269d280);
      _objc_storeStrong(&local_68,0);
    }
    local_4c = (uint)!bVar1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

