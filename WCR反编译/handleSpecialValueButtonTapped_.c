// handleSpecialValueButtonTapped: @ 018436ec

/* Function Stack Size: 0x18 bytes */

void WCRefineAvatarFrameSpecialUserDetailViewController::handleSpecialValueButtonTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  char *pcVar5;
  float fVar6;
  double dVar7;
  char *local_58;
  double local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  byte local_31;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c6578);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_28;
  local_30 = lVar2;
  _objc_getAssociatedObject(local_28,"WCRSpecialSliderIsScale");
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar3);
  local_31 = (byte)lVar2;
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingValueKey__026b6778,local_30);
    IVar1 = local_18;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_31 & 1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(IVar1,"WCRSpecialPendingIsScale",puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_40 = &cf_n___>e_Y_;
    if ((local_31 & 1) == 0) {
      local_40 = &cf_n_MOy;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf_V;
    if ((local_31 & 1) == 0) {
      local_48 = &cf_V;
    }
    (*(code *)PTR__objc_retain_02578638)();
    fVar6 = 1.5;
    if ((local_31 & 1) == 0) {
      fVar6 = 0.0;
    }
    dVar7 = (double)fVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_floatValueForKey_default__026b6680,local_30);
    pcVar5 = "WCUIAlertView";
    local_50 = dVar7;
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x10);
    pcVar5 = local_58;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_setTextFieldDefaultText__0269fd98);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_handleSpecialValueInput__026b6780);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_58);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

