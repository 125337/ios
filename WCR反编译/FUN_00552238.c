// FUN_00552238 @ 00552238

ulong FUN_00552238(long param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_20;
  long local_18;
  
  pcVar1 = &cf_moments_auto_like;
  if (param_1 != 0) {
    pcVar1 = &cf_moments_auto_comment;
  }
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = pcVar1;
  FUN_01138c30(pcVar1,0);
  _objc_storeStrong(&local_20,0);
  return (ulong)pcVar1 & 0xffffffff;
}

