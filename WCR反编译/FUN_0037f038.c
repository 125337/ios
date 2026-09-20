// FUN_0037f038 @ 0037f038

uint FUN_0037f038(undefined8 param_1)

{
  ulong uVar1;
  uint local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_wcrGrouping_active_026a2a40);
  local_1c = 0;
  if ((uVar1 & 1) != 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_wcrGrouping_findMainTableView_026a2848);
    local_1c = 0;
    if ((uVar1 & 1) != 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,
                 PTR_s_wcrGrouping_snapshotForTableView_026a2a50);
      local_1c = (uint)uVar1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return local_1c & 1;
}

