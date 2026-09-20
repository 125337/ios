// setStoredIcon:forTabIndex: @ 019b6b8c

/* Function Stack Size: 0x20 bytes */

void WCRefineFloatingTabBarButtonActionViewController::setStoredIcon_forTabIndex_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  cfstringStruct *local_58;
  cfstringStruct *local_40;
  undefined *local_38;
  long_long local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  if (local_28 == (cfstringStruct *)0x0) {
    local_58 = &::cf___;
  }
  else {
    local_58 = local_28;
  }
  local_38 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_58;
  if (local_30 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setFloatingTabBarExtraButtonIcon_026ba958,local_58);
  }
  else if (local_30 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setFloatingTabBarExtraButtonIcon_026ba960,local_58);
  }
  else if (local_30 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setFloatingTabBarExtraButtonIcon_026ba968,local_58);
  }
  else if (local_30 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setFloatingTabBarExtraButtonIcon_026ba970,local_58);
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

