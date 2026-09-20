// FUN_001c9300 @ 001c9300

void FUN_001c9300(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 local_4c;
  
  uVar1 = param_2;
  (*DAT_028c8de0)(param_2,param_3);
  FUN_001cf94c();
  local_4c = 1;
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_4c = (uint)puVar3 ^ 1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if ((local_4c & 1) == 0) {
    FUN_001dac54();
    FUN_001d5a74(param_2);
    uVar1 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(param_2,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(param_2,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(param_2,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
    (*(code *)PTR__objc_msgSend_02578628)(param_2,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_2);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

