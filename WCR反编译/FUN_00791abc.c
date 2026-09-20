// FUN_00791abc @ 00791abc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_00791abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_80 [3];
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_60 = param_7;
  local_58 = param_6;
  local_50 = param_5;
  local_48 = param_1;
  uStack_40 = param_2;
  local_38 = param_3;
  uStack_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_homepageCornerEnabled_0269fc40);
  if ((((ulong)puVar3 & 1) == 0) ||
     (puVar3 = local_68,
     (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_mainFrameCornerEnabled_026a1ff0),
     uVar4 = local_50, pcVar1 = DAT_028ccab8, ((ulong)puVar3 & 1) == 0)) {
    uVar4 = local_50;
    pcVar1 = DAT_028ccab8;
    (*(code *)PTR__objc_retain_02578638)();
    (*pcVar1)(local_48,uStack_40,local_38,uStack_30,uVar4,local_58,local_60);
    local_28 = uVar4;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = local_48;
    (*pcVar1)(local_48,uStack_40,local_38,uStack_30,uVar4,local_58,local_60);
    puVar3 = local_68;
    local_80[0] = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_mainFrameSpacingUnifyEnabled_026a2d70);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_00798e08();
      uVar4 = local_80[0];
      uVar6 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_sectionHeaderHeight_026a3210);
      uVar2 = (uint)uVar4;
      FUN_00798f28(uVar6,uVar5);
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,local_80[0],PTR_s_setSectionHeaderHeight__026a80d8);
      }
    }
    FUN_00798f54(local_80[0],1);
    uVar4 = local_80[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar4;
    _objc_storeStrong(local_80,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_50,0);
  return local_28;
}

