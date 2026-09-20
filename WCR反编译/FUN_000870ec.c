// FUN_000870ec @ 000870ec

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_000870ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,byte param_9
            ,byte param_10,byte param_11,byte param_12,undefined4 param_13,undefined4 param_14,
            ulong *param_15)

{
  ulong uVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  cfstringStruct *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_f9;
  cfstringStruct *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  byte local_85;
  cfstringStruct *local_78;
  ulong *local_70;
  byte local_66;
  byte local_65;
  byte local_64;
  byte local_63;
  byte local_62;
  byte local_61;
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  local_65 = (byte)param_13;
  local_66 = param_13._1_1_;
  local_70 = param_15;
  local_64 = param_12;
  local_63 = param_11;
  local_62 = param_10;
  local_61 = param_9;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = &cf_head;
  uVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
  local_85 = 0;
  if (((local_61 & 1) == 0) && (local_85 = 0, (local_62 & 1) != 0)) {
    local_85 = local_63 ^ 1;
  }
  local_85 = local_85 & 1;
  local_b0 = param_1;
  uStack_a8 = param_2;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  FUN_0007e6b8();
  uVar4 = param_1;
  uVar6 = param_2;
  uVar7 = param_4;
  if ((uVar1 & 1) == 0) {
    uVar4 = param_3;
    FUN_0008c210(local_58,local_50);
    uVar6 = uVar4;
    param_3 = param_2;
    uVar7 = param_1;
    local_d0 = param_1;
    uStack_c8 = param_2;
    local_c0 = uVar4;
    uStack_b8 = param_4;
    local_40 = param_1;
    uStack_38 = param_2;
    local_30 = uVar4;
    uStack_28 = param_4;
  }
  if ((local_64 & 1) == 0) {
    uVar2 = uVar4;
    uVar8 = uVar6;
    uVar5 = param_3;
    uVar9 = uVar7;
    if ((local_85 & 1) != 0) {
      uVar2 = local_60;
      FUN_0008c9b0();
      local_f9 = (undefined1)uVar2;
      local_128 = local_78;
      FUN_0008ca1c(local_48,local_50,local_58,1,(uint)uVar2 & 1,&local_128);
      _objc_storeStrong(&local_78,local_128);
      uVar2 = param_3;
      uVar8 = param_3;
      uVar5 = uVar6;
      uVar9 = uVar4;
      local_120 = uVar4;
      uStack_118 = uVar6;
      local_110 = param_3;
      uStack_108 = uVar7;
      local_40 = uVar4;
      uStack_38 = uVar6;
      local_30 = param_3;
      uStack_28 = uVar7;
      if ((((local_66 & 1) != 0) && (local_78 != (cfstringStruct *)0x0)) &&
         (pcVar3 = local_78, uVar7 = param_3,
         (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_containsString__0269d0b0,&cf_border),
         uVar2 = param_3, uVar8 = uVar7, uVar5 = uVar6, uVar9 = uVar4, ((ulong)pcVar3 & 1) != 0)) {
        uVar2 = uVar6;
        FUN_0008d1bc(local_58,local_50);
        uVar8 = uVar2;
        local_40 = param_3;
        uStack_38 = uVar7;
        local_30 = uVar2;
        uStack_28 = uVar4;
        _objc_storeStrong(&local_78,&cf_head_stable);
        uVar5 = uVar7;
        uVar9 = param_3;
      }
    }
  }
  else {
    local_f8 = local_78;
    FUN_0008c524(local_48,local_50,local_58,&local_f8,0);
    _objc_storeStrong(&local_78,local_f8);
    uVar2 = param_3;
    uVar8 = param_3;
    uVar5 = uVar6;
    uVar9 = uVar4;
    local_f0 = uVar4;
    uStack_e8 = uVar6;
    local_e0 = param_3;
    uStack_d8 = uVar7;
    local_40 = uVar4;
    uStack_38 = uVar6;
    local_30 = param_3;
    uStack_28 = uVar7;
  }
  uVar4 = uVar2;
  uVar6 = uVar8;
  uVar7 = uVar5;
  uVar10 = uVar9;
  if ((local_65 & 1) != 0) {
    uVar1 = local_58;
    FUN_0008d1bc(local_58,local_50);
    uVar4 = uVar2;
    uVar6 = uVar8;
    uVar7 = uVar5;
    uVar10 = uVar9;
    FUN_0007e6b8();
    if ((uVar1 & 1) != 0) {
      local_40 = uVar2;
      uStack_38 = uVar8;
      local_30 = uVar5;
      uStack_28 = uVar9;
      _objc_storeStrong(&local_78,&cf_head_stable);
      uVar4 = uVar5;
    }
  }
  if (((local_63 & 1) != 0) &&
     (pcVar3 = local_78,
     (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,&cf_container),
     ((ulong)pcVar3 & 1) != 0)) {
    uVar1 = local_58;
    FUN_0008d1bc(local_58,local_50);
    FUN_0007e6b8(uVar4,uVar6,uVar7,uVar10);
    if ((uVar1 & 1) != 0) {
      local_40 = uVar4;
      uStack_38 = uVar6;
      local_30 = uVar7;
      uStack_28 = uVar10;
      _objc_storeStrong(&local_78,&cf_head_friend_profile);
    }
  }
  pcVar3 = local_78;
  if (local_70 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_70 = (ulong)pcVar3;
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  return local_40;
}

