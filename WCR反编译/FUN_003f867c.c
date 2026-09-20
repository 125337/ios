// FUN_003f867c @ 003f867c

byte FUN_003f867c(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_40 [3];
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  FUN_003f4598();
  if ((param_1 & 1) == 0) {
    (*DAT_028ca558)(local_20,local_28);
    local_11 = (byte)local_20 & 1;
  }
  else {
    puVar2 = PTR_WCRefineInputBoxGestureSupport_026ce678;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineInputBoxGestureSupport_026ce678,
               PTR_s_hasInputTextInInputToolView__026a34f0,local_20);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        puVar2 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = PTR_WCRefineInputBoxGestureSupport_026ce678;
        if (((ulong)puVar3 & 1) != 0) {
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_normalizedAction__026a3438);
          _objc_retainAutoreleasedReturnValue();
          local_40[0] = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar2 = local_40[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40[0],PTR_s_isEqualToString__0269ccc8,_WCRInputBoxActionNone);
          bVar1 = ((ulong)puVar2 & 1) == 0;
          if (bVar1) {
            local_11 = 1;
          }
          _objc_storeStrong(local_40,0);
          if (bVar1) goto LAB_003f89dc;
        }
        (*DAT_028ca558)(local_20,local_28);
        local_11 = (byte)local_20 & 1;
      }
      else {
        local_11 = 1;
      }
    }
    else {
      (*DAT_028ca558)(local_20,local_28);
      local_11 = (byte)local_20 & 1;
    }
  }
LAB_003f89dc:
  return local_11 & 1;
}

