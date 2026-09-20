// FUN_0156c720 @ 0156c720

byte FUN_0156c720(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong local_88;
  ulong local_70;
  cfstringStruct *local_60;
  ulong local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (((local_20 == 0) || (uVar1 = local_20, FUN_01564574(), (uVar1 & 1) != 0)) ||
     (uVar1 = local_20, FUN_01565620(), (uVar1 & 1) != 0)) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    FUN_01532090();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if ((uVar1 == 0) || (FUN_01564574(), (uVar1 & 1) == 0)) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      uVar1 = local_30;
      FUN_01528d34();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_20;
      local_38 = uVar1;
      FUN_01528d34();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_38;
      local_40 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if ((uVar1 == 0) ||
         (uVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
         uVar1 == 0)) {
        local_11 = 0;
        local_24 = 1;
      }
      else {
        pcVar3 = &cf_ChatRoomMemMsgListViewController;
        _NSClassFromString();
        local_50 = PTR_s_initWithChat_memContact__026b06e8;
        local_48 = pcVar3;
        if ((pcVar3 == (cfstringStruct *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_instancesRespondToSelector__0269da90,
                       PTR_s_initWithChat_memContact__026b06e8), ((ulong)pcVar3 & 1) == 0)) {
          local_11 = 0;
          local_24 = 1;
        }
        else {
          uVar1 = local_40;
          FUN_0155771c();
          _objc_retainAutoreleasedReturnValue();
          local_70 = uVar1;
          if (uVar1 == 0) {
            local_70 = local_20;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_58 = local_70;
          (*(code *)PTR__objc_release_02578630)(uVar1);
          uVar1 = local_58;
          FUN_0157804c();
          if ((uVar1 & 1) == 0) {
            uVar1 = local_58;
            FUN_015781b8();
            _objc_retainAutoreleasedReturnValue();
            local_88 = uVar1;
            if (uVar1 == 0) {
              local_88 = local_58;
            }
            _objc_storeStrong(&local_58,local_88);
            (*(code *)PTR__objc_release_02578630)(uVar1);
          }
          pcVar3 = local_48;
          _objc_alloc();
          pcVar4 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_60 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          local_11 = local_60 != (cfstringStruct *)0x0;
          if ((bool)local_11) {
            FUN_01556938(local_60);
          }
          local_24 = 1;
          _objc_storeStrong(&local_60);
          _objc_storeStrong(&local_58,0);
        }
      }
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

