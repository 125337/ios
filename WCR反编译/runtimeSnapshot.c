// runtimeSnapshot @ 01616c14

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatProfileStore::runtimeSnapshot(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID local_50;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mutableCurrentProfile_026b1888);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = IVar1;
  (*(code *)PTR__objc_release_02578630)();
  _WCRSuperFloatEnabledActions();
  _objc_retainAutoreleasedReturnValue();
  local_50 = param_1;
  if (param_1 == 0) {
    local_50 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,&cf_enabledActions);
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithBool__0269ce60,puVar3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_superFloatEnabled);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuFillColorHex_026b18d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,IVar1,&cf_menuFillColorHex);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuFillColorHexDark_026b1968);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,IVar1,&cf_menuFillColorHexDark);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuIconColorHex_026b1970);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,IVar1,&cf_menuIconColorHex);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuIconColorHexDark_026b1978);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,IVar1,&cf_menuIconColorHexDark);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuTitleColorHex_026b1980);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,IVar1,&cf_menuTitleColorHex);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuTitleColorHexDark_026b1988);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,IVar1,&cf_menuTitleColorHexDark);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuStrokeColorHexDark_026b1990);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,IVar1,&cf_menuStrokeColorHexDark);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuHighlightColorHexDark_026b1998);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,IVar1,
             &cf_menuHighlightColorHexDark);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fanBlurTintColorHex_026b19a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,IVar1,&cf_fanBlurTintColorHex);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fanBlurTintColorHexDark_026b19a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,IVar1,&cf_fanBlurTintColorHexDark)
  ;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_gridBackdropColorHex_026b19b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,IVar1,&cf_gridBackdropColorHex);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_gridBackdropColorHexDark_026b19b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,IVar1,&cf_gridBackdropColorHexDark
            );
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballColorHex_026b18b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,IVar1,&cf_ballColorHex);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballColorHexDark_026b19c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,IVar1,&cf_ballColorHexDark);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuOpenTrigger_026b1960);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithInteger__0269e080,IVar1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_menuOpenTrigger);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_triggerMode_026b18c0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithInteger__0269e080,IVar1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_triggerMode);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballAppearance_026b18a0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithInteger__0269e080,IVar1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_ballAppearance);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballIconCornerPercent_026b19c8);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_ballIconCornerPercent);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fanLeftHand_026b19d0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithBool__0269ce60,IVar1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_fanLeftHand);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballAppearance_026b18a0);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_wcr_sf_drag_ball,
               &cf_ballGestureLongPress);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuOpenTrigger_026b1960);
    if (IVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,&cf_ballGestureTap);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,&cf_ballGestureSwipeUp)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,
               &cf_ballGestureSwipeDown);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,
               &cf_ballGestureSwipeLeft);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,
               &cf_ballGestureSwipeRight);
  }
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

