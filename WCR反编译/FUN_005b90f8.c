// FUN_005b90f8 @ 005b90f8

void FUN_005b90f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_3c = 0;
  if (((ulong)puVar2 & 1) != 0) {
    uVar3 = param_1;
    FUN_005d763c();
    local_3c = (uint)uVar3;
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_3c & 1) == 0) {
    (*DAT_028cb728)(param_1,param_2);
  }
  return;
}

