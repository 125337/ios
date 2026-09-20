// FUN_01e37c4c @ 01e37c4c

void FUN_01e37c4c(cfstringStruct *param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_d0;
  cfstringStruct *local_c0;
  cfstringStruct *local_a0;
  cfstringStruct *local_58;
  bool local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  ulong *local_30;
  ulong *local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  pcVar2 = local_18;
  local_30 = param_4;
  local_28 = param_3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_hasPrefix__0269d320,local_20);
  local_a0 = local_38;
  local_49 = false;
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_a0 = &cf___;
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_substringFromIndex__0269d120,uVar3);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_a0;
  }
  local_49 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_a0;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  pcVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasSuffix__0269d018,&cf__);
  pcVar2 = local_40;
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_substringToIndex__0269d6c0,
               (undefined1 *)((long)&pcVar4[-1].field3_0x18 + 7));
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_40;
    local_40 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_c0 = (cfstringStruct *)0xffffffffffffffff;
  }
  else {
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectAtIndexedSubscript__0269cc78,0);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
  if (pcVar2 < (cfstringStruct *)0x2) {
    local_d0 = (cfstringStruct *)0xffffffffffffffff;
  }
  else {
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectAtIndexedSubscript__0269cc78,1);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if (local_28 != (ulong *)0x0) {
    *local_28 = (ulong)local_c0;
  }
  if (local_30 != (ulong *)0x0) {
    *local_30 = (ulong)local_d0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_20,0);
  return;
}

