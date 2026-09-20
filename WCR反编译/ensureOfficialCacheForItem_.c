// ensureOfficialCacheForItem: @ 01098114

/* Function Stack Size: 0x18 bytes */

bool WCRefineLocalEmoticonStore::ensureOfficialCacheForItem_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  segment_command *psVar2;
  ID IVar3;
  segment_command *psVar4;
  segment_command *local_60;
  ID local_58;
  byte local_49;
  segment_command *local_48;
  segment_command *local_40;
  undefined4 local_34;
  segment_command *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = (segment_command *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == (segment_command *)0x0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    psVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_md5_026a3da0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = psVar2;
    (*(code *)PTR__objc_msgSend_02578628)(psVar2,PTR_s_length_0269cca0);
    local_49 = 0;
    bVar1 = false;
    if (psVar2 == &segment_command_00000020) {
      psVar2 = local_40;
      FUN_0108f988();
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = psVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = psVar2 != (segment_command *)0x0;
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if (bVar1) {
      local_11 = 1;
      local_34 = 1;
    }
    else {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_filePathForItem__026ae430,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_58 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
      if (IVar3 == 0) {
        local_11 = 0;
        local_34 = 1;
      }
      else {
        psVar2 = (segment_command *)PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_58
                  );
        _objc_retainAutoreleasedReturnValue();
        local_60 = psVar2;
        (*(code *)PTR__objc_msgSend_02578628)(psVar2,PTR_s_length_0269cca0);
        if (psVar2 == (segment_command *)0x0) {
          local_11 = 0;
        }
        else {
          psVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
          if (&psVar2[-1].fileoff != (qword *)0x0) {
            psVar4 = local_60;
            FUN_0107c72c(&psVar2[-1].fileoff);
            _objc_retainAutoreleasedReturnValue();
            psVar2 = local_40;
            local_40 = psVar4;
            (*(code *)PTR__objc_release_02578630)(psVar2);
          }
          psVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
          if (psVar2 == &segment_command_00000020) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setMd5__026ac158,local_40);
            psVar2 = local_40;
            FUN_0108f988();
            _objc_retainAutoreleasedReturnValue();
            psVar4 = psVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(psVar2);
            if (psVar4 == (segment_command *)0x0) {
              psVar2 = local_40;
              FUN_0108cf00(0,local_40,local_60);
              local_11 = (byte)psVar2 & 1;
            }
            else {
              local_11 = 1;
            }
          }
          else {
            local_11 = 0;
          }
        }
        local_34 = 1;
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

