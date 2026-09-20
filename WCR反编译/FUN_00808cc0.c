// FUN_00808cc0 @ 00808cc0

void FUN_00808cc0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte local_3c;
  byte local_2e;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_touchTrailEnabled_026a8a90);
  local_3c = (byte)puVar1;
  puVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_touchTrailOnlyWhenRecording_026a8a98);
  if (((ulong)puVar2 & 1) != 0) {
    local_3c = 0;
    if (((ulong)puVar1 & 1) != 0) {
      local_3c = 0;
      FUN_00808e8c();
    }
  }
  local_2e = local_3c & 1;
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_touchTrailDisplayState_026a8aa8);
  if ((uint)puVar1 != (uint)local_2e) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setTouchTrailDisplayState__026a8aa0,local_2e);
  }
  if ((local_2e != (DAT_028ccf9a & 1)) && (DAT_028ccf9a = local_2e, local_2e == 0)) {
    FUN_00809084();
  }
  _objc_storeStrong(&local_18,0);
  return;
}

