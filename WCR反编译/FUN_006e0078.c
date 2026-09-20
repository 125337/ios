// FUN_006e0078 @ 006e0078

ulong FUN_006e0078(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = &cf_m_uiScene;
  _NSSelectorFromString();
  if ((local_20 == 0) ||
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar1),
     (uVar2 & 1) == 0)) {
    local_18 = 0x7fffffffffffffff;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar1);
    local_18 = uVar2 & 0xffffffff;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

