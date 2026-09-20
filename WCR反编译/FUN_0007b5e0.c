// FUN_0007b5e0 @ 0007b5e0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_0007b5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte local_a1;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  if ((local_30 == 0) || (local_38 == 0)) {
    local_21 = 0;
    local_3c = 1;
  }
  else {
    uStack_58 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
    local_60 = *(undefined8 *)PTR__CGRectZero_025782f0;
    uStack_48 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
    local_50 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
    uVar2 = local_38;
    FUN_0007bdd4(local_38,&local_60);
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar2;
    if ((uVar2 == 0) || (uVar2 != local_30)) {
      uVar4 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
      local_a1 = 0;
      if (((local_38 != 0) &&
          (uVar2 = local_38,
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isViewLoaded_0269cde0),
          (uVar2 & 1) != 0)) &&
         (uVar3 = local_30, FUN_0007c508(), uVar2 = local_30, (uVar3 & 1) != 0)) {
        uVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
        local_a1 = (byte)uVar3;
        _objc_retainAutoreleasedReturnValue();
        FUN_0007c690(uVar2);
        (*(code *)PTR__objc_release_02578630)();
        FUN_0007cc50(uVar4,param_2,param_3,param_4,local_60,uStack_58,local_50,uStack_48);
      }
      if ((local_a1 & 1) == 0) {
        FUN_0007972c(local_30);
        local_21 = 0;
      }
      else {
        local_21 = 0;
      }
    }
    else {
      uVar2 = local_30;
      FUN_0007cf10(0,local_60,uStack_58,local_50,uStack_48);
      if ((long)uVar2 < 2) {
        uVar3 = local_38;
        FUN_0007d340(uVar2 - 2,local_38,local_30);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = uVar3 != 0;
        (*(code *)PTR__objc_release_02578630)();
        if (!bVar1) {
          uVar2 = local_38;
          FUN_0007d5f0(local_60,uStack_58,local_50,uStack_48,local_38,local_30);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = uVar2 != 0;
          (*(code *)PTR__objc_release_02578630)();
        }
        if (!bVar1) {
          FUN_0007972c(local_30);
        }
        local_21 = 0;
      }
      else {
        local_21 = 1;
      }
    }
    local_3c = 1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

