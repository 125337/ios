// FUN_0084d604 @ 0084d604

void FUN_0084d604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  long lVar2;
  cfstringStruct *local_80;
  cfstringStruct *local_50 [3];
  cfstringStruct *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = param_3;
  if (local_18 == (cfstringStruct *)0x0) {
    local_2c = 1;
  }
  else {
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_80 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_80;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_18;
    _objc_getAssociatedObject(local_18,local_28);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_20;
    local_50[0] = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      if ((local_50[0] != (cfstringStruct *)0x0) &&
         (pcVar1 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_50[0])
         , ((ulong)pcVar1 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setText__026caa88,local_50[0]);
      }
      local_2c = 0;
    }
    else {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_20);
      if (((ulong)pcVar1 & 1) == 0) {
        if ((local_50[0] == (cfstringStruct *)0x0) ||
           (pcVar1 = local_38,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_38,PTR_s_isEqualToString__0269ccc8,local_50[0]),
           ((ulong)pcVar1 & 1) == 0)) {
          _objc_setAssociatedObject(local_18,local_28,local_38,3);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setText__026caa88,local_20);
      }
      local_2c = 1;
    }
    _objc_storeStrong(local_50);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

