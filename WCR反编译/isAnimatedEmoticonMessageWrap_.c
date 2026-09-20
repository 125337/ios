// isAnimatedEmoticonMessageWrap: @ 00f32484

/* Function Stack Size: 0x18 bytes */

bool WCRefineEmoticonToolsHelper::isAnimatedEmoticonMessageWrap_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  char *pcVar3;
  char *pcVar4;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_emoticonMD5FromMessageWrap__026aa7d0,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_emoticonDataForMD5_convertWxAMTo_026a3db0,local_38,0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
    if (IVar2 == 0) {
      local_11 = 0;
    }
    else {
      pcVar3 = "EmoticonUtil";
      _objc_getClass();
      puVar1 = PTR_s_isSingleFrameWithData__026abfe8;
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_isSingleFrameWithData__026abfe8);
      if (((ulong)pcVar4 & 1) == 0) {
        local_11 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar1,local_48);
        local_11 = ((byte)pcVar3 ^ 1) & 1;
      }
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

