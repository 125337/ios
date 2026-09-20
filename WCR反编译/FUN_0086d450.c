// FUN_0086d450 @ 0086d450

void FUN_0086d450(cfstringStruct *param_1,undefined8 param_2,long param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_68;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cd6f0)(param_1,param_2,param_3);
  pcVar1 = local_18;
  if (((DAT_028cd865 & 1) != 0) && (local_28 == 0x16070)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_68 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_68;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (pcVar1 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setText__026caa88,local_38);
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

