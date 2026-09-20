// FUN_008c38d0 @ 008c38d0

/* WARNING: Type propagation algorithm not settling */

byte FUN_008c38d0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_130;
  char *local_c8;
  undefined *local_c0;
  ulong local_b8;
  undefined1 local_aa;
  undefined1 local_a9;
  ulong local_a8;
  undefined4 local_9c;
  undefined *local_90;
  char *local_88;
  byte local_79;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined4 local_60;
  undefined8 local_50;
  ulong local_48 [4];
  byte local_21;
  
  local_48[3] = 0;
  _objc_storeStrong(local_48 + 3,param_1);
  local_48[2] = 0;
  _objc_storeStrong(local_48 + 2,param_2);
  local_48[1] = 0;
  local_50 = 0;
  uVar1 = local_48[3];
  FUN_008b6dec(local_48[3],&local_50);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(local_48 + 1,local_50);
  local_48[0] = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    FUN_008b6b2c(&cf_lS1Y_eN_gN_);
    local_21 = 0;
    local_60 = 1;
  }
  else {
    uVar2 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_copy_0269d150);
    uVar1 = local_48[0];
    local_48[0] = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_48[3];
    FUN_008c1298(local_48[3],local_48[2]);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_48[3];
      FUN_008c4410(local_48[3],local_48[2]);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar1;
      if (uVar1 == 0) {
        FUN_008b6b2c(&cf_lS1Y_T_NeHe);
        local_21 = 0;
        local_60 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_m_nsToUsr_0269d090);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 0;
        local_130 = uVar1;
        if (uVar1 == 0) {
          local_130 = local_48[2];
          FUN_008bbaac();
          _objc_retainAutoreleasedReturnValue();
          local_78 = local_130;
        }
        local_79 = uVar1 == 0;
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = local_130;
        if ((local_79 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        (*(code *)PTR__objc_release_02578630)(uVar1);
        uVar1 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
        if (uVar1 == 0) {
          FUN_008b6b2c(&cf_lS1Y_elSc6eN);
          local_21 = 0;
          local_60 = 1;
        }
        else {
          pcVar3 = "CMessageMgr";
          _objc_getClass();
          FUN_008be3d8();
          _objc_retainAutoreleasedReturnValue();
          local_90 = PTR_s_AddMsg_MsgWrap__0269d040;
          local_88 = pcVar3;
          if ((pcVar3 == (char *)0x0) ||
             ((*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_AddMsg_MsgWrap__0269d040),
             ((ulong)pcVar3 & 1) == 0)) {
            FUN_008b6b2c(&cf_lS1Y_ScSNS_u);
            local_21 = 0;
            local_60 = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_88,local_90,local_70,local_68);
            uVar1 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_m_uiMesLocalID_0269d238);
            local_9c = (undefined4)uVar1;
            local_a8 = 0;
            uVar2 = local_68;
            FUN_008b5ddc(local_68,PTR_s_getVoicePath_026a4578);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar2;
            FUN_008b7d64();
            _objc_retainAutoreleasedReturnValue();
            uVar1 = local_a8;
            local_a8 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar1);
            (*(code *)PTR__objc_release_02578630)(uVar2);
            local_a9 = 0;
            local_aa = 0;
            uVar1 = local_a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
            if (uVar1 != 0) {
              uVar1 = local_a8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a8,PTR_s_stringByDeletingLastPathComponen_0269fb90);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              local_b8 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              local_c0 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar5,PTR_s_fileExistsAtPath__026ca630,local_b8);
              if (((ulong)puVar5 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c0,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_b8,1,0);
              }
              uVar1 = local_48[0];
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48[0],PTR_s_writeToFile_atomically__0269f928,local_a8,1);
              local_a9 = (undefined1)uVar1;
              puVar5 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c0,PTR_s_fileExistsAtPath__026ca630,local_a8);
              local_aa = SUB81(puVar5,0);
              _objc_storeStrong(&local_c0);
              _objc_storeStrong(&local_b8,0);
            }
            pcVar3 = "AudioSender";
            _objc_getClass();
            FUN_008be3d8();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR_s_ResendVoiceMsg_MsgWrap__026a9b30;
            local_c8 = pcVar3;
            if ((pcVar3 == (char *)0x0) ||
               ((*(code *)PTR__objc_msgSend_02578628)
                          (pcVar3,PTR_s_respondsToSelector__026ca818,
                           PTR_s_ResendVoiceMsg_MsgWrap__026a9b30), ((ulong)pcVar3 & 1) == 0)) {
              FUN_008b6b2c(&cf_lS1Y_ScSNS_u);
              local_21 = 0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,puVar5,local_70,local_68);
              local_21 = 1;
            }
            local_60 = 1;
            _objc_storeStrong(&local_c8);
            _objc_storeStrong(&local_a8,0);
          }
          _objc_storeStrong(&local_88,0);
        }
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68,0);
    }
    else {
      local_21 = 1;
      local_60 = 1;
    }
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(local_48 + 1,0);
  _objc_storeStrong(local_48 + 2,0);
  _objc_storeStrong(local_48 + 3,0);
  return local_21 & 1;
}

