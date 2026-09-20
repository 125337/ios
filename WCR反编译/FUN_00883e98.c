// FUN_00883e98 @ 00883e98

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00883e98(double param_1)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  undefined8 *puVar5;
  cfstringStruct *local_c0;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  char *local_30;
  cfstringStruct *local_28;
  double local_20;
  cfstringStruct *local_18;
  
  _CACurrentMediaTime();
  pcVar1 = DAT_028cd8b0;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028cd8b0,PTR_s_length_0269cca0);
  local_18 = DAT_028cd8b0;
  puVar5 = (undefined8 *)0x0;
  if ((pcVar1 == (cfstringStruct *)0x0) || (puVar5 = &DAT_028cd000, 3.0 <= local_20 - DAT_028cd8b8))
  {
    pcVar2 = "MMServiceCenter";
    _objc_getClass(puVar5);
    pcVar3 = "CContactMgr";
    local_28 = (cfstringStruct *)pcVar2;
    _objc_getClass();
    local_30 = pcVar3;
    if ((local_28 == (cfstringStruct *)0x0) || (pcVar3 == (char *)0x0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
    }
    else {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0);
      if (((ulong)pcVar1 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
      }
      else {
        pcVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        local_38 = pcVar1;
        if ((pcVar1 == (cfstringStruct *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
           ((ulong)pcVar1 & 1) == 0)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf___;
          local_48 = 1;
        }
        else {
          pcVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getService__0269d170,local_30);
          _objc_retainAutoreleasedReturnValue();
          local_50 = pcVar1;
          if ((pcVar1 == (cfstringStruct *)0x0) ||
             ((*(code *)PTR__objc_msgSend_02578628)
                        (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60),
             ((ulong)pcVar1 & 1) == 0)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &cf___;
            local_48 = 1;
          }
          else {
            pcVar4 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getSelfContact_0269da60);
            _objc_retainAutoreleasedReturnValue();
            local_58 = pcVar4;
            FUN_00883a30();
            _objc_retainAutoreleasedReturnValue();
            pcVar1 = DAT_028cd8b0;
            DAT_028cd8b0 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar1);
            DAT_028cd8b8 = local_20;
            local_c0 = DAT_028cd8b0;
            if (DAT_028cd8b0 == (cfstringStruct *)0x0) {
              local_c0 = &cf___;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = local_c0;
            local_48 = 1;
            _objc_storeStrong(&local_58,0);
          }
          _objc_storeStrong(&local_50,0);
        }
        _objc_storeStrong(&local_38,0);
      }
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

