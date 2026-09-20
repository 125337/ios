// displayNameForPath:night: @ 01c2fb40

/* Function Stack Size: 0x20 bytes */

ID WCRefineNameplateBeautifyViewController::displayNameForPath_night_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_90;
  cfstringStruct *local_80;
  cfstringStruct *local_60;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     pcVar1 == (cfstringStruct *)0x0)) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_80 = local_38;
    }
    else {
      local_80 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    if (local_80 == (cfstringStruct *)0x0) {
      local_90 = &cf__gb;
    }
    else {
      local_50 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_90;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_90;
    if (local_80 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__n_;
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

