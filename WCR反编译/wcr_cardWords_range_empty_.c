// wcr_cardWords:range:empty: @ 01db099c

/* Function Stack Size: 0x28 bytes */

ID WCRefineSessionStatsBoardView::wcr_cardWords_range_empty_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_boardMode_026c4e58);
  local_40 = &cf_J_Yp;
  if (IVar2 != 2) {
    local_40 = &cf__Jp;
  }
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_18;
  uVar1 = local_28;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_boardMode_026c4e58);
  pcVar4 = &cf_words;
  FUN_01db0b2c(&cf_words,IVar3,local_40);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_wcr_cardWords_title_range_empty__026c5048,uVar1,pcVar4,local_30,local_38,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

