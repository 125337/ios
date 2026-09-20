// FUN_0156f8fc @ 0156f8fc

byte FUN_0156f8fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  _WCRPatSendBypassConfirmBegin();
  uVar1 = local_18;
  FUN_0156f5cc();
  _WCRPatSendBypassConfirmEnd();
  _objc_storeStrong(&local_18,0);
  return (byte)uVar1 & 1;
}

