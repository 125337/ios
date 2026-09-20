// FUN_017028e0 @ 017028e0

void FUN_017028e0(long param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_78;
  cfstringStruct *local_68;
  long local_40;
  long local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  byte local_19;
  long local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar1 = param_1 + 0x20;
  local_38 = param_1;
  _objc_loadWeakRetained();
  local_40 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setLoading__026b36f8,0);
    lVar1 = local_40;
    if ((local_19 & 1) == 0) {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_78 = &cf_QQbc1Y_;
      }
      else {
        local_78 = local_28;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar1,PTR_s_showResultWithMessage_isSuccess__026b3438,local_78,0);
    }
    else {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_68 = &cf_QQbcbR;
      }
      else {
        local_68 = local_28;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar1,PTR_s_showResultWithMessage_isSuccess__026b3438,local_68,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_showSuccessCardWithData__026b3700,local_30);
    }
  }
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

