// themeSwipeActionButtonTapped: @ 01fc12dc

/* Function Stack Size: 0x18 bytes */

void WCRefineWechatThemeManagerViewController::themeSwipeActionButtonTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  long local_38;
  ID local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_swipeOpenThemeName_026ca090);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  lVar3 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028e4900);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_closeThemeSwipeOverlayAnimated__026c9f78,1);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((IVar1 != 0) &&
     (lVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar3 != 0)) {
    lVar3 = local_38;
    _NSSelectorFromString();
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,lVar3);
    if ((IVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,lVar3,local_30);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

