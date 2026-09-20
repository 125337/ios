// FUN_00673698 @ 00673698

byte FUN_00673698(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_f0;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (cfstringStruct *)0x0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    pcVar1 = local_30;
    FUN_0066e298();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar1;
    FUN_0066c6c4();
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_30;
      FUN_0066cfc4();
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_30;
        FUN_00655d64(local_30,"m_messageLabel");
        _objc_retainAutoreleasedReturnValue();
        local_58[0] = pcVar1;
        FUN_0066cee4();
        _objc_retainAutoreleasedReturnValue();
        local_60 = pcVar1;
        FUN_00665300();
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_30;
          FUN_00655d64(local_30,"m_greenLabel");
          _objc_retainAutoreleasedReturnValue();
          local_68 = pcVar1;
          FUN_0066cee4();
          _objc_retainAutoreleasedReturnValue();
          local_70 = pcVar1;
          FUN_00665300();
          if (((ulong)pcVar1 & 1) == 0) {
            pcVar1 = local_40;
            FUN_00662d08();
            _objc_retainAutoreleasedReturnValue();
            local_78 = pcVar1;
            FUN_00663124(pcVar1,local_40);
            _objc_retainAutoreleasedReturnValue();
            local_f0 = pcVar1;
            if (pcVar1 == (cfstringStruct *)0x0) {
              local_f0 = &cf___;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_80 = local_f0;
            (*(code *)PTR__objc_release_02578630)(pcVar1);
            pcVar1 = local_80;
            FUN_00663614();
            local_81 = (byte)pcVar1;
            if ((((ulong)pcVar1 & 1) == 0) ||
               (pcVar1 = local_70, FUN_006638c8(), ((ulong)pcVar1 & 1) == 0)) {
              pcVar1 = local_40;
              FUN_0066af54();
              _objc_retainAutoreleasedReturnValue();
              local_90 = pcVar1;
              if (((local_81 & 1) == 0) || (FUN_006638c8(), ((ulong)pcVar1 & 1) == 0)) {
                local_21 = 0;
              }
              else {
                local_21 = 1;
              }
              local_34 = 1;
              _objc_storeStrong(&local_90,0);
            }
            else {
              local_21 = 1;
              local_34 = 1;
            }
            _objc_storeStrong(&local_80);
            _objc_storeStrong(&local_78,0);
          }
          else {
            local_21 = 1;
            local_34 = 1;
          }
          _objc_storeStrong(&local_70);
          _objc_storeStrong(&local_68,0);
        }
        else {
          local_21 = 1;
          local_34 = 1;
        }
        _objc_storeStrong(&local_60);
        _objc_storeStrong(local_58,0);
      }
      else {
        local_21 = 1;
        local_34 = 1;
      }
    }
    else {
      local_21 = 1;
      local_34 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

