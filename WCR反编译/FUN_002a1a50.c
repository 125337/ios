// FUN_002a1a50 @ 002a1a50

void FUN_002a1a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5,ulong param_6,byte param_7)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  uint local_e4;
  double local_b0;
  undefined8 local_90;
  undefined8 uStack_88;
  double local_80;
  undefined8 uStack_78;
  byte local_61;
  ulong local_60;
  undefined4 local_58;
  byte local_51;
  undefined *local_50;
  byte local_31;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_51 = 0;
  local_e4 = 1;
  local_31 = param_7;
  local_30 = param_6;
  if (local_28 != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e4 = (uint)puVar2 ^ 1;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_e4 & 1) == 0) {
    uVar3 = local_28;
    FUN_002b3d00();
    if ((uVar3 & 1) != 0) {
      local_31 = 0;
    }
    uVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028c9801);
    _objc_retainAutoreleasedReturnValue();
    local_61 = true;
    local_60 = uVar3;
    if (uVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_unsignedIntegerValue_026cabb8);
      local_61 = uVar3 != local_30;
    }
    uVar3 = local_28;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
               local_30);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar3,&DAT_028c9801,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar3 = local_28;
    uStack_88 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
    local_90 = *(undefined8 *)PTR__CGRectZero_025782f0;
    uStack_78 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
    local_b0 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    local_80 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    FUN_0029ef90(uVar3,(ulong)puVar4 & 0xffffffff,&local_90);
    dVar5 = param_4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    FUN_002b3e70(local_28);
    if (0.5 < ABS(dVar5)) {
      local_b0 = local_b0 + dVar5;
    }
    bVar1 = 0;
    if ((local_31 & 1) != 0) {
      bVar1 = local_61;
    }
    FUN_002a1f00(local_b0,param_2,param_3,param_4,local_28,bVar1 & 1);
    if (((local_31 & 1) != 0) && ((local_61 & 1) != 0)) {
      FUN_002b420c(local_28,local_30);
      FUN_002b4fe4();
    }
    _objc_storeStrong(&local_60,0);
    local_58 = 0;
  }
  else {
    local_58 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

