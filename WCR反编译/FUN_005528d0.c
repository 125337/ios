// FUN_005528d0 @ 005528d0

byte FUN_005528d0(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  ulong *local_30;
  ulong *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  local_30 = param_3;
  local_28 = param_2;
  if (DAT_028cb430 == (char *)0x0) {
    pcVar1 = "WCDataItem";
    _objc_getClass();
    DAT_028cb430 = pcVar1;
  }
  pcVar1 = DAT_028cb430;
  _objc_retainAutoreleaseReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
    local_40 = 1;
  }
  else {
    uVar2 = local_20;
    FUN_0055373c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar2 == 0) {
      uVar2 = local_20;
      FUN_00553818();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      if (uVar2 == 0) {
        local_11 = 0;
        local_40 = 1;
      }
      else {
        uVar2 = local_20;
        FUN_00550aa0(local_20,&cf_username);
        _objc_retainAutoreleasedReturnValue();
        local_50 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
        if (uVar2 == 0) {
          uVar3 = local_20;
          FUN_00550aa0(local_20,&cf_sourceUserName);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_50;
          local_50 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        uVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
        uVar2 = local_50;
        if (uVar3 == 0) {
          local_11 = 0;
        }
        else {
          if (local_28 != (ulong *)0x0) {
            _objc_retainAutorelease();
            *local_28 = uVar2;
          }
          uVar2 = local_48;
          if (local_30 != (ulong *)0x0) {
            _objc_retainAutorelease();
            *local_30 = uVar2;
          }
          local_11 = 1;
        }
        local_40 = 1;
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
    }
    else {
      local_11 = 0;
      local_40 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

