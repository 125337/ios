// applyPackNamed:forRole:showToast: @ 01fbe2d8

/* Function Stack Size: 0x24 bytes */

void WCRefineWechatThemeManagerViewController::applyPackNamed_forRole_showToast_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,bool param_5)

{
  long lVar1;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (param_4 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_applyBubblePackNamed_showToast__026ca030,local_28,param_5 & 1);
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_applyThemeNamed_showToast__026ca038,local_28,param_5 & 1);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

