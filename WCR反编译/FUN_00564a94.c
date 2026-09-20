// FUN_00564a94 @ 00564a94

byte FUN_00564a94(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong local_b8;
  ulong local_88;
  ulong local_80;
  byte local_71;
  ulong local_70;
  ulong local_68 [3];
  ulong local_50;
  ulong local_48;
  int local_3c;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar1;
  while (uVar1 = local_38, local_38 != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar1;
    FUN_0056523c();
    _objc_retainAutoreleasedReturnValue();
    local_71 = 0;
    uVar2 = local_48;
    local_50 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_dataItem_026a13c8);
    if ((uVar2 & 1) == 0) {
      local_b8 = 0;
    }
    else {
      local_b8 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_dataItem_026a13c8);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68[0] = local_b8;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if (local_68[0] == 0) {
      uVar2 = local_48;
      FUN_00565494();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_68[0];
      local_68[0] = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_48;
    FUN_0056583c();
    _objc_retainAutoreleasedReturnValue();
    local_80 = uVar1;
    FUN_00565ddc(uVar1,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_88 = uVar1;
    if ((local_68[0] == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0), uVar2 = local_48,
       uVar1 == 0)) {
LAB_00564d34:
      local_3c = 4;
    }
    else {
      FUN_00566204();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,uVar1);
      if ((uVar2 & 1) == 0) goto LAB_00564d34;
      FUN_00566210(local_68[0],local_50,local_88,local_48);
      local_21 = 1;
      local_3c = 1;
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(local_68,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    iVar3 = local_3c + -4;
    if (iVar3 != 0) goto LAB_00564e84;
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  iVar3 = 2;
  local_3c = 2;
LAB_00564e84:
  _objc_storeStrong(iVar3,&local_38,0);
  iVar3 = local_3c + -2;
  if (iVar3 == 0) {
    iVar3 = 1;
    local_21 = 0;
    local_3c = 1;
  }
  _objc_storeStrong(iVar3,&local_30,0);
  return local_21 & 1;
}

