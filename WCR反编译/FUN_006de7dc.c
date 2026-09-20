// FUN_006de7dc @ 006de7dc

byte FUN_006de7dc(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong local_28;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = "WebViewA8KeyLogicImpl";
  _objc_getClass();
  if ((pcVar1 == (char *)0x0) ||
     (uVar2 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isKindOfClass__0269cd68,pcVar1),
     (uVar2 & 1) == 0)) {
    pcVar1 = "GetA8KeyLogic";
    _objc_getClass();
    if ((pcVar1 == (char *)0x0) ||
       (uVar2 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isKindOfClass__0269cd68,pcVar1),
       (uVar2 & 1) == 0)) {
      local_11 = false;
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_codeType_026a6c68);
      if ((uVar2 & 1) == 0) {
        local_11 = false;
      }
      else {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_codeType_026a6c68);
        local_11 = (int)uVar2 == 0x13;
      }
    }
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_scene_026a6c60);
    if ((uVar2 & 1) == 0) {
      local_11 = false;
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_scene_026a6c60);
      local_11 = (int)uVar2 == 1 || (int)uVar2 == 2;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

