// FUN_014f0818 @ 014f0818

void FUN_014f0818(undefined *param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_128;
  cfstringStruct *local_90;
  cfstringStruct *local_78;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_1;
  _objc_storeStrong(&local_38);
  pcVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_78 = &cf___;
  }
  else {
    local_78 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_78;
  FUN_014fda68();
  _objc_retainAutoreleasedReturnValue();
  local_48 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = local_78;
  if ((local_30 == &DAT_00002710) || (local_30 == &UNK_00002712)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_system;
    local_54 = 1;
  }
  else {
    if (local_30 == (undefined *)0x31) {
      local_90 = local_40;
      FUN_014fdf60(0);
    }
    else {
      local_90 = (cfstringStruct *)0xffffffffffffffff;
    }
    local_60 = local_90;
    if (((long)local_90 < 1) && (local_30 == (undefined *)0x31)) {
      pcVar2 = local_48;
      FUN_014fdf60(0);
      local_60 = pcVar2;
    }
    if (local_60 == (cfstringStruct *)((long)&segment_command_00000020.vmaddr + 6)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_pat;
      local_54 = 1;
    }
    else {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf_<pat);
      if ((((((ulong)pcVar2 & 1) == 0) &&
           (pcVar2 = local_50,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_50,PTR_s_containsString__0269d0b0,&cf_<patmsg), ((ulong)pcVar2 & 1) == 0
           )) && (pcVar2 = local_50,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_50,PTR_s_containsString__0269d0b0,&cf_type__pat_),
                 ((ulong)pcVar2 & 1) == 0)) &&
         ((pcVar2 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_containsString__0269d0b0,&cf_<type>pat<_type>),
          ((ulong)pcVar2 & 1) == 0 && (local_30 != (undefined *)0x37000031)))) {
        if (local_30 == (undefined *)0x3e) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_miniprogram;
          local_54 = 1;
        }
        else if ((local_30 == (undefined *)0x7d0) || (local_30 == (undefined *)0x19000031)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_transfer;
          local_54 = 1;
        }
        else if ((local_30 == (undefined *)0x7d1) ||
                ((local_30 == (undefined *)0x1a000031 ||
                 (local_30 + -0x1c000031 == (undefined *)0x0)))) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_redpacket;
          local_54 = 1;
        }
        else {
          pcVar2 = local_50;
          FUN_014fe3c8(local_30 + -0x1c000031);
          if (((ulong)pcVar2 & 1) == 0) {
            pcVar2 = local_50;
            FUN_014fe83c();
            if (((ulong)pcVar2 & 1) == 0) {
              if (((local_30 == (undefined *)0x32) || (local_30 == (undefined *)0x35)) ||
                 (local_30 == (undefined *)0x40)) {
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = &cf_voip;
                local_54 = 1;
              }
              else if (local_30 == (undefined *)0x4c) {
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = &cf_music;
                local_54 = 1;
              }
              else {
                if (local_30 == (undefined *)0x31) {
                  pcVar2 = local_60;
                  FUN_014fe2e4(0);
                  if (((ulong)pcVar2 & 1) != 0) {
                    if (local_60 == (cfstringStruct *)((long)&section_00000798.reloff + 1)) {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_28 = &cf_redpacket;
                      local_54 = 1;
                    }
                    else {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_28 = &cf_transfer;
                      local_54 = 1;
                    }
                    goto LAB_014f10d8;
                  }
                  pcVar2 = local_50;
                  FUN_014ff0c0();
                  if (((ulong)pcVar2 & 1) != 0) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_28 = &cf_redpacket;
                    local_54 = 1;
                    goto LAB_014f10d8;
                  }
                  pcVar2 = local_50;
                  FUN_014ff260();
                  if (((ulong)pcVar2 & 1) != 0) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_28 = &cf_transfer;
                    local_54 = 1;
                    goto LAB_014f10d8;
                  }
                  if (((local_60 == (cfstringStruct *)((long)&MACH_HEADER.magic + 3)) ||
                      (local_60 == (cfstringStruct *)((long)&segment_command_00000020.fileoff + 4)))
                     || (local_60 == (cfstringStruct *)&segment_command_00000020.initprot)) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_28 = &cf_music;
                    local_54 = 1;
                    goto LAB_014f10d8;
                  }
                  if (local_60 == (cfstringStruct *)((long)&MACH_HEADER.ncmds + 3)) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_28 = &cf_chatrecord;
                    local_54 = 1;
                    goto LAB_014f10d8;
                  }
                  if (((local_60 == (cfstringStruct *)((long)&segment_command_00000020.cmd + 1)) ||
                      (local_60 == (cfstringStruct *)&segment_command_00000020.cmdsize)) ||
                     ((local_60 == (cfstringStruct *)(segment_command_00000020.segname + 4) ||
                      (((local_60 == (cfstringStruct *)(segment_command_00000020.segname + 6) ||
                        (local_60 == (cfstringStruct *)(segment_command_00000020.segname + 0xe))) ||
                       (local_60 == (cfstringStruct *)((long)&segment_command_00000020.vmaddr + 2)))
                      )))) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_28 = &cf_miniprogram;
                    local_54 = 1;
                    goto LAB_014f10d8;
                  }
                  if (((local_60 == (cfstringStruct *)(segment_command_00000020.segname + 0xb)) ||
                      (local_60 == (cfstringStruct *)((long)&segment_command_00000020.vmaddr + 7)))
                     || (local_60 == (cfstringStruct *)&segment_command_00000020.maxprot)) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_28 = &cf_finder;
                    local_54 = 1;
                    goto LAB_014f10d8;
                  }
                  if (local_60 == (cfstringStruct *)((long)&segment_command_00000020.filesize + 7))
                  {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_28 = &cf_notice;
                    local_54 = 1;
                    goto LAB_014f10d8;
                  }
                  if ((local_60 == (cfstringStruct *)((long)&segment_command_00000020.vmaddr + 1))
                     || (pcVar2 = local_50,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_50,PTR_s_containsString__0269d0b0,&cf_<refermsg),
                        ((ulong)pcVar2 & 1) != 0)) {
                    pcVar2 = local_40;
                    FUN_014ffd60();
                    _objc_retainAutoreleasedReturnValue();
                    local_54 = 1;
                    local_28 = pcVar2;
                    goto LAB_014f10d8;
                  }
                }
                pcVar2 = (cfstringStruct *)PTR_WCRefineMessageBlockSupport_026ce0f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineMessageBlockSupport_026ce0f8,
                           PTR_s_typeKeyForMessageType_content__026a41a0,local_30,local_38);
                _objc_retainAutoreleasedReturnValue();
                local_68 = pcVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar2,PTR_s_isEqualToString__0269ccc8,&cf_refer);
                if (((ulong)pcVar2 & 1) == 0) {
                  pcVar2 = local_68;
                  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
                  if (pcVar2 == (cfstringStruct *)0x0) {
                    local_128 = &cf_other;
                  }
                  else {
                    local_128 = local_68;
                  }
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = local_128;
                }
                else {
                  pcVar2 = local_40;
                  FUN_014ffd60();
                  _objc_retainAutoreleasedReturnValue();
                  local_28 = pcVar2;
                }
                local_54 = 1;
                _objc_storeStrong(&local_68,0);
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = &cf_transfer;
              local_54 = 1;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf_redpacket;
            local_54 = 1;
          }
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_pat;
        local_54 = 1;
      }
    }
  }
LAB_014f10d8:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

