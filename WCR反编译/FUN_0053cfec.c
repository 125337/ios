// FUN_0053cfec @ 0053cfec

byte FUN_0053cfec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_momentsDraftEnabled_026a4d60);
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = local_20;
    (*DAT_028cb2b8)(local_20,local_28);
    local_11 = (byte)uVar2 & 1;
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

