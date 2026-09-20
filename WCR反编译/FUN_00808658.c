// FUN_00808658 @ 00808658

void FUN_00808658(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint local_3c;
  undefined *local_18;
  
  if ((DAT_028ccf99 & 1) == 0) {
    DAT_028ccf99 = 1;
    FUN_00808938();
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_touchTrailEnabled_026a8a90);
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_touchTrailOnlyWhenRecording_026a8a98);
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setTouchTrailDisplayState__026a8aa0,(uint)puVar1 & 1);
    }
    else {
      local_3c = 0;
      if (((ulong)puVar1 & 1) != 0) {
        local_3c = 0;
        FUN_00808e8c();
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setTouchTrailDisplayState__026a8aa0,local_3c & 1);
    }
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_touchTrailDisplayState_026a8aa8);
    DAT_028ccf9a = SUB81(puVar1,0);
    FUN_00808f58();
    _objc_storeStrong(&local_18,0);
  }
  else {
    FUN_00808938();
    FUN_00808cc0();
  }
  return;
}

