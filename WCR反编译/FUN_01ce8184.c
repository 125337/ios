// FUN_01ce8184 @ 01ce8184

void FUN_01ce8184(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_18 = (cfstringStruct *)0x0;
    local_24 = 1;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_01ce0578();
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    pcVar2 = local_30;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_38 = (cfstringStruct *)0x0;
      local_40 = 0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_getResourceValue_forKey_error__026b2d98,&local_40,
                 *(undefined8 *)PTR__NSURLTypeIdentifierKey_02578270,0);
      _objc_storeStrong(&local_38,local_40);
      pcVar3 = local_38;
      FUN_01ce1d18();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_30;
      local_30 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      pcVar2 = local_30;
      if (pcVar3 == (cfstringStruct *)0x0) {
        pcVar3 = local_38;
        FUN_01ce0920(0);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        FUN_01ce0578();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_30;
        local_30 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
        pcVar2 = local_30;
        if (pcVar3 == (cfstringStruct *)0x0) {
          pcVar3 = local_38;
          FUN_01ce8c0c(0);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_30;
          local_30 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          pcVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
          pcVar2 = local_30;
          if (pcVar3 == (cfstringStruct *)0x0) {
            puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSData_026ce1d0,
                       PTR_s_dataWithContentsOfURL_options_er_026ac470,local_20,1,0);
            _objc_retainAutoreleasedReturnValue();
            local_48 = puVar1;
            FUN_01ce851c();
            if (((ulong)puVar1 & 1) == 0) {
              local_18 = (cfstringStruct *)0x0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = &cf_html;
            }
            local_24 = 1;
            _objc_storeStrong(&local_48,0);
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = pcVar2;
            local_24 = 1;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar2;
          local_24 = 1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar2;
        local_24 = 1;
      }
      _objc_storeStrong(&local_38,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

