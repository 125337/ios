// FUN_020bd94c @ 020bd94c

uint FUN_020bd94c(undefined8 param_1)

{
  ulong uVar1;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_020bdc24();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_isEqualToString__0269ccc8,&cf___wcr_af_my_page__);
  local_24 = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_isEqualToString__0269ccc8,&cf___wcr_af_plugin_hub__);
    local_24 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_isEqualToString__0269ccc8,&cf___wcr_af_plugin_menu__);
      local_24 = (uint)uVar1;
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_24 & 1;
}

