// FUN_014fae44 @ 014fae44

void FUN_014fae44(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  int iVar3;
  uint local_cc;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_98;
  byte local_84;
  byte local_5c;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  byte local_42;
  byte local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  long *local_30;
  ulong *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  pcVar1 = local_18;
  local_30 = param_4;
  local_28 = param_3;
  FUN_014fb9bc();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_20;
  local_38 = pcVar1;
  FUN_014fb9bc();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_18;
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isEqualToString__0269ccc8,&cf_CN);
  local_5c = 1;
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isEqualToString__0269ccc8,&cf_cn);
    local_5c = 1;
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf__NV);
      local_5c = 1;
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_caseInsensitiveCompare__0269db48,&cf_China);
        local_5c = 1;
        if (pcVar1 != (cfstringStruct *)0x0) {
          pcVar1 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isEqualToString__0269ccc8,&cf_ZH);
          local_5c = (byte)pcVar1;
        }
      }
    }
  }
  local_41 = local_5c & 1;
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf__n);
  local_84 = 1;
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_o);
    local_84 = 1;
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_S_n);
      local_84 = 1;
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf__n);
        local_84 = 1;
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf_o);
          local_84 = 1;
          if (((ulong)pcVar1 & 1) == 0) {
            pcVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf_S_n);
            local_84 = (byte)pcVar1;
          }
        }
      }
    }
  }
  local_42 = local_84 & 1;
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) &&
     (pcVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     pcVar1 == (cfstringStruct *)0x0)) {
    if (local_28 != (ulong *)0x0) {
      _objc_retainAutorelease();
      *local_28 = (ulong)&cf__gw;
    }
    if (local_30 != (long *)0x0) {
      *local_30 = 2;
    }
    local_48 = 1;
  }
  else if (((local_41 & 1) == 0) && ((local_42 & 1) == 0)) {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_b8 = &cf__gw;
      }
      else {
        local_b8 = local_38;
      }
      local_b0 = local_b8;
    }
    else {
      local_b0 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_b0;
    if (local_28 != (ulong *)0x0) {
      _objc_retainAutorelease();
      *local_28 = (ulong)local_b0;
    }
    if (local_30 != (long *)0x0) {
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      local_cc = 0;
      if (pcVar1 != (cfstringStruct *)0x0) {
        pcVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf__gw);
        local_cc = (uint)pcVar1 ^ 1;
      }
      iVar3 = 2;
      if ((local_cc & 1) != 0) {
        iVar3 = 1;
      }
      *local_30 = (long)iVar3;
    }
    _objc_storeStrong(&local_58,0);
    local_48 = 0;
  }
  else {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_98 = &cf__NV;
    }
    else {
      local_98 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_containsString__0269d0b0,&cf__n);
    if (((ulong)local_98 & 1) != 0) {
      _objc_storeStrong(&local_50,&cf__NV_n);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf_o);
    if (((ulong)pcVar1 & 1) != 0) {
      _objc_storeStrong(&local_50,&cf__NVo);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf_S_n);
    if (((ulong)pcVar1 & 1) != 0) {
      _objc_storeStrong(&local_50,&cf__NVS_n);
    }
    pcVar1 = local_50;
    if (local_28 != (ulong *)0x0) {
      _objc_retainAutorelease();
      *local_28 = (ulong)pcVar1;
    }
    if (local_30 != (long *)0x0) {
      *local_30 = 0;
    }
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

