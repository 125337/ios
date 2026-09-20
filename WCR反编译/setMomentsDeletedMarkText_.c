// setMomentsDeletedMarkText: @ 02164560

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setMomentsDeletedMarkText_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  ID local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  if (local_28 != (cfstringStruct *)0x0) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (pcVar2 != (cfstringStruct *)0x0) {
      local_40 = local_28;
      goto LAB_0216460c;
    }
  }
  local_40 = &::cf__;
LAB_0216460c:
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setObject_forKey__026ca9e8,local_40,&cf_momentsDeletedMarkText);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

