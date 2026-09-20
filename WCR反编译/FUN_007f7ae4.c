// FUN_007f7ae4 @ 007f7ae4

bool FUN_007f7ae4(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_toDoCardEnabled_026a3208);
  bVar1 = false;
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toDoCardCustomSectionOffset_026a2578);
    bVar1 = -1 < (long)puVar2;
  }
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

