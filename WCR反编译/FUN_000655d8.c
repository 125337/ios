// FUN_000655d8 @ 000655d8

void FUN_000655d8(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_38 [3];
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar4 = local_18;
  FUN_00065878();
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
  if (uVar4 != 0) {
    uVar4 = local_38[0];
    FUN_0006171c();
    uVar3 = (uint)uVar4;
    if ((uVar4 & 1) == 0) {
      FUN_0005ed44();
      uVar4 = local_38[0];
      if ((uVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setOn__0269dc80,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_W8__uR);
      }
      else {
        uVar5 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isOn_0269d560);
        FUN_00065bf0(0,uVar4,uVar5 & 0xffffffff);
        puVar2 = PTR_WCRefineHelper_026ce000;
        uVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isOn_0269d560);
        pcVar1 = &cf__;
        if ((uVar4 & 1) == 0) {
          pcVar1 = &cf__sQRgZSO;
        }
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,pcVar1);
        FUN_00066150(local_18);
      }
      goto LAB_0006581c;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setOn__0269dc80,0);
LAB_0006581c:
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

