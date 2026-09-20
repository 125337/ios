// viewRandomPaletteColors @ 01895958

/* Function Stack Size: 0x10 bytes */

void WCRefineChatAvatarProfileCardViewController::viewRandomPaletteColors(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *local_d0;
  undefined *local_b8;
  undefined *local_98;
  char *local_80;
  long local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined1 local_41;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_98 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_98 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_98;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_b8 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_b8;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_isUsingDefaultRandomPaletteWithL_026b7390,local_38,local_40);
  local_41 = (undefined1)IVar3;
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  puVar2 = local_40;
  local_58 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
  local_d0 = puVar2;
  if ((long)local_58 < (long)puVar2) {
    local_d0 = local_58;
  }
  local_68 = local_d0;
  local_50 = local_d0;
  puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendFormat__0269d148,&::cf_newline_s_);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_appendFormat__0269d148,&::cf_newline_s_);
  for (local_78 = 0; puVar1 = local_70, local_78 < (long)local_50; local_78 = local_78 + 1) {
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendFormat__0269d148,&::cf_newline_s_);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  pcVar5 = "WCUIAlertView";
  _objc_getClass(local_78 - (long)local_50);
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_80 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar5,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_wSN,local_28,
             PTR_s_alertCancel_026b2910);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentAlert__026aa348,local_80);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_show_0269d280);
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

