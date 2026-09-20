// FUN_001a6ea8 @ 001a6ea8

void FUN_001a6ea8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong local_40;
  undefined4 local_38;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  ulong uVar2;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_initBarItem_0269fe20);
  uVar2 = local_18;
  FUN_001aab74();
  uVar1 = (uint)uVar2;
  FUN_001afc2c();
  if ((uVar1 & 1) == 0) {
    uVar2 = local_18;
    FUN_001aafcc();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    if (uVar2 != 0) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,
                 PTR_s_checkAndUpdateMenuBarItemSearchS_0269fe38);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_checkAndUpdateMenuBarItemSearchS_0269fe38,local_40);
      }
    }
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  else {
    FUN_001aacec(local_18);
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

