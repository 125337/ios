// FUN_00588bf0 @ 00588bf0

/* WARNING: Restarted to delay deadcode elimination for space: ram */

byte FUN_00588bf0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_11;
  
  if ((DAT_028cb5c0 & 1) == 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    DAT_028cb600 = (byte)puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    DAT_028cb5c0 = 1;
  }
  local_11 = DAT_028cb600 & 1;
  return local_11;
}

