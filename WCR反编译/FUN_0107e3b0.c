// FUN_0107e3b0 @ 0107e3b0

void FUN_0107e3b0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_20, FUN_01085b64(), local_18 = local_20, ((ulong)pcVar1 & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___ungrouped__;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

