// storedImagePairWithLightPath:darkPath: @ 019b9b34

/* Function Stack Size: 0x20 bytes */

ID WCRefineFloatingTabBarButtonActionViewController::storedImagePairWithLightPath_darkPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_80;
  cfstringStruct *local_68;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_relativeFloatingIconPath__026baa10,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_68 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_68;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_relativeFloatingIconPath__026baa10,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_80 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_80;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) &&
     (pcVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     pcVar1 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  else {
    pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_imagepair______);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

