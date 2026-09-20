// FUN_0037395c @ 0037395c

void FUN_0037395c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *local_60;
  cfstringStruct *local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  puVar1 = PTR_s_wcrGrouping_resetToNativeLayoutF_026a2a58;
  if ((local_18 != 0) &&
     (uVar2 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,
                PTR_s_wcrGrouping_resetToNativeLayoutF_026a2a58), (uVar2 & 1) != 0)) {
    if (local_20 == (cfstringStruct *)0x0) {
      local_60 = &cf_groupsDisabled;
    }
    else {
      local_60 = local_20;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,puVar1,local_60);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

