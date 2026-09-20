// FUN_01768de0 @ 01768de0

void FUN_01768de0(long param_1,byte param_2,undefined8 param_3)

{
  long lVar1;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  long local_38;
  long local_30;
  cfstringStruct *local_28;
  byte local_19;
  long local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = param_1 + 0x20;
  local_30 = param_1;
  _objc_loadWeakRetained();
  local_38 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setLoading__026b36f8,0);
    if ((local_19 & 1) == 0) {
      if (local_28 == (cfstringStruct *)0x0) {
        local_68 = &cf_QQbc1Y_;
      }
      else {
        local_68 = local_28;
      }
      local_58 = local_68;
    }
    else {
      local_58 = &cf_QQbcbRS;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_showResultWithMessage_isSuccess__026b3438,local_58,local_19 & 1);
  }
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

