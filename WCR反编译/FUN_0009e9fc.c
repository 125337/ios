// FUN_0009e9fc @ 0009e9fc

ulong FUN_0009e9fc(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_48;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = local_18;
  FUN_0009eb24();
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_48 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_48;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_isEqualToString__0269ccc8,_WCRAvatarSceneMyProfile);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return (ulong)pcVar1 & 0xffffffff;
}

