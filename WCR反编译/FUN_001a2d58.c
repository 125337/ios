// FUN_001a2d58 @ 001a2d58

byte FUN_001a2d58(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  byte local_4a;
  byte local_49;
  ulong local_48;
  long local_40;
  undefined4 local_38;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = local_28 == 0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0 || bVar1) {
    local_11 = 0;
  }
  else {
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_section_0269e988);
    uVar5 = local_20;
    local_40 = lVar4;
    FUN_0018f6dc(local_20,lVar4,0);
    local_48 = uVar5;
    if ((((long)uVar5 < 1) ||
        (lVar4 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_row_0269e210),
        lVar4 != 0)) || (uVar5 = local_20, FUN_00190294(local_20,local_40), (uVar5 & 1) != 0)) {
      local_11 = 0;
    }
    else {
      local_49 = 0;
      uVar5 = local_20;
      FUN_00195f84(local_20,local_40,&local_49);
      local_4a = (byte)uVar5;
      if ((local_49 & 1) == 0) {
        uVar5 = local_20;
        FUN_00190028(local_20,local_40,local_48);
        local_4a = (byte)uVar5;
        FUN_0018fe24(local_20,local_40,(uint)uVar5 & 1);
      }
      local_11 = local_4a & 1;
    }
  }
  local_38 = 1;
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

