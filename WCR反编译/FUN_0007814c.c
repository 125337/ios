// FUN_0007814c @ 0007814c

void FUN_0007814c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_isEqualToString__0269ccc8,_WCRAvatarSceneChatPage);
  if ((uVar1 & 1) == 0) {
    FUN_000701ec(param_1);
  }
  else {
    FUN_00078210(param_1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

