// FUN_00241748 @ 00241748

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_00241748(ulong param_1,undefined8 param_2,undefined8 param_3,cfstringStruct *param_4,
                 long param_5,undefined8 param_6)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_1e8;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  long lStack_138;
  undefined2 local_122;
  cfstringStruct *local_120;
  long lStack_118;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  long lStack_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  long lStack_d8;
  undefined4 local_c4;
  cfstringStruct *local_c0;
  long lStack_b8;
  ulong local_98;
  cfstringStruct *local_90;
  undefined8 local_88;
  ulong local_80;
  cfstringStruct *local_78;
  long lStack_70;
  byte local_61;
  undefined8 local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined8 local_28;
  
  local_90 = (cfstringStruct *)0x0;
  local_88 = param_2;
  local_80 = param_1;
  local_78 = param_4;
  lStack_70 = param_5;
  _objc_storeStrong(&local_90,param_3);
  local_98 = 0;
  _objc_storeStrong(&local_98,param_6);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    lStack_b8 = lStack_70;
    local_c0 = local_78;
    uVar5 = local_80;
    (*DAT_028c9348)(local_80,local_88,local_90,local_78,lStack_70,local_98);
    local_61 = (byte)uVar5 & 1;
    local_c4 = 1;
  }
  else {
    uVar5 = local_98;
    FUN_00241ec0();
    if ((((uVar5 & 1) == 0) || (lStack_70 != 0)) || (local_78 == (cfstringStruct *)0x0)) {
      lStack_d8 = lStack_70;
      local_e0 = local_78;
      uVar5 = local_80;
      (*DAT_028c9348)(local_80,local_88,local_90,local_78,lStack_70,local_98);
      local_61 = (byte)uVar5 & 1;
      local_c4 = 1;
    }
    else {
      local_e9 = 0;
      pcVar6 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_markedTextRange_026a0d40);
      bVar1 = false;
      if (((ulong)pcVar6 & 1) != 0) {
        pcVar6 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_markedTextRange_026a0d40);
        _objc_retainAutoreleasedReturnValue();
        local_e9 = 1;
        bVar1 = pcVar6 != (cfstringStruct *)0x0;
        local_e8 = pcVar6;
      }
      if ((local_e9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e8);
      }
      if (bVar1) {
        lStack_f8 = lStack_70;
        local_100 = local_78;
        uVar5 = local_80;
        (*DAT_028c9348)(local_80,local_88,local_90,local_78,lStack_70,local_98);
        local_61 = (byte)uVar5 & 1;
        local_c4 = 1;
      }
      else {
        pcVar6 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        local_1e8 = pcVar6;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_1e8 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_108 = local_1e8;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        pcVar6 = local_78;
        pcVar7 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
        if (pcVar7 < pcVar6) {
          lStack_118 = lStack_70;
          local_120 = local_78;
          uVar5 = local_80;
          (*DAT_028c9348)(local_80,local_88,local_90,local_78,lStack_70,local_98);
          local_61 = (byte)uVar5 & 1;
          local_c4 = 1;
        }
        else {
          pcVar6 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_108,PTR_s_characterAtIndex__0269fa18,
                     (undefined1 *)((long)&local_78[-1].field3_0x18 + 7));
          local_122 = SUB82(pcVar6,0);
          uVar2 = (uint)pcVar6 & 0xffff;
          FUN_00241f98();
          if ((uVar2 & 1) == 0) {
            lStack_138 = lStack_70;
            local_140 = local_78;
            uVar5 = local_80;
            (*DAT_028c9348)(local_80,local_88,local_90,local_78,lStack_70,local_98);
            local_61 = (byte)uVar5 & 1;
            local_c4 = 1;
          }
          else {
            pcVar6 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_mutableCopy_0269d8a0);
            local_38 = (undefined1 *)((long)&local_78[-1].field3_0x18 + 7);
            local_40 = 1;
            local_28 = 1;
            local_148 = pcVar6;
            local_30 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar6,PTR_s_replaceCharactersInRange_withStr_0269ef70,local_38,1,
                       &cf_newline_s_);
            uVar5 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
            if ((uVar5 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setText__026caa88,local_148);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setText__026caa88,local_148);
            }
            pcVar6 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_setSelectedRange__026a0d48)
            ;
            if (((ulong)pcVar6 & 1) != 0) {
              local_58 = local_78;
              local_60 = 0;
              local_50 = local_78;
              local_48 = 0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_90,PTR_s_setSelectedRange__026a0d48,local_78,0);
            }
            uVar5 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_respondsToSelector__026ca818,
                       PTR_s_saveTextSelectRange_026a0d50);
            if ((uVar5 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_saveTextSelectRange_026a0d50);
            }
            local_61 = 0;
            local_c4 = 1;
            _objc_storeStrong(&local_148,0);
          }
        }
        _objc_storeStrong(&local_108,0);
      }
    }
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  return local_61 & 1;
}

