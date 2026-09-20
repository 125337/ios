// setBallColorHex: @ 0160c0c4

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatProfileStore::setBallColorHex_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *local_40;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == (cfstringStruct *)0x0) {
    local_40 = &cf__C7C7CC;
  }
  else {
    local_40 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setCurrentValue_forKey__026b18a8,local_40,&cf_ballColorHex);
  _objc_storeStrong(&local_28,0);
  return;
}

