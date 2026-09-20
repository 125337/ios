// setCurrentColorFromUserColor: @ 019e7278

/* Function Stack Size: 0x18 bytes */

void WCRefineGlyphDrawingEditorViewController::setCurrentColorFromUserColor_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *local_48;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  bVar1 = local_28 == (undefined *)0x0;
  if (bVar1) {
    local_48 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_48;
  }
  else {
    local_48 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentColor__026bb068,local_48);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateColorViews_026bb118);
  _objc_storeStrong(&local_28,0);
  return;
}

