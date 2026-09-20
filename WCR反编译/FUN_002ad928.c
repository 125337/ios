// FUN_002ad928 @ 002ad928

undefined1  [16] FUN_002ad928(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_floatingTabBarCustomLayoutEnable_026a19f0);
  if (((ulong)puVar2 & 1) == 0) {
    local_20 = *(undefined8 *)PTR__CGPointZero_025782e0;
    uStack_18 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingTabBarExtraButtonOffsetX_026a1a20);
    FUN_002adba4(param_1,0xc06f400000000000,0x406f400000000000);
    uVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingTabBarExtraButtonOffsetY_026a1a28);
    FUN_002adba4(uVar3,0xc054000000000000,0x4054000000000000);
    FUN_002ae1bc();
    local_20 = param_1;
    uStack_18 = uVar3;
  }
  _objc_storeStrong(&local_28,0);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}

