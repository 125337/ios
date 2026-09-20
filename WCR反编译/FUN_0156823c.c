// FUN_0156823c @ 0156823c

void FUN_0156823c(undefined8 param_1)

{
  ulong uVar1;
  ulong local_40;
  undefined *local_38;
  ulong local_30;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasSuffix__0269d018,&cf__chatroom_);
  if ((uVar1 & 1) == 0) {
    local_24 = 1;
  }
  else {
    FUN_0152b7ec();
    _objc_retainAutoreleasedReturnValue();
    local_38 = PTR_s_deleteContactLocal_listType__0269ffd8;
    local_30 = uVar1;
    if ((uVar1 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_respondsToSelector__026ca818,
                   PTR_s_deleteContactLocal_listType__0269ffd8), (uVar1 & 1) == 0)) {
      local_24 = 1;
    }
    else {
      uVar1 = local_20;
      FUN_01569474();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar1;
      if (uVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,local_38,uVar1,1);
      }
      local_24 = (uint)(uVar1 == 0);
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

