// FUN_005ce130 @ 005ce130

void FUN_005ce130(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong local_68;
  ulong local_48;
  ulong local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_hostViewController_026a5b30);
  _objc_retainAutoreleasedReturnValue();
  local_68 = *(ulong *)(param_1 + 0x28);
  bVar1 = local_68 == 0;
  local_28 = lVar2;
  if (bVar1) {
    local_68 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_messageWrap_0269d070);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_68;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  lVar2 = local_28;
  uVar4 = local_30;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrN_1Y_ellW);
  }
  else if (local_28 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGr_N_e_clW);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_caption_026a5b40);
    _objc_retainAutoreleasedReturnValue();
    FUN_0059f804(uVar4,lVar2,uVar3,0);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((uVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrS1Y_Sb);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

