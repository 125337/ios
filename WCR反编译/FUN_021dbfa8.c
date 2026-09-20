// FUN_021dbfa8 @ 021dbfa8

void FUN_021dbfa8(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulong local_38;
  
  local_38 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_80 = 0;
  uVar2 = param_2;
  FUN_021cf8f4();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_2;
    FUN_02223ac0(param_2,local_c8,0x77636963);
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      uVar3 = uVar2;
      local_50 = uVar2;
      FUN_021e3e3c();
      uVar4 = uVar2;
      local_58 = uVar3;
      FUN_021e34b8();
      local_60 = uVar4;
      (*(code *)PTR__objc_retain_02578638)(uVar3);
      FUN_02222d60(uVar4,local_c8,uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar5 = uVar4;
      FUN_02223100(uVar4,local_c8,0);
      FUN_021e3048();
      local_78 = 0x3ff0000000000000;
      local_70 = param_1;
      FUN_021c8058();
      puVar1 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
      __ss3maxyxx_xtSLRzlF(&local_68,&local_70,&local_78);
      local_80 = local_68;
      uVar6 = uVar2;
      FUN_02222960(uVar2,local_c8);
      _objc_retainAutoreleasedReturnValue();
      FUN_02222da0(local_68);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      uVar6 = uVar2;
      FUN_02222960(uVar2,local_c8);
      _objc_retainAutoreleasedReturnValue();
      local_90 = DAT_02323f60;
      uVar7 = uVar3;
      uVar8 = DAT_02323f60;
      FUN_02221d00(uVar3,local_c8);
      _objc_retainAutoreleasedReturnValue();
      _CGColorGetAlpha();
      (*(code *)PTR__objc_release_02578630)(uVar7);
      local_98 = uVar8;
      __ss3minyxx_xtSLRzlF(&local_88,&local_90,&local_98,puVar1,uVar5);
      uVar5 = uVar3;
      FUN_02222120(local_88,uVar3,local_c8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      FUN_02221d00();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      FUN_02222d80(uVar6,local_c8,uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      FUN_021e3654(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = param_2;
    FUN_021e3da4();
    FUN_021e3e3c();
    local_38 = uVar2;
    (*(code *)PTR__objc_retain_02578638)(param_2);
    uVar3 = param_2;
    FUN_02222960(param_2,local_c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(param_2);
    FUN_02223460(0x3df5c28f,uVar3,local_c8);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_retain_02578638)(param_2);
    uVar3 = param_2;
    FUN_02222960(param_2,local_c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(param_2);
    FUN_022234a0(0x4014000000000000,uVar3,local_c8);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_retain_02578638)(param_2);
    uVar3 = param_2;
    FUN_02222960(param_2,local_c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(param_2);
    local_48 = 0;
    local_40 = 0;
    FUN_02223440(0,0,uVar3,local_c8);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_retain_02578638)(param_2);
    uVar3 = param_2;
    FUN_02222960(param_2,local_c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(param_2);
    uVar4 = uVar2;
    FUN_02222120(0x3fd6666666666666,uVar2,local_c8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_02221d00();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    FUN_02223420(uVar3,local_c8,uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  else {
    uVar2 = param_2;
    (*(code *)PTR__objc_retain_02578638)();
    FUN_021e3e3c();
    uVar3 = uVar2;
    FUN_021d010c();
    if ((uVar3 & 1) == 0) {
      local_b8 = DAT_02323ec8;
    }
    else {
      local_b8 = 0x3fd6666666666666;
    }
    uVar3 = uVar2;
    FUN_02222120(local_b8,uVar2,local_c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    FUN_02222d60(param_2,local_c8,uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(param_2);
    (*(code *)PTR__objc_retain_02578638)(param_2);
    uVar2 = param_2;
    FUN_02222960(param_2,local_c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(param_2);
    FUN_02222da0(0,uVar2,local_c8);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_retain_02578638)(param_2);
    uVar2 = param_2;
    FUN_02222960(param_2,local_c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(param_2);
    FUN_02223460(0,uVar2,local_c8);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    FUN_021e3da4(param_2);
  }
  return;
}

