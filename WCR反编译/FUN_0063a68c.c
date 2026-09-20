// FUN_0063a68c @ 0063a68c

byte FUN_0063a68c(long param_1,undefined8 param_2,byte param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined4 *param_6,float *param_7,float *param_8,
                 float *param_9,undefined8 *param_10)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  double dVar3;
  cfstringStruct *local_310;
  cfstringStruct *local_2c0;
  cfstringStruct *local_2a8;
  cfstringStruct *local_260;
  cfstringStruct *local_248;
  cfstringStruct *local_208;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1b0;
  cfstringStruct *local_198;
  cfstringStruct *local_148;
  cfstringStruct *local_130;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  undefined4 local_90;
  cfstringStruct *local_80;
  undefined8 *local_78;
  float *local_70;
  float *local_68;
  float *local_60;
  undefined4 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  byte local_39;
  cfstringStruct *local_38;
  long local_30;
  byte local_21;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_1;
  _objc_storeStrong(&local_38);
  local_70 = param_9;
  local_78 = param_10;
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_68 = param_8;
  local_60 = param_7;
  local_58 = param_6;
  local_50 = param_5;
  local_48 = param_4;
  local_39 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_21 = 0;
    local_90 = 1;
  }
  else {
    local_91 = 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = &cf___;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = &cf___;
    dVar3 = 5.28426686226704e-315;
    if (local_30 == 1) {
      pcVar1 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatListEnabled_0269def0);
      local_91 = (byte)pcVar1;
      pcVar1 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatListPath_0269df10);
      _objc_retainAutoreleasedReturnValue();
      local_130 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_130 = &cf___;
      }
      _objc_storeStrong(&local_a0,local_130);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatListNightPath_0269df18);
      _objc_retainAutoreleasedReturnValue();
      local_148 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_148 = &cf___;
      }
      _objc_storeStrong(&local_a8,local_148);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      local_b0 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatListRandomMode_0269df40);
      pcVar1 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatListAddMode_0269df58);
      local_b4 = SUB84(pcVar1,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatListOffsetX_0269df70);
      local_b8 = (float)dVar3;
      dVar3 = (double)(ulong)(uint)local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatListOffsetY_0269df78);
      local_bc = (float)dVar3;
      dVar3 = (double)(ulong)(uint)local_bc;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatListScale_0269df80);
    }
    else {
      pcVar1 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatPageEnabled_0269def8);
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatListEnabled_0269def0);
        local_91 = (byte)pcVar1;
        pcVar1 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatListPath_0269df10);
        _objc_retainAutoreleasedReturnValue();
        local_2a8 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_2a8 = &cf___;
        }
        _objc_storeStrong(&local_a0,local_2a8);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatListNightPath_0269df18);
        _objc_retainAutoreleasedReturnValue();
        local_2c0 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_2c0 = &cf___;
        }
        _objc_storeStrong(&local_a8,local_2c0);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        local_b0 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatListRandomMode_0269df40)
        ;
        pcVar1 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatListAddMode_0269df58);
        local_b4 = SUB84(pcVar1,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatListOffsetX_0269df70);
        local_b8 = (float)dVar3;
        dVar3 = (double)(ulong)(uint)local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatListOffsetY_0269df78);
        local_bc = (float)dVar3;
        dVar3 = (double)(ulong)(uint)local_bc;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatListScale_0269df80);
      }
      else {
        local_91 = 1;
        pcVar1 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_avatarFrameChatPageDistinguishSe_0269df00);
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageOtherPath_0269df20);
          _objc_retainAutoreleasedReturnValue();
          local_198 = pcVar1;
          if (pcVar1 == (cfstringStruct *)0x0) {
            local_198 = &cf___;
          }
          _objc_storeStrong(&local_a0,local_198);
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          pcVar1 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageOtherNightPat_0269df28);
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = pcVar1;
          if (pcVar1 == (cfstringStruct *)0x0) {
            local_1b0 = &cf___;
          }
          _objc_storeStrong(&local_a8,local_1b0);
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          local_b0 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageOtherRandomMo_0269df48);
          pcVar1 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageOtherAddMode_0269df60);
          local_b4 = SUB84(pcVar1,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageOtherOffsetX_0269df88);
          local_b8 = (float)dVar3;
          dVar3 = (double)(ulong)(uint)local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageOtherOffsetY_0269df90);
          local_bc = (float)dVar3;
          dVar3 = (double)(ulong)(uint)local_bc;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageOtherScale_0269df98);
        }
        else if ((local_39 & 1) == 0) {
          pcVar1 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageOtherPath_0269df20);
          _objc_retainAutoreleasedReturnValue();
          local_248 = pcVar1;
          if (pcVar1 == (cfstringStruct *)0x0) {
            local_248 = &cf___;
          }
          _objc_storeStrong(&local_a0,local_248);
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          pcVar1 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageOtherNightPat_0269df28);
          _objc_retainAutoreleasedReturnValue();
          local_260 = pcVar1;
          if (pcVar1 == (cfstringStruct *)0x0) {
            local_260 = &cf___;
          }
          _objc_storeStrong(&local_a8,local_260);
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          local_b0 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageOtherRandomMo_0269df48);
          pcVar1 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageOtherAddMode_0269df60);
          local_b4 = SUB84(pcVar1,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageOtherOffsetX_0269df88);
          local_b8 = (float)dVar3;
          dVar3 = (double)(ulong)(uint)local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageOtherOffsetY_0269df90);
          local_bc = (float)dVar3;
          dVar3 = (double)(ulong)(uint)local_bc;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageOtherScale_0269df98);
        }
        else {
          pcVar1 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatPageSelfPath_0269df30)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_1f0 = pcVar1;
          if (pcVar1 == (cfstringStruct *)0x0) {
            local_1f0 = &cf___;
          }
          _objc_storeStrong(&local_a0,local_1f0);
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          pcVar1 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageSelfNightPath_0269df38);
          _objc_retainAutoreleasedReturnValue();
          local_208 = pcVar1;
          if (pcVar1 == (cfstringStruct *)0x0) {
            local_208 = &cf___;
          }
          _objc_storeStrong(&local_a8,local_208);
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          local_b0 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageSelfRandomMod_0269df50);
          pcVar1 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageSelfAddMode_0269df68);
          local_b4 = SUB84(pcVar1,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageSelfOffsetX_0269dfa0);
          local_b8 = (float)dVar3;
          dVar3 = (double)(ulong)(uint)local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_avatarFrameChatPageSelfOffsetY_0269dfa8);
          local_bc = (float)dVar3;
          dVar3 = (double)(ulong)(uint)local_bc;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameChatPageScale_0269dfb0);
        }
      }
    }
    local_c0 = (float)dVar3;
    pcVar2 = local_38;
    FUN_0063c4b0(local_38,local_a0,local_a8);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_a0;
    local_a0 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_a0;
    if (((long)local_b0 < 0) || (2 < (long)local_b0)) {
      local_b0 = (cfstringStruct *)0x0;
    }
    if ((local_c0 <= 0.0) || (5.0 < local_c0)) {
      local_c0 = 1.5;
    }
    if (local_c0 < 0.2) {
      local_c0 = 0.2;
    }
    if (local_48 != (undefined8 *)0x0) {
      _objc_retainAutorelease();
      *local_48 = pcVar1;
    }
    if (local_50 != (undefined8 *)0x0) {
      *local_50 = local_b0;
    }
    if (local_58 != (undefined4 *)0x0) {
      *local_58 = local_b4;
    }
    if (local_60 != (float *)0x0) {
      *local_60 = local_b8;
    }
    if (local_68 != (float *)0x0) {
      *local_68 = local_bc;
    }
    if (local_70 != (float *)0x0) {
      *local_70 = local_c0;
    }
    if (local_78 != (undefined8 *)0x0) {
      pcVar1 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_avatarFrameToppedList_0269e020);
      _objc_retainAutoreleasedReturnValue();
      local_310 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_310 = *(cfstringStruct **)PTR____NSArray0___02578280;
      }
      _objc_retainAutorelease();
      *local_78 = local_310;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    local_21 = local_91 & 1;
    local_90 = 1;
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_a0,0);
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_38,0);
  return local_21 & 1;
}

