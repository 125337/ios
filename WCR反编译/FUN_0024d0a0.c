// FUN_0024d0a0 @ 0024d0a0

ulong FUN_0024d0a0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined4 local_48;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_20;
  (*DAT_028c93b0)(local_20,local_28,local_30);
  puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar2 & 1) == 0) || (uVar1 = local_20, FUN_002592fc(), (uVar1 & 1) == 0)) {
    local_18 = local_38;
    local_48 = 1;
  }
  else {
    puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_selectedFilterGroupId_026a0fe8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_isEqualToString__0269ccc8,_WCREmoticonGroupAllId);
    if ((((ulong)puVar2 & 1) == 0) && (1 < (long)local_38)) {
      local_18 = 1;
    }
    else {
      local_18 = local_38;
    }
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

