// wcrHomeAvatarStrip_tableView:heightForFooterInSection: @ 00350408

/* WARNING: Removing unreachable block (ram,0x003504ec) */
/* WARNING: Removing unreachable block (ram,0x00350508) */
/* WARNING: Removing unreachable block (ram,0x0035050c) */
/* WARNING: Removing unreachable block (ram,0x00350514) */
/* WARNING: Removing unreachable block (ram,0x00350528) */
/* WARNING: Removing unreachable block (ram,0x0035052c) */
/* WARNING: Removing unreachable block (ram,0x00350538) */
/* WARNING: Removing unreachable block (ram,0x00350540) */
/* WARNING: Removing unreachable block (ram,0x003505a0) */
/* WARNING: Removing unreachable block (ram,0x003505b4) */
/* WARNING: Removing unreachable block (ram,0x003505b8) */
/* WARNING: Removing unreachable block (ram,0x003505c0) */
/* WARNING: Removing unreachable block (ram,0x003505d4) */
/* WARNING: Removing unreachable block (ram,0x003505d8) */
/* WARNING: Removing unreachable block (ram,0x003505e4) */
/* WARNING: Removing unreachable block (ram,0x003505ec) */
/* Function Stack Size: 0x20 bytes */

double __thiscall
WCRefineHomeAvatarStripHook::wcrHomeAvatarStrip_tableView_heightForFooterInSection_
          (WCRefineHomeAvatarStripHook *this,ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  double dVar1;
  ID IVar2;
  ID IVar3;
  double in_d0;
  double dVar4;
  ID local_60;
  double local_58;
  ID local_50;
  ID local_48;
  SEL local_40;
  ID local_38;
  double local_30;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  local_50 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_wcrHomeAvatarStrip_tableView_hei_026a2370,local_48,param_4);
  IVar2 = local_38;
  local_58 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_wcrHomeAvatarStrip_findMainTable_026a23a8);
  _objc_retainAutoreleasedReturnValue();
  local_60 = IVar2;
  FUN_003506a0();
  if (((IVar2 & 1) != 0) && (local_48 == local_60)) {
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_wcrHomeAvatarStrip_originalSecti_026a23b8,local_48);
    IVar2 = local_50;
    FUN_00350774();
    if (IVar2 == IVar3) {
      if (((ABS(local_58) == INFINITY) || (local_58 <= DAT_02323d38)) || (10000.0 < local_58)) {
        local_58 = 0.0;
      }
      dVar1 = local_58;
      dVar4 = local_58;
      FUN_0034f844(local_48);
      local_30 = dVar1 + dVar4;
      goto LAB_00350674;
    }
  }
  local_30 = local_58;
LAB_00350674:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_48,0);
  return local_30;
}

