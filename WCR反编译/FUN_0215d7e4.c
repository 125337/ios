// FUN_0215d7e4 @ 0215d7e4

void FUN_0215d7e4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_80;
  bool local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_01fd868c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf__);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_Documents_);
      local_18 = local_28;
      if (((ulong)pcVar1 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_2c = 1;
      }
      else {
        pcVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_substringFromIndex__0269d120,10);
        _objc_retainAutoreleasedReturnValue();
        local_2c = 1;
        local_18 = pcVar1;
      }
    }
    else {
      pcVar2 = local_28;
      FUN_0219ccbc();
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      pcVar1 = local_38;
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar1 = local_28;
        puVar3 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_rangeOfString__0269d838,&cf__WCRefine_HomeAvatarStrip_);
        local_48 = pcVar1;
        local_40 = puVar3;
        if (pcVar1 == (cfstringStruct *)0x7fffffffffffffff) {
          pcVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          local_50 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
          if (pcVar1 == (cfstringStruct *)0x0) {
            local_80 = &cf___;
          }
          else {
            local_80 = &cf_WCRefine_HomeAvatarStrip;
            (*(code *)PTR__objc_msgSend_02578628)
                      (&cf_WCRefine_HomeAvatarStrip,PTR_s_stringByAppendingPathComponent__026cab30,
                       local_50);
            _objc_retainAutoreleasedReturnValue();
            local_58 = local_80;
          }
          local_59 = pcVar1 != (cfstringStruct *)0x0;
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_80;
          if (local_59) {
            (*(code *)PTR__objc_release_02578630)(local_58);
          }
          local_2c = 1;
          _objc_storeStrong(&local_50,0);
        }
        else {
          pcVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_substringFromIndex__0269d120,
                     (undefined1 *)((long)&pcVar1->field0_0x0 + 1));
          _objc_retainAutoreleasedReturnValue();
          local_2c = 1;
          local_18 = pcVar2;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
        local_2c = 1;
      }
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

