// gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer: @ 01fc171c

/* Function Stack Size: 0x20 bytes */

bool WCRefineWechatThemeManagerViewController::
     gestureRecognizer_shouldRecognizeSimultaneouslyWithGestureRecognizer_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  IVar2 = local_30;
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_themeSwipePan_026c9f40);
  _objc_retainAutoreleasedReturnValue();
  if (IVar2 != IVar1) {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_themeSwipePan_026c9f40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_11 = 0;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

