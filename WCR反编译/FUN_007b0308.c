// FUN_007b0308 @ 007b0308

bool FUN_007b0308(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  byte local_3c;
  
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_3c = (byte)puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  if (((ulong)puVar4 & 1) == 0) {
    local_3c = 0;
  }
  else {
    _WCRefineTelegramGroupingGateAllowed();
  }
  bVar3 = 0;
  if (((ulong)puVar4 & 1) != 0) {
    bVar3 = local_3c & 1;
  }
  bVar2 = DAT_028ccc68 & 1;
  bVar1 = DAT_028ccc69 & 1;
  DAT_028ccc69 = bVar3;
  DAT_028ccc68 = 1;
  return bVar2 != 0 && bVar3 != bVar1;
}

