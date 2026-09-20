// messageHapticStyleTitle @ 01116870

/* Function Stack Size: 0x10 bytes */

ID WCRefinePrivateFriendManager::messageHapticStyleTitle(ID param_1,SEL param_2)

{
  cfstringStruct *local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_messageHapticStyle_026af038);
  if (param_1 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else if (param_1 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__NI_;
  }
  else if (param_1 == 4) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___R;
  }
  else if (param_1 == 5) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___NN;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_f>f;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

