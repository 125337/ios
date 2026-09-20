// FUN_00132d58 @ 00132d58

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00132d58(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  cfstringStruct *local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  
  pcVar1 = &cf_MMServiceCenter;
  local_20 = param_1;
  local_18 = param_1;
  _NSClassFromString();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = DAT_028c8630;
  DAT_028c8630 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = DAT_028c8630;
  if (DAT_028c8630 != (cfstringStruct *)0x0) {
    pcVar2 = &cf_CContactMgr;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getService__0269d170,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = pcVar1;
    if (pcVar1 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getSelfContact_0269da60);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar1;
      if (pcVar1 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = DAT_028c8638;
        DAT_028c8638 = pcVar1;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(local_38,0);
  }
  return;
}

