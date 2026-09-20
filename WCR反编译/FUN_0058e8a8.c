// FUN_0058e8a8 @ 0058e8a8

void FUN_0058e8a8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_128;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = local_30;
  FUN_0057a910();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = &cf_W;
    pcVar2 = &cf_W;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_W,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_58 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf__);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_50);
      if ((((ulong)pcVar1 & 1) == 0) &&
         (pcVar1 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,local_58),
         ((ulong)pcVar1 & 1) == 0)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf___;
        local_48 = 1;
      }
      else {
        pcVar1 = local_38;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
        local_48 = 1;
      }
    }
    else {
      FUN_00589dc8();
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByAppendingString__0269d398,&cf__);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_38;
      local_68 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,pcVar1);
      pcVar1 = local_38;
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_60);
        pcVar2 = local_38;
        pcVar1 = local_50;
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar1 = &cf__;
          (*(code *)PTR__objc_msgSend_02578628)
                    (&cf__,PTR_s_stringByAppendingString__0269d398,local_50);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_s_rangeOfString__0269d838;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_90 = pcVar2;
          local_88 = puVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          if (local_90 == (cfstringStruct *)0x7fffffffffffffff) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf___;
            local_48 = 1;
          }
          else {
            pcVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_substringFromIndex__0269d120,
                       (undefined1 *)((long)&local_90->field0_0x0 + 1));
            _objc_retainAutoreleasedReturnValue();
            local_98 = pcVar1;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isEqualToString__0269ccc8,local_50);
            if ((((ulong)pcVar1 & 1) == 0) &&
               (pcVar1 = local_98,
               (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_hasPrefix__0269d320,local_58),
               ((ulong)pcVar1 & 1) == 0)) {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = &cf___;
            }
            else {
              pcVar1 = local_98;
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = pcVar1;
            }
            local_48 = 1;
            _objc_storeStrong(&local_98,0);
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar1;
          local_48 = 1;
        }
      }
      else {
        pcVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_substringFromIndex__0269d120,pcVar2);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 0;
        local_70 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_128 = local_50;
        }
        else {
          local_128 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_stringByAppendingPathComponent__026cab30,local_70);
          _objc_retainAutoreleasedReturnValue();
          local_79 = 1;
          local_78 = local_128;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_128;
        if ((local_79 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        local_48 = 1;
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

