// FUN_01686ac4 @ 01686ac4

void FUN_01686ac4(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  cfstringStruct *pcVar5;
  ulong local_18;
  
  lVar2 = DAT_028e3d30;
  lVar1 = DAT_028e3d30 + 1;
  bVar4 = DAT_028e3d30 == 0;
  DAT_028e3d30 = lVar1;
  if (bVar4 || lVar1 < 1) {
    FUN_01639cc4(lVar2);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = &cf_prepareForScreenCapture;
    local_18 = param_1;
    _NSSelectorFromString(&cf_prepareForScreenCapture);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_respondsToSelector__026ca818,pcVar5);
    uVar3 = local_18;
    if ((param_1 & 1) != 0) {
      pcVar5 = &cf_prepareForScreenCapture;
      _NSSelectorFromString(&cf_prepareForScreenCapture);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar5);
    }
    _objc_storeStrong(&local_18,0);
  }
  return;
}

