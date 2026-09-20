// titleForLongPressAction:tab: @ 0151cc38

/* Function Stack Size: 0x20 bytes */

ID WCRefineTelegramGroupingStore::titleForLongPressAction_tab_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  ID local_40;
  undefined8 local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  IVar2 = local_20;
  if (local_30 == 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_defaultLongPressActionForTab__026b0258,local_38);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_titleForLongPressAction_tab__026b0260,IVar1,local_38);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    local_40 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
    _objc_storeStrong(&local_40,0);
  }
  else if (local_30 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_n_ub;
  }
  else if (local_30 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_R__t;
  }
  else if (local_30 == 3) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_bXT_t;
  }
  else if (local_30 == 4) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_eR_O;
  }
  else if (local_30 == 5) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_n_vJ_Y;
  }
  else if (local_30 == 6) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_R_OUS;
  }
  else if (local_30 == 7) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_y_uR_;
  }
  else if (local_30 == 8) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_c_MRy;
  }
  else if (local_30 == 9) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_c_Ty;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_eR_O;
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

