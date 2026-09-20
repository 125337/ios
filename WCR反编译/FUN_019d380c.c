// FUN_019d380c @ 019d380c

cfstringStruct * FUN_019d380c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_68;
  cfstringStruct *local_50;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  undefined8 local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_displayName);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_50 = &cf___;
  }
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_displayName);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_68 = &cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_localizedStandardCompare__0269e098,local_68);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_50;
}

