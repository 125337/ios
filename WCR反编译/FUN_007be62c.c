// FUN_007be62c @ 007be62c

byte FUN_007be62c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int local_4c;
  undefined8 local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    if (DAT_028ccc80 == (code *)0x0) {
      local_4c = 0;
    }
    else {
      uVar3 = local_20;
      (*DAT_028ccc80)(local_20,param_2);
      local_4c = (int)uVar3;
    }
    local_11 = local_4c != 0;
  }
  else {
    local_11 = false;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

