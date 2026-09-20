// FUN_019d3658 @ 019d3658

undefined8 FUN_019d3658(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  cfstringStruct *pcVar1;
  double dVar2;
  undefined8 local_88;
  cfstringStruct *local_78;
  cfstringStruct *local_60;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  undefined8 local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_2;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_4);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_mtime);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_60 = &cf_0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_doubleValue_026ca608);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  dVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_mtime);
  _objc_retainAutoreleasedReturnValue();
  local_78 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_78 = &cf_0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_doubleValue_026ca608);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (dVar2 <= param_1) {
    local_88 = 0;
    if (dVar2 < param_1) {
      local_88 = 0xffffffffffffffff;
    }
  }
  else {
    local_88 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_88;
}

