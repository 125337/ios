// FUN_00fc9f28 @ 00fc9f28

byte FUN_00fc9f28(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *local_20;
  bool local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_themeBoxAirDropDeliveryMode_026ad100);
  if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_themeBoxAirDropStockRepository_026ad108);
    local_11 = puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1) ||
               puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 3);
  }
  else {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_themeBoxAirDropRedeemProvider_026ad110);
    local_11 = puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1) ||
               puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

