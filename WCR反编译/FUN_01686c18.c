// FUN_01686c18 @ 01686c18

void FUN_01686c18(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  ulong local_18;
  
  if ((0 < DAT_028e3d30) && (DAT_028e3d30 = DAT_028e3d30 + -1, DAT_028e3d30 < 1)) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar4 = (ulong)puVar3 & 0xffffffff;
    if (((ulong)puVar3 & 1) != 0) {
      FUN_01639cc4();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = &cf_restoreAfterScreenCapture;
      local_18 = uVar4;
      _NSSelectorFromString(&cf_restoreAfterScreenCapture);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_respondsToSelector__026ca818,pcVar5);
      uVar1 = local_18;
      if ((uVar4 & 1) != 0) {
        pcVar5 = &cf_restoreAfterScreenCapture;
        _NSSelectorFromString(&cf_restoreAfterScreenCapture);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,pcVar5);
      }
      _objc_storeStrong(&local_18,0);
    }
  }
  return;
}

