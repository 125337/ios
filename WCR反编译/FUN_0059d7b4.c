// FUN_0059d7b4 @ 0059d7b4

void FUN_0059d7b4(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  char *local_d8;
  char *local_58;
  char *local_50;
  char *local_48;
  undefined4 local_40;
  char *local_30;
  undefined8 *local_28;
  ulong local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "FavoritesUtil";
  local_28 = param_2;
  _objc_getClass();
  local_30 = pcVar1;
  if ((((local_20 == 0) || (pcVar1 == (char *)0x0)) ||
      ((*(code *)PTR__objc_msgSend_02578628)
                 (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_ConvertMsgToFavItem__026a56a0),
      ((ulong)pcVar1 & 1) == 0)) || (uVar2 = local_20, FUN_0059cce0(), (uVar2 & 1) != 0)) {
    if (local_28 != (undefined8 *)0x0) {
      *local_28 = 0;
    }
    local_18 = (char *)0x0;
    local_40 = 1;
  }
  else {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_ConvertMsgToFavItem__026a56a0,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar1;
    FUN_0059d260(pcVar1,&cf_type);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_58 = local_48;
    if (local_28 != (undefined8 *)0x0) {
      *local_28 = pcVar3;
    }
    local_50 = pcVar3;
    (*(code *)PTR__objc_retain_02578638)();
    if (((local_50 != "") &&
        (pcVar1 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,
                   PTR_s_canConvertToNoteFavItem__026a56b0), ((ulong)pcVar1 & 1) != 0)) &&
       ((pcVar1 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_canConvertToNoteFavItem__026a56b0,local_48),
        ((ulong)pcVar1 & 1) != 0 &&
        (pcVar1 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,
                   PTR_s_ConvertFavItemToNoteFavItem__026a56b8), ((ulong)pcVar1 & 1) != 0)))) {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_ConvertFavItemToNoteFavItem__026a56b8,local_48);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_58;
      local_58 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_58;
    FUN_0059d260(local_58,&cf_type);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar3 == "") {
      local_d8 = local_58;
    }
    else {
      local_d8 = (char *)0x0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_d8;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_40 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

