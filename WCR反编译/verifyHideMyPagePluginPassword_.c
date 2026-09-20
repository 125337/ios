// verifyHideMyPagePluginPassword: @ 02094ed0

/* Function Stack Size: 0x18 bytes */

bool WCRefineConfig::verifyHideMyPagePluginPassword_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  byte local_48;
  ID local_40;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  FUN_01fd868c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  lVar2 = local_38;
  local_48 = 0;
  if (lVar1 != 0) {
    local_40 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_effectiveHideMyPagePluginPasswor_026a6560);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_isEqualToString__0269ccc8);
    local_48 = (byte)lVar2;
  }
  local_11 = local_48 & 1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

