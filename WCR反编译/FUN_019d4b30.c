// FUN_019d4b30 @ 019d4b30

byte FUN_019d4b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  byte local_ac;
  uint local_a4;
  cfstringStruct *local_98;
  cfstringStruct *local_80;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_postScriptName);
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_80 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_80;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
  _objc_retainAutoreleasedReturnValue();
  local_98 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_98 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_98;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      local_11 = 0;
    }
    else {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_28);
      local_11 = (byte)pcVar1 & 1;
    }
  }
  else {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_30);
    if (((ulong)pcVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      local_a4 = 1;
      if (lVar2 != 0) {
        pcVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_rowType);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_a4 = (uint)pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      if ((local_a4 & 1) == 0) {
        pcVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
        local_ac = 1;
        if (pcVar1 != (cfstringStruct *)0x0) {
          pcVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_28);
          local_ac = (byte)pcVar1;
        }
        local_11 = local_ac & 1;
      }
      else {
        local_11 = 1;
      }
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

