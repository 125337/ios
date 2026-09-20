// FUN_008f092c @ 008f092c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_008f092c(undefined8 param_1,ulong *param_2,ulong *param_3,byte *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  uint local_2c4;
  cfstringStruct *local_2b0;
  cfstringStruct *local_268;
  cfstringStruct *local_230;
  byte local_1c4;
  cfstringStruct *local_188;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  undefined *local_88;
  byte local_79;
  cfstringStruct *local_78;
  undefined *local_70;
  byte local_61;
  cfstringStruct *local_60;
  undefined4 local_58;
  byte *local_48;
  ulong *local_40;
  ulong *local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_48 = param_4;
  local_40 = param_3;
  local_38 = param_2;
  if (param_2 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_38 = (ulong)&cf___;
  }
  if (local_40 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_40 = (ulong)&cf___;
  }
  if (local_48 != (byte *)0x0) {
    *local_48 = 0;
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar4 = local_30;
  if (((ulong)puVar2 & 1) == 0) {
    local_21 = 0;
    local_58 = 1;
  }
  else {
    pcVar3 = &cf_VoiceMessageCellView;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,pcVar3);
    if (((ulong)pcVar4 & 1) == 0) {
      pcVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_188 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_188 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_188;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_isEqualToString__0269ccc8,&cf_VideoMessageCellView);
      local_61 = true;
      if (((ulong)pcVar4 & 1) == 0) {
        pcVar4 = local_60;
        puVar1 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_rangeOfString__0269d838,&cf_Sight);
        local_61 = pcVar4 != (cfstringStruct *)0x7fffffffffffffff;
        local_78 = pcVar4;
        local_70 = puVar1;
      }
      pcVar4 = local_60;
      puVar1 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_rangeOfString__0269d838,&cf_AppVideo);
      local_1c4 = 1;
      local_90 = pcVar4;
      local_88 = puVar1;
      if (pcVar4 == (cfstringStruct *)0x7fffffffffffffff) {
        pcVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_isEqualToString__0269ccc8,&cf_AppMusicMVMessageCellView);
        local_1c4 = (byte)pcVar4;
      }
      local_79 = local_1c4 & 1;
      pcVar4 = local_60;
      puVar1 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_rangeOfString__0269d838,&cf_AppFile);
      local_91 = true;
      local_a8 = pcVar4;
      local_a0 = puVar1;
      if (pcVar4 == (cfstringStruct *)0x7fffffffffffffff) {
        pcVar4 = local_60;
        puVar1 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_rangeOfString__0269d838,&cf_File);
        local_91 = pcVar4 != (cfstringStruct *)0x7fffffffffffffff;
        local_b8 = pcVar4;
        local_b0 = puVar1;
      }
      pcVar4 = local_30;
      FUN_008e5898();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_30;
      local_c0 = pcVar4;
      FUN_008e5e98();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_30;
      local_c8 = pcVar3;
      FUN_008e6e28();
      _objc_retainAutoreleasedReturnValue();
      local_d0 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_230 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_230 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = local_230;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_c0;
      FUN_008edb44(local_c0,local_c8,local_d0);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_268 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_268 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = local_268;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_c0;
      FUN_008ea6ac(local_c0,local_c8);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSURL_026ce328;
      local_f0 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_2b0 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_2b0 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = local_2b0;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar4 = local_d8;
      FUN_008ed910();
      local_2c4 = 1;
      if (((ulong)pcVar4 & 1) == 0) {
        pcVar4 = local_e8;
        FUN_008ed910();
        local_2c4 = 1;
        if (((ulong)pcVar4 & 1) == 0) {
          pcVar4 = local_f8;
          FUN_008ed910();
          local_2c4 = (uint)pcVar4;
        }
      }
      if (((local_91 & 1) == 0) || ((local_2c4 & 1) != 0)) {
        if (((local_61 & 1) == 0) && (((local_79 & 1) == 0 && ((local_2c4 & 1) == 0)))) {
          local_21 = 0;
        }
        else {
          if (local_48 != (byte *)0x0) {
            *local_48 = local_91 & 1;
          }
          pcVar3 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
          pcVar4 = local_d0;
          if (pcVar3 == (cfstringStruct *)0x0) {
            pcVar3 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
            pcVar4 = local_f0;
            if (pcVar3 == (cfstringStruct *)0x0) {
              local_21 = 1;
              if ((local_61 & 1) == 0) {
                local_21 = local_79;
              }
              local_21 = local_21 & 1;
            }
            else {
              if (local_40 != (ulong *)0x0) {
                _objc_retainAutorelease();
                *local_40 = (ulong)pcVar4;
              }
              local_21 = 1;
            }
          }
          else {
            if (local_38 != (ulong *)0x0) {
              _objc_retainAutorelease();
              *local_38 = (ulong)pcVar4;
            }
            local_21 = 1;
          }
        }
      }
      else {
        local_21 = 0;
      }
      local_58 = 1;
      _objc_storeStrong(&local_f8);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_e0,0);
      _objc_storeStrong(&local_d8,0);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_60,0);
    }
    else {
      local_21 = 0;
      local_58 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

