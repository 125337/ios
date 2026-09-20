// updateEmptyLabelAppearance @ 01b0ba98

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryCardViewController::updateEmptyLabelAppearance
               (ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined8 local_38;
  undefined8 local_28;
  
  IVar2 = param_1;
  FUN_01b08450();
  bVar1 = (IVar2 & 1) == 0;
  if (bVar1) {
    local_38 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02324020,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    local_28 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fe6666666666666,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_emptyLabel_026a2668);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  return;
}

