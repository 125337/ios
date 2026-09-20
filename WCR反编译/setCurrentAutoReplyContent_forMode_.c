// setCurrentAutoReplyContent:forMode: @ 01d21e9c

/* Function Stack Size: 0x20 bytes */

void WCRefineRedEnvelopViewController::setCurrentAutoReplyContent_forMode_
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
  if (local_30 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setRedEnvelopAutoReplyMultiConte_026c4288,local_58);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setRedEnvelopAutoReplyContent__026c4290,local_58);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

