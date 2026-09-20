// FUN_01633bb0 @ 01633bb0

void FUN_01633bb0(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38 [3];
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = &cf_MMServiceCenter;
  _NSClassFromString();
  local_20 = pcVar1;
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
     ((ulong)pcVar1 & 1) == 0)) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = &cf_CContactMgr;
    local_38[0] = pcVar2;
    _NSClassFromString();
    local_40 = pcVar1;
    if ((local_38[0] == (cfstringStruct *)0x0) ||
       ((pcVar1 == (cfstringStruct *)0x0 ||
        (pcVar1 = local_38[0],
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38[0],PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
        ((ulong)pcVar1 & 1) == 0)))) {
      local_18 = (cfstringStruct *)0x0;
      local_44 = 1;
    }
    else {
      pcVar1 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_getService__0269d170,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar1;
      if ((pcVar1 == (cfstringStruct *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60),
         ((ulong)pcVar1 & 1) == 0)) {
        local_18 = (cfstringStruct *)0x0;
      }
      else {
        pcVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getSelfContact_0269da60);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar1;
      }
      local_44 = 1;
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(local_38,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

