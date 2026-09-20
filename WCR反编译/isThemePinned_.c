// isThemePinned: @ 01fbe7b4

/* Function Stack Size: 0x18 bytes */

bool WCRefineWechatThemeManagerViewController::isThemePinned_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  byte local_50;
  undefined *local_48;
  undefined *local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_50 = 0;
  if (lVar1 != 0) {
    local_38 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = (byte)puVar2;
  }
  local_11 = local_50 & 1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

