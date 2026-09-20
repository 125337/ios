// FUN_0054099c @ 0054099c

byte FUN_0054099c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_38;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_29 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_momentsDraftEnabled_026a4d60);
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = local_20;
    (*DAT_028cb320)(local_20,local_28,local_29 & 1);
    local_11 = (byte)uVar2;
  }
  else {
    uVar2 = local_20;
    (*DAT_028cb320)(local_20,local_28,local_29 & 1);
    local_11 = (byte)uVar2;
  }
  local_11 = local_11 & 1;
  _objc_storeStrong(&local_38,0);
  return local_11 & 1;
}

