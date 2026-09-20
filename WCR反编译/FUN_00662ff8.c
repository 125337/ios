// FUN_00662ff8 @ 00662ff8

void FUN_00662ff8(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 != 0) && (uVar1 = local_18, FUN_0066641c(), (uVar1 & 1) == 0)) {
    uVar1 = local_18;
    FUN_006564b8(local_18,"m_uGreenLabelType");
    if (((int)uVar1 == 1) || ((int)uVar1 == 10)) {
      FUN_0066658c(local_18,PTR_s_setM_uGreenLabelType__026a6338,0);
      FUN_006666d8(local_18,"m_uGreenLabelType",0);
      FUN_006653a8(&cf_6eV_O_);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

