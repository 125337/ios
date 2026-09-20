// rolePillChanged: @ 01fbac0c

/* Function Stack Size: 0x18 bytes */

void WCRefineWechatThemeManagerViewController::rolePillChanged_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedIndex_0269e580);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRole__026c9f70,lVar1 == 1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_closeThemeSwipeOverlayAnimated__026c9f78,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadThemes_026c9f60);
  _objc_storeStrong(&local_28,0);
  return;
}

