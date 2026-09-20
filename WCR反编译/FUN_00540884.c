// FUN_00540884 @ 00540884

byte FUN_00540884(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_momentsDraftEnabled_026a4d60);
  if (((ulong)puVar2 & 1) == 0) {
    uVar1 = 0;
    FUN_0054433c();
    if ((uVar1 & 1) == 0) {
      uVar3 = local_20;
      (*DAT_028cb318)(local_20,local_28);
      local_11 = (byte)uVar3 & 1;
      goto LAB_00540974;
    }
  }
  local_11 = 0;
LAB_00540974:
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

