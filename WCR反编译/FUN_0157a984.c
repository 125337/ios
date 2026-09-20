// FUN_0157a984 @ 0157a984

void FUN_0157a984(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined *local_30;
  uint local_24;
  undefined *local_20;
  undefined *local_18;
  
  puVar1 = &DAT_028e38e8;
  _objc_loadWeakRetained();
  local_20 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070);
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_messageWrap_0269d070);
      _objc_retainAutoreleasedReturnValue();
      local_30 = puVar1;
      if (puVar1 != (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = puVar1;
      }
      local_24 = (uint)(puVar1 != (undefined *)0x0);
      _objc_storeStrong(&local_30,0);
      if (local_24 != 0) goto LAB_0157ab98;
    }
    local_38 = (undefined *)0x0;
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080);
    if (((ulong)puVar1 & 1) != 0) {
      puVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewModel_0269d080);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_38;
      local_38 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    if (local_38 == (undefined *)0x0) {
      puVar2 = local_20;
      FUN_01566074(local_20,&cf_viewModel);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_38;
      local_38 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_38;
      FUN_01566074(local_38,&cf_messageWrap);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar1;
    }
    else {
      puVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_messageWrap_0269d070);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar1;
    }
    local_24 = 1;
    _objc_storeStrong(&local_38,0);
  }
LAB_0157ab98:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

