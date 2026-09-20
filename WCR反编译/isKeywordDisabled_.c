// isKeywordDisabled: @ 01b34f14

/* Function Stack Size: 0x18 bytes */

bool WCRefineKeywordAlertKeywordsViewController::isKeywordDisabled_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
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
  FUN_01b34a74();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  local_48 = 0;
  if (lVar1 != 0) {
    local_40 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_disabledKeys_026bef48);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = (byte)IVar2;
  }
  local_11 = local_48 & 1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

