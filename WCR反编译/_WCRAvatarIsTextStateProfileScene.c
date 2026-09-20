// _WCRAvatarIsTextStateProfileScene @ 00938f70

byte _WCRAvatarIsTextStateProfileScene(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  cfstringStruct *local_58;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  bVar1 = local_28 == (cfstringStruct *)0x0;
  if (bVar1) {
    local_58 = &cf___;
  }
  else {
    local_58 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_58;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_containsString__0269d0b0,&cf_TextStateProfile);
  if (((ulong)pcVar2 & 1) == 0) {
    uVar3 = local_20;
    _WCRAvatarAncestorClassContains(local_20,&cf_TextStateProfile,0xc);
    local_11 = (byte)uVar3 & 1;
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

