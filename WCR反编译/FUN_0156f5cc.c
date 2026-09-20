// FUN_0156f5cc @ 0156f5cc

byte FUN_0156f5cc(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  byte local_69;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  undefined *local_40;
  char *local_38;
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
    uVar1 = local_20;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      pcVar2 = "MMServiceCenter";
      _objc_getClass();
      FUN_01533df4();
      _objc_retainAutoreleasedReturnValue();
      local_40 = PTR_s_getService__0269d170;
      pcVar3 = "SendPatMgr";
      local_38 = pcVar2;
      _objc_getClass();
      local_50 = (char *)0x0;
      local_48 = pcVar3;
      if (((local_38 != (char *)0x0) && (pcVar3 != (char *)0x0)) &&
         (pcVar3 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,local_40)
         , ((ulong)pcVar3 & 1) != 0)) {
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,local_40,local_48);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_50;
        local_50 = pcVar2;
        (*(code *)PTR__objc_release_02578630)();
      }
      if (local_50 == (char *)0x0) {
        local_11 = 0;
        local_24 = 1;
      }
      else {
        FUN_01532090();
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar3;
        FUN_01528d34();
        _objc_retainAutoreleasedReturnValue();
        local_69 = 0;
        pcVar2 = local_58;
        local_60 = pcVar3;
        FUN_01564574();
        if (((((ulong)pcVar2 & 1) != 0) &&
            (pcVar2 = local_60,
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
            pcVar2 != (char *)0x0)) &&
           (pcVar2 = local_50,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_50,PTR_s_respondsToSelector__026ca818,
                      PTR_s_sendPatToUser_inGroup_scene__026a63d8), ((ulong)pcVar2 & 1) != 0)) {
          pcVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_sendPatToUser_inGroup_scene__026a63d8,local_30,local_60,0);
          local_69 = (byte)pcVar2;
        }
        if (((local_69 & 1) == 0) &&
           (pcVar2 = local_50,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_50,PTR_s_respondsToSelector__026ca818,
                      PTR_s_sendPatToUser_scene__026a63e0), ((ulong)pcVar2 & 1) != 0)) {
          pcVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_sendPatToUser_scene__026a63e0,local_30,0);
          local_69 = (byte)pcVar2;
        }
        local_11 = local_69 & 1;
        local_24 = 1;
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

