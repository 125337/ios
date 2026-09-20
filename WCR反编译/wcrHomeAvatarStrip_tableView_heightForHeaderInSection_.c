// wcrHomeAvatarStrip_tableView:heightForHeaderInSection: @ 0034f548

/* WARNING: Removing unreachable block (ram,0x0034f6b8) */
/* WARNING: Removing unreachable block (ram,0x0034f6cc) */
/* WARNING: Removing unreachable block (ram,0x0034f6d0) */
/* WARNING: Removing unreachable block (ram,0x0034f6d8) */
/* WARNING: Removing unreachable block (ram,0x0034f6ec) */
/* WARNING: Removing unreachable block (ram,0x0034f6f0) */
/* WARNING: Removing unreachable block (ram,0x0034f6fc) */
/* WARNING: Removing unreachable block (ram,0x0034f704) */
/* WARNING: Removing unreachable block (ram,0x0034f604) */
/* WARNING: Removing unreachable block (ram,0x0034f620) */
/* WARNING: Removing unreachable block (ram,0x0034f624) */
/* WARNING: Removing unreachable block (ram,0x0034f62c) */
/* WARNING: Removing unreachable block (ram,0x0034f640) */
/* WARNING: Removing unreachable block (ram,0x0034f644) */
/* WARNING: Removing unreachable block (ram,0x0034f650) */
/* WARNING: Removing unreachable block (ram,0x0034f658) */
/* Function Stack Size: 0x20 bytes */

double __thiscall
WCRefineHomeAvatarStripHook::wcrHomeAvatarStrip_tableView_heightForHeaderInSection_
          (WCRefineHomeAvatarStripHook *this,ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  double in_d0;
  double dVar2;
  ID local_60;
  double local_58;
  long_long local_50;
  ID local_48;
  SEL local_40;
  ID local_38;
  double local_30;
  double local_20;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  local_50 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_wcrHomeAvatarStrip_tableView_hei_026a2350,local_48,param_4);
  IVar1 = local_38;
  local_58 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_wcrHomeAvatarStrip_findMainTable_026a23a8);
  _objc_retainAutoreleasedReturnValue();
  local_60 = IVar1;
  FUN_0034f800();
  if ((((IVar1 & 1) == 0) || (local_48 != local_60)) || (local_50 != 0)) {
    FUN_0034f9ec();
    local_30 = local_58;
  }
  else {
    local_20 = local_58;
    if (((ABS(local_58) == INFINITY) || (local_58 <= DAT_02323d38)) || (10000.0 < local_58)) {
      local_58 = 0.0;
    }
    dVar2 = local_58;
    FUN_0034f844(local_48);
    dVar2 = local_58 + dVar2;
    FUN_0034f9ec();
    local_30 = dVar2;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_48,0);
  return local_30;
}

