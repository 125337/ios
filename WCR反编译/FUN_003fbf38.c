// FUN_003fbf38 @ 003fbf38

byte FUN_003fbf38(long param_1)

{
  undefined *puVar1;
  undefined1 local_38;
  undefined8 local_20;
  
  FUN_003fc358();
  local_38 = 0;
  if (param_1 == 1) {
    local_20 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = (byte)puVar1;
  }
  if (param_1 == 1) {
    (*(code *)PTR__objc_release_02578630)(local_20);
  }
  return local_38 & 1;
}

