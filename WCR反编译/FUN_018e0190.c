// FUN_018e0190 @ 018e0190

ulong FUN_018e0190(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarActionKey);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_20,0);
  return uVar2 & 0xffffffff;
}

