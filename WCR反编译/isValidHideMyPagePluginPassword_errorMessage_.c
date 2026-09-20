// isValidHideMyPagePluginPassword:errorMessage: @ 02095010

/* Function Stack Size: 0x20 bytes */

bool WCRefineConfig::isValidHideMyPagePluginPassword_errorMessage_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ulong uVar1;
  ulong local_40;
  ID *local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  local_38 = param_4;
  FUN_01fd868c();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 < 4) ||
     (uVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     0x14 < uVar1)) {
    if (local_38 != (ID *)0x0) {
      _objc_retainAutorelease();
      *local_38 = (ID)&cf__x;
    }
    local_11 = 0;
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

