// _WCRAvatarIsTLProfileImageScene @ 00938f10

ulong _WCRAvatarIsTLProfileImageScene(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _WCRAvatarAncestorClassContains(local_18,&cf_TLProfileImageView,0xc);
  _objc_storeStrong(&local_18,0);
  return uVar1 & 0xffffffff;
}

