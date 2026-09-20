// FUN_0066cee4 @ 0066cee4

void FUN_0066cee4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_50;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = local_18;
  FUN_0065fd84(local_18,PTR_s_text_0269ce68,0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_50 = &cf___;
  }
  local_20 = pcVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_50);
  return;
}

