// FUN_00f21ee4 @ 00f21ee4

byte FUN_00f21ee4(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *local_58;
  long local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_doNotDisturbFilterRule_026abdf0);
  puVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_doNotDisturbSelectedSessions_026abec0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    local_58 = *(undefined1 **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_58;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar3 = local_20;
  FUN_00f21dc0();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar3;
  if (local_30 == (undefined1 *)0x0) {
    local_11 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      local_11 = 0;
    }
    else {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsObject__0269cbb8,local_40);
      if (local_30 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        local_11 = ((byte)puVar2 ^ 1) & 1;
      }
      else {
        local_11 = (byte)puVar2 & 1;
      }
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

