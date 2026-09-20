// FUN_006e0d6c @ 006e0d6c

ulong FUN_006e0d6c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_60;
  ulong local_58;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = &cf_getSectionCount;
  _NSSelectorFromString();
  pcVar2 = &cf_getHelloCount_;
  _NSSelectorFromString();
  if ((local_20 == 0) ||
     (uVar3 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar1),
     (uVar3 & 1) == 0)) {
    local_18 = 0;
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar1);
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar2);
    local_18 = uVar3 & 0xffffffff;
    if ((uVar4 & 1) != 0) {
      local_58 = 0;
      for (local_60 = 0; local_60 < (uVar3 & 0xffffffff); local_60 = local_60 + 1) {
        uVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar2,local_60);
        local_58 = local_58 + (uVar4 & 0xffffffff);
      }
      local_18 = local_58;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

