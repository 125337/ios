// touchTrailRelativeImagePathForFolder: @ 01f1f310

/* Function Stack Size: 0x18 bytes */

ID WCRefineTouchTrailViewController::touchTrailRelativeImagePathForFolder_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_38 = &::cf__;
  }
  else {
    local_38 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_W);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

