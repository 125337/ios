// FUN_0045c3c4 @ 0045c3c4

byte FUN_0045c3c4(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 local_38;
  undefined8 local_20;
  
  puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  local_38 = 0;
  bVar1 = ((ulong)puVar2 & 1) != 0;
  if (bVar1) {
    local_20 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = (byte)puVar2;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_20);
  }
  return local_38 & 1;
}

