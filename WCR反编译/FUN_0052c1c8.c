// FUN_0052c1c8 @ 0052c1c8

byte FUN_0052c1c8(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar3;
  undefined8 local_20;
  byte local_11;
  undefined8 *puVar2;
  
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_0052b2cc();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    puVar3 = PTR_WCRefineMomentsMonitor_026ce718;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_isDataItemFromCache__026a4718,local_20);
    local_11 = (byte)puVar3 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

