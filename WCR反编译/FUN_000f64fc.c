// FUN_000f64fc @ 000f64fc

byte FUN_000f64fc(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  pcVar1 = &cf_BaseMsgContentViewController;
  _NSClassFromString();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
  local_11 = (byte)uVar2;
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    FUN_000f65e8();
    local_11 = local_11 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

