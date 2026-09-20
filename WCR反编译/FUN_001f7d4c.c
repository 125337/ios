// FUN_001f7d4c @ 001f7d4c

void FUN_001f7d4c(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong local_78;
  ulong local_48;
  ulong local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  *param_2 = 1;
  *param_3 = 1;
  uVar2 = local_18;
  local_28 = param_3;
  local_20 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    local_78 = 0;
  }
  else {
    local_78 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewModel_0269d080);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_78;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_isHeadPart_0269f0b0);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_isTailPart_026a03c0);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHeadPart_0269f0b0);
      *local_20 = (char)uVar2;
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isTailPart_026a03c0);
      *local_28 = (char)uVar2;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

