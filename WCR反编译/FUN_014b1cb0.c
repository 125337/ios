// FUN_014b1cb0 @ 014b1cb0

void FUN_014b1cb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_68;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) || (local_20 == 0)) {
    local_24 = 1;
  }
  else {
    pcVar2 = &cf_MMContext;
    _NSClassFromString();
    pcVar3 = &cf_ForwardMessageMgr;
    local_30 = pcVar2;
    _NSClassFromString();
    local_38 = pcVar3;
    if ((local_30 == (cfstringStruct *)0x0) || (pcVar3 == (cfstringStruct *)0x0)) {
      local_24 = 1;
    }
    else {
      local_68 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_performSelector__026ca7b8,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_68;
      if (local_68 == (cfstringStruct *)0x0) {
        local_68 = (cfstringStruct *)0x0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,
                   local_38);
      }
      (*(code *)PTR__objc_retain_02578638)();
      puVar1 = PTR_s_forwardMessage_fromViewControlle_026af458;
      local_48 = local_68;
      if ((local_68 == (cfstringStruct *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_respondsToSelector__026ca818,
                     PTR_s_forwardMessage_fromViewControlle_026af458), ((ulong)local_68 & 1) == 0))
      {
        local_24 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,puVar1,local_18,local_20,4);
        local_24 = 0;
      }
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

