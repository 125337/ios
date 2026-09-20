// FUN_0059f804 @ 0059f804

byte FUN_0059f804(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  char *local_60;
  long local_58;
  undefined4 local_50;
  char *local_40;
  byte local_31;
  undefined8 local_30;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = "FavoritesUtil";
  local_31 = param_4;
  _objc_getClass();
  local_40 = pcVar1;
  if ((((local_20 == 0) || (local_28 == 0)) || (pcVar1 == (char *)0x0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_ConvertImg2WCUploadTask__026a56a8),
     ((ulong)pcVar1 & 1) == 0)) {
    local_11 = 0;
    local_50 = 1;
  }
  else {
    lVar2 = local_20;
    FUN_005bcec4();
    _objc_retainAutoreleasedReturnValue();
    local_60 = (char *)0x0;
    local_58 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 != 0) {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_ConvertImg2WCUploadTask__026a56a8,local_58);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_60;
      local_60 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if (local_60 == (char *)0x0) {
      if ((local_31 & 1) == 0) {
        local_11 = 0;
      }
      else {
        lVar2 = local_20;
        FUN_005bd74c(local_20,local_28,local_30);
        local_11 = (byte)lVar2 & 1;
      }
    }
    else {
      pcVar1 = local_60;
      FUN_005bd044(local_60,0,local_28,local_30,0);
      local_11 = (byte)pcVar1 & 1;
    }
    local_50 = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

