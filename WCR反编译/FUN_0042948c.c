// FUN_0042948c @ 0042948c

void FUN_0042948c(undefined8 param_1,cfstringStruct *param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_d8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  uint local_6c;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  local_38 = param_2;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_d8 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58[0] = local_d8;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_58[0];
    puVar4 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_rangeOfString__0269d838,&cf_<videomsg);
    local_68 = pcVar2;
    local_60 = puVar4;
    if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
      pcVar2 = local_58[0];
      puVar4 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_rangeOfString__0269d838,&cf_<img);
      local_80 = pcVar2;
      local_78 = puVar4;
      if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
        pcVar2 = local_58[0];
        puVar4 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58[0],PTR_s_rangeOfString__0269d838,&cf_<voicemsg);
        local_90 = pcVar2;
        local_88 = puVar4;
        if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
          pcVar3 = local_40;
          FUN_0040f778(0);
          pcVar2 = local_40;
          if (((ulong)pcVar3 & 1) == 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar2;
            local_6c = 1;
          }
          else {
            pcVar3 = local_40;
            FUN_0040d830(local_40,&cf_statextstr);
            _objc_retainAutoreleasedReturnValue();
            local_98 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
            pcVar2 = local_98;
            bVar1 = pcVar3 != (cfstringStruct *)0x0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = pcVar2;
            }
            local_6c = (uint)bVar1;
            _objc_storeStrong(bVar1,&local_98,0);
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf__;
          local_6c = 1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf__;
        local_6c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf__;
      local_6c = 1;
    }
    _objc_storeStrong(local_58,0);
    if (local_6c != 0) goto LAB_00429998;
  }
  pcVar3 = local_38;
  FUN_00429b94(0);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
  pcVar2 = local_a0;
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if ((pcVar2 == (cfstringStruct *)0x0) ||
       (pcVar3 = local_40, FUN_0040f778(pcVar2), ((ulong)pcVar3 & 1) == 0)) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf__;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
  }
  local_6c = 1;
  _objc_storeStrong(&local_a0,0);
LAB_00429998:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

