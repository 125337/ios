// FUN_0072f1e8 @ 0072f1e8

void FUN_0072f1e8(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  _objc_msgSend(local_18,PTR_s_setM_bForbidden__026a7ab0,1);
  uVar1 = local_18;
  _objc_msgSend(local_18,PTR_s_respondsToSelector__026ca818,PTR_s_UpdateMsgSource_0269d440);
  if ((uVar1 & 1) != 0) {
    _objc_msgSend(local_18,PTR_s_UpdateMsgSource_0269d440);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

