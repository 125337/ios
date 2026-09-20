// FUN_00f62788 @ 00f62788

byte FUN_00f62788(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    FUN_00f633b8();
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                 PTR_s_openOfficialProfileForContact__0269efc0,local_20);
      if (((ulong)puVar2 & 1) == 0) {
        uVar1 = local_20;
        FUN_00f638e8(local_20,local_28);
        local_11 = (byte)uVar1 & 1;
      }
      else {
        local_11 = 1;
      }
    }
    else {
      uVar1 = local_20;
      FUN_00f636b4();
      local_11 = (byte)uVar1 & 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

