// FUN_002c42c8 @ 002c42c8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002c42c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong local_178;
  ulong local_170 [5];
  undefined8 local_148;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_b4;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_68 = 0;
  local_60 = param_5;
  uStack_58 = param_6;
  local_50 = param_7;
  uStack_48 = param_8;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  _objc_storeStrong(&local_68,param_9);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_10);
  uVar2 = local_70;
  FUN_002acd8c(local_70,0x24f757);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_68;
  local_78 = uVar2;
  FUN_002cae04();
  if (((uVar3 & 1) == 0) ||
     (_CGRectIsEmpty(local_60,uStack_58,local_50,uStack_48), (uVar3 & 1) != 0)) {
    FUN_002bf438(local_78);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_removeFromSuperview_026ca800);
    local_b4 = 1;
  }
  else {
    if (local_78 == 0) {
      FUN_002cb044();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_78;
      local_78 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_insertSubview_atIndex__026ca748,local_78,0);
    }
    uStack_118 = uStack_58;
    local_120 = local_60;
    uVar5 = local_40;
    uVar6 = uStack_38;
    uVar7 = local_30;
    uVar8 = uStack_28;
    _CGRectUnion();
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bounds_026ca548);
    FUN_002cb3dc();
    uVar2 = local_78;
    local_148 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    FUN_002b0928();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_viewWithTag__026cabe0,0x24f751);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_78;
    local_170[0] = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_viewWithTag__026cabe0,0x24f74c);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_68;
    uVar3 = local_78;
    uVar2 = local_170[0];
    local_178 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bounds_026ca548);
    FUN_002cb5b0(uVar5,uVar6,uVar7,uVar8,local_148,uVar3,uVar2,uVar4,uVar1);
    _objc_storeStrong(&local_178);
    _objc_storeStrong(local_170,0);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  return;
}

