// FUN_01f55da4 @ 01f55da4

void FUN_01f55da4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong local_48;
  long local_40 [3];
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_valueForKey__0269d128,&cf_viewModel);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_onClickPlayRate_026c9440);
    if ((uVar1 & 1) != 0) {
      DAT_028e48c0 = 1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onClickPlayRate_026c9440);
      DAT_028e48c0 = 0;
      lVar2 = *(long *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_valueForKey__0269d128,&cf_m_playRateButton);
      _objc_retainAutoreleasedReturnValue();
      local_40[0] = lVar2;
      if (lVar2 != 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_playRateTitle_026c9448);
        if ((uVar1 & 1) != 0) {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_playRateTitle_026c9448);
          _objc_retainAutoreleasedReturnValue();
          local_48 = uVar1;
          if (uVar1 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40[0],PTR_s_setTitle_forState__026caab8,uVar1,0);
          }
          _objc_storeStrong(&local_48,0);
        }
      }
      _objc_storeStrong(local_40,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

