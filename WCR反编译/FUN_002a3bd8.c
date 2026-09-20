// FUN_002a3bd8 @ 002a3bd8

byte FUN_002a3bd8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_20;
  (*DAT_028c9618)(local_20,local_28,local_30);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((((ulong)puVar3 & 1) != 0) && ((uVar1 & 1) != 0)) {
    FUN_002b5ec8(&cf_MiniTaskPan_gestureShouldBegin);
  }
  local_11 = (byte)uVar1 & 1;
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

