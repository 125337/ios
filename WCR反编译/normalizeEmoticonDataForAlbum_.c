// normalizeEmoticonDataForAlbum: @ 00f32de0

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonToolsHelper::normalizeEmoticonDataForAlbum_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  char *local_50;
  byte local_41;
  char *local_40;
  undefined4 local_34;
  char *local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = (char *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar1 == (char *)0x0) {
    local_18 = (char *)0x0;
    local_34 = 1;
  }
  else {
    pcVar1 = "EmoticonUtil";
    _objc_getClass();
    local_41 = 0;
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isWxAMData__026ac018);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isWxAMData__026ac018,local_30);
      local_41 = (byte)pcVar1;
    }
    if ((local_41 & 1) != 0) {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_createGifFromWxAMData__026ac020);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_createGifFromWxAMData__026ac020,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_50 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
        local_18 = local_50;
        if (pcVar1 == (char *)0x0) {
          local_18 = (char *)0x0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
        }
        local_34 = 1;
        _objc_storeStrong(&local_50,0);
        goto LAB_00f32f88;
      }
    }
    pcVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_34 = 1;
  }
LAB_00f32f88:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

