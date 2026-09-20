// FUN_000f6980 @ 000f6980

void FUN_000f6980(void)

{
  byte bVar1;
  undefined *puVar2;
  
  puVar2 = PTR_WCRefineAuth_026ce2c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAuth_026ce2c8,PTR_s_hasResolvedGroupAuthorizationFor_0269eb80);
  if (((ulong)puVar2 & 1) == 0) {
    DAT_028c83b8 = 1;
  }
  else {
    bVar1 = 0;
    FUN_01138c30(&cf_chat_position_guard,1);
    DAT_028c83b8 = bVar1 & 1;
  }
  return;
}

