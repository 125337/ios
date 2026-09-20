// FUN_00366ae4 @ 00366ae4

bool FUN_00366ae4(undefined8 param_1)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_00396798(local_18,&cf_m_uUnReadCount);
  _objc_storeStrong(&local_18,0);
  return lVar1 != 0;
}

