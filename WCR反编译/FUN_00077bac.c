// FUN_00077bac @ 00077bac

byte FUN_00077bac(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_50;
  byte local_45 [5];
  ulong local_40 [3];
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00071ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  local_28 = uVar1;
  FUN_00077d80(local_20,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_28;
  local_40[0] = uVar2;
  _WCRAvatarIsFriendProfileController();
  if ((uVar1 & 1) != 0) {
    _objc_storeStrong(local_40,_WCRAvatarSceneFriendProfile);
  }
  uVar1 = local_40[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    FUN_0007799c();
    local_11 = (byte)uVar1;
  }
  else {
    local_45[0] = 0;
    local_50 = 0;
    FUN_00077e3c(local_40[0],local_45,&local_50);
    uVar1 = local_40[0];
    FUN_0007804c(local_40[0],local_45[0] & 1,local_50);
    local_11 = (byte)uVar1;
  }
  local_11 = local_11 & 1;
  local_45[1] = 1;
  local_45[2] = 0;
  local_45[3] = 0;
  local_45[4] = 0;
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

