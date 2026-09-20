// FUN_00ec5d9c @ 00ec5d9c

void FUN_00ec5d9c(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  uint local_38;
  undefined4 local_34;
  cfstringStruct *local_30;
  ulong local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = local_20;
  FUN_00ec4b28(local_20,&cf_pathKey);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  FUN_00ec61c8();
  local_18 = local_30;
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    local_18 = local_30;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_38 = 0;
      pcVar1 = local_20;
      FUN_00ec4b28(0,local_20,&cf_attachementID);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar1;
      if (pcVar1 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_integerValue_026ca750);
          local_38 = (uint)pcVar1;
        }
        else {
          pcVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_unsignedIntValue_0269db10);
          local_38 = (uint)pcVar1;
        }
      }
      uVar3 = (ulong)local_38;
      FUN_00eca784();
      if ((uVar3 & 1) == 0) {
        pcVar1 = local_20;
        FUN_00ecb38c();
        _objc_retainAutoreleasedReturnValue();
        local_48 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
        if ((pcVar1 == (cfstringStruct *)0x0) ||
           (uVar3 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsObject__0269cbb8,local_48),
           (uVar3 & 1) != 0)) {
          pcVar1 = local_20;
          FUN_00ec4b28(local_20,&cf_nsTitle);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar1;
          FUN_00ebd790();
          _objc_retainAutoreleasedReturnValue();
          local_50 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          pcVar1 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
          if (pcVar1 == (cfstringStruct *)0x0) {
            if ((local_38 == 0) || (899999 < local_38)) {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = &cf___;
            }
            else {
              pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf_id__u);
              _objc_retainAutoreleasedReturnValue();
              local_18 = pcVar1;
            }
          }
          else {
            pcVar1 = &cf_title_;
            (*(code *)PTR__objc_msgSend_02578628)
                      (&cf_title_,PTR_s_stringByAppendingString__0269d398,local_50);
            _objc_retainAutoreleasedReturnValue();
            local_18 = pcVar1;
          }
          local_34 = 1;
          _objc_storeStrong(&local_50,0);
        }
        else {
          pcVar1 = &cf_sel_;
          (*(code *)PTR__objc_msgSend_02578628)
                    (&cf_sel_,PTR_s_stringByAppendingString__0269d398,local_48);
          _objc_retainAutoreleasedReturnValue();
          local_34 = 1;
          local_18 = pcVar1;
        }
        _objc_storeStrong(&local_48,0);
      }
      else {
        pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_id__u);
        _objc_retainAutoreleasedReturnValue();
        local_34 = 1;
        local_18 = pcVar1;
      }
      _objc_storeStrong(&local_40,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_34 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_34 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

