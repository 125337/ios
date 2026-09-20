// FUN_008a9688 @ 008a9688

void FUN_008a9688(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_98;
  bool local_59;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  uint local_3c;
  undefined *local_38 [3];
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cde10)(param_1,param_2);
  FUN_008abd94(local_18);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_voiceAutoTranslateEnabled_026a9938);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar2 = local_38[0],
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38[0],PTR_s_voiceAutoTranslateIgnoreReadEnab_026a9950),
     ((ulong)puVar2 & 1) == 0)) {
    local_3c = 1;
  }
  else {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewModel_0269d080);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070);
    local_59 = (uVar3 & 1) == 0;
    if (local_59) {
      local_98 = 0;
    }
    else {
      local_98 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_messageWrap_0269d070);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_98;
    }
    local_59 = !local_59;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_98;
    if (local_59) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    uVar3 = local_18;
    FUN_008ac254(local_18,local_50);
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      FUN_008aaf70(local_48,local_50);
    }
    local_3c = (uint)!bVar1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(local_38,0);
  return;
}

