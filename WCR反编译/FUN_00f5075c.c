// FUN_00f5075c @ 00f5075c

void FUN_00f5075c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *local_50;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = (undefined *)(param_1 + 0x28);
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_50 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_30 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_50;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSVGr);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_isGIFImageData__026ac528,
               *(undefined8 *)(param_1 + 0x20));
    _NSLog(&cf__wcr__emoticon_oaaddtweak_pathdataLen__lugif__d);
    uVar3 = *(ulong *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_addRawImageDataViaWeChatTweakLog_026ac548,*(undefined8 *)(param_1 + 0x20)
               ,local_28);
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_mR1Y_);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

