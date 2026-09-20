// FUN_005612d0 @ 005612d0

void FUN_005612d0(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_80;
  ulong local_68;
  ulong local_60;
  byte local_51;
  ulong local_50;
  ulong local_38;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_0056db84();
  local_21 = (byte)param_1;
  uVar2 = local_18;
  FUN_0056523c();
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  uVar3 = local_18;
  local_30 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_dataItem_026a13c8);
  if ((uVar3 & 1) == 0) {
    local_80 = 0;
  }
  else {
    local_80 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dataItem_026a13c8);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_80;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_80;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  uVar2 = local_18;
  FUN_0056583c();
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar2;
  FUN_00565ddc(uVar2,local_30);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  local_68 = uVar2;
  if (((local_21 & 1) != 0) && (bVar1 = false, local_38 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    bVar1 = uVar2 != 0;
  }
  if (bVar1) {
    FUN_00566210(local_38,local_30,local_68,local_18);
    FUN_0056dc20();
  }
  (*DAT_028cb480)(local_18,local_20);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

