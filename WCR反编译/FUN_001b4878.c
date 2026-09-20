// FUN_001b4878 @ 001b4878

ulong FUN_001b4878(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_s_editingStyle_0269ff60;
  if (local_20 == 0) {
    local_18 = 0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_editingStyle_0269ff60);
    if ((uVar2 & 1) == 0) {
      local_18 = 0;
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1);
      local_18 = uVar2;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

