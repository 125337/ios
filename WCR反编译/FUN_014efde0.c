// FUN_014efde0 @ 014efde0

void FUN_014efde0(undefined8 param_1)

{
  undefined1 *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  cfstringStruct *local_150;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0 [4];
  cfstringStruct *local_90;
  uint local_84;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined4 local_5c;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  FUN_014e48f4(local_30,&cf_m_uiMessageType);
  local_38 = (cfstringStruct *)((ulong)pcVar2 & 0xffffffff);
  pcVar2 = local_30;
  FUN_014efbac(local_30,&cf_m_nsContent);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_30;
  local_40 = pcVar2;
  FUN_014efbac(local_30,&cf_m_nsPushContent);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_30;
  local_48 = pcVar3;
  FUN_014efbac(local_30,&cf_m_nsPattern);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_30;
  local_50 = pcVar2;
  FUN_014efbac(local_30,&cf_m_nsDesc);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar3 = local_30;
    FUN_014efbac(local_30,&cf_m_nsDescContent);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_58;
    local_58 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if ((local_38 == (cfstringStruct *)&DAT_00002710) ||
     (puVar1 = (undefined1 *)((long)&local_38[-0x139].field1_0x8 + 6), puVar1 == (undefined1 *)0x0))
  {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_system;
    local_5c = 1;
    goto LAB_014f07bc;
  }
  pcVar2 = local_30;
  FUN_014e48f4(puVar1,local_30,&cf_m_uiAppMsgInnerType);
  local_68 = (cfstringStruct *)((ulong)pcVar2 & 0xffffffff);
  if ((local_38 == (cfstringStruct *)0x31) && (local_68 == (cfstringStruct *)0x0)) {
    pcVar2 = &cf_parseWCPayInfoItemIfNeed;
    _NSSelectorFromString(0);
    pcVar3 = local_30;
    local_70 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2);
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,local_70);
      pcVar2 = local_30;
      FUN_014e48f4(local_30,&cf_m_uiAppMsgInnerType);
      local_68 = (cfstringStruct *)((ulong)pcVar2 & 0xffffffff);
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = &cf___;
  local_80 = (cfstringStruct *)0x0;
  local_84 = 0;
  local_90 = (cfstringStruct *)0x0;
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_oWCPayInfoItem);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_90;
  local_90 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (local_90 != (cfstringStruct *)0x0) {
    pcVar3 = local_90;
    FUN_014efbac(local_90,&cf_m_c2cNativeUrl);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_78;
    local_78 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_90;
    FUN_014e48f4(local_90,&cf_m_uiPaySubType);
    local_80 = (cfstringStruct *)((ulong)pcVar2 & 0xffffffff);
    pcVar2 = local_90;
    FUN_014e48f4(local_90,&cf_m_sceneId);
    local_84 = (uint)pcVar2;
  }
  puVar1 = (undefined1 *)((long)&local_68[-2].field0_0x0 + 2);
  if (puVar1 == (undefined1 *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_pat;
    local_5c = 1;
  }
  else {
    pcVar2 = local_40;
    FUN_014fda68(puVar1);
    _objc_retainAutoreleasedReturnValue();
    local_b0[0] = pcVar2;
    if ((long)local_68 < 1) {
      pcVar2 = local_40;
      FUN_014fdf60(local_68);
      local_68 = pcVar2;
    }
    if ((long)local_68 < 1) {
      pcVar2 = local_b0[0];
      FUN_014fdf60(local_68);
      local_68 = pcVar2;
    }
    pcVar2 = local_b0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_b0[0],PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_78;
    local_b8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_48;
    local_c0 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_50;
    local_c8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_58;
    local_d0 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_b8;
    local_d8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_containsString__0269d0b0,&cf_<wccustomemoji);
    pcVar2 = local_68;
    FUN_014fe2e4();
    if ((((ulong)pcVar2 & 1) == 0) || (((ulong)pcVar3 & 1) != 0)) {
      if (((ulong)pcVar3 & 1) == 0) {
        uVar4 = (ulong)local_84;
        FUN_014fe36c();
        if (((((((uVar4 & 1) == 0) && (pcVar2 = local_c0, FUN_014fe3c8(), ((ulong)pcVar2 & 1) == 0))
              && (pcVar2 = local_c0,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_c0,PTR_s_containsString__0269d0b0,&cf_hongbao),
                 ((ulong)pcVar2 & 1) == 0)) &&
             ((pcVar2 = local_b8, FUN_014fe3c8(), ((ulong)pcVar2 & 1) == 0 &&
              (pcVar2 = local_c8, FUN_014fe3c8(), ((ulong)pcVar2 & 1) == 0)))) &&
            (pcVar2 = local_d0, FUN_014fe3c8(), ((ulong)pcVar2 & 1) == 0)) &&
           (pcVar2 = local_d8, FUN_014fe3c8(), ((ulong)pcVar2 & 1) == 0)) {
          pcVar2 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_hasPrefix__0269d320,&cf_wxpay___c2ctransfer);
          if ((((((ulong)pcVar2 & 1) == 0) &&
               (pcVar2 = local_c0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_c0,PTR_s_containsString__0269d0b0,&cf_c2ctransfer),
               ((ulong)pcVar2 & 1) == 0)) &&
              ((pcVar2 = local_c0, FUN_014fe83c(), ((ulong)pcVar2 & 1) == 0 &&
               (((pcVar2 = local_b8, FUN_014fe83c(), ((ulong)pcVar2 & 1) == 0 &&
                 (pcVar2 = local_c8, FUN_014fe83c(), ((ulong)pcVar2 & 1) == 0)) &&
                (pcVar2 = local_d0, FUN_014fe83c(), ((ulong)pcVar2 & 1) == 0)))))) &&
             (pcVar2 = local_d8, FUN_014fe83c(), ((ulong)pcVar2 & 1) == 0)) goto LAB_014f0524;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_transfer;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_redpacket;
        }
      }
      else {
LAB_014f0524:
        if (local_80 == (cfstringStruct *)0x0) {
          pcVar2 = local_b0[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_b0[0],PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_150 = local_40;
          }
          else {
            local_150 = local_b0[0];
          }
          FUN_014febcc();
          if (0 < (long)local_150) {
            local_80 = local_150;
          }
        }
        if ((((local_80 == (cfstringStruct *)0x1) || (local_80 == (cfstringStruct *)0x8)) ||
            ((local_80 == (cfstringStruct *)0x7 ||
             ((local_80 == (cfstringStruct *)0x15 || (local_80 == (cfstringStruct *)0x1b)))))) &&
           ((pcVar2 = local_c0, FUN_014fe3c8(0), ((ulong)pcVar2 & 1) == 0 &&
            (pcVar2 = local_b8, FUN_014fe3c8(), ((ulong)pcVar2 & 1) == 0)))) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_transfer;
        }
        else if ((((ulong)pcVar3 & 1) == 0) && (local_38 == (cfstringStruct *)0x31)) {
          pcVar2 = local_c8;
          FUN_014ff0c0(0);
          if ((((ulong)pcVar2 & 1) == 0) &&
             (((pcVar2 = local_d0, FUN_014ff0c0(), ((ulong)pcVar2 & 1) == 0 &&
               (pcVar2 = local_d8, FUN_014ff0c0(), ((ulong)pcVar2 & 1) == 0)) &&
              (pcVar2 = local_b8, FUN_014ff0c0(), ((ulong)pcVar2 & 1) == 0)))) {
            pcVar2 = local_c8;
            FUN_014ff260();
            if ((((((ulong)pcVar2 & 1) == 0) &&
                 (pcVar2 = local_d0, FUN_014ff260(), ((ulong)pcVar2 & 1) == 0)) &&
                (pcVar2 = local_d8, FUN_014ff260(), ((ulong)pcVar2 & 1) == 0)) &&
               (pcVar2 = local_b8, FUN_014ff260(), ((ulong)pcVar2 & 1) == 0)) goto LAB_014f0728;
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_transfer;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_redpacket;
          }
        }
        else {
LAB_014f0728:
          pcVar2 = local_38;
          FUN_014f0818(local_38,local_40);
          _objc_retainAutoreleasedReturnValue();
          local_28 = pcVar2;
        }
      }
    }
    else {
      puVar1 = (undefined1 *)((long)&local_68[-0x3f].field1_0x8 + 7);
      if (puVar1 == (undefined1 *)0x0) {
        if (local_84 == 0x3eb) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_transfer;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_redpacket;
        }
      }
      else {
        uVar4 = (ulong)local_84;
        FUN_014fe36c(puVar1);
        if ((((uVar4 & 1) == 0) && (pcVar2 = local_c0, FUN_014fe3c8(), ((ulong)pcVar2 & 1) == 0)) &&
           (pcVar2 = local_b8, FUN_014fe3c8(), ((ulong)pcVar2 & 1) == 0)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_transfer;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_redpacket;
        }
      }
    }
    local_5c = 1;
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(local_b0,0);
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_78,0);
LAB_014f07bc:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

