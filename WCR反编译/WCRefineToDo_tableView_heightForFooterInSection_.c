// WCRefineToDo_tableView:heightForFooterInSection: @ 007f87a4

/* WARNING: Removing unreachable block (ram,0x007f8890) */
/* WARNING: Removing unreachable block (ram,0x007f88ac) */
/* WARNING: Removing unreachable block (ram,0x007f88b0) */
/* WARNING: Removing unreachable block (ram,0x007f88b8) */
/* WARNING: Removing unreachable block (ram,0x007f88cc) */
/* WARNING: Removing unreachable block (ram,0x007f88d0) */
/* WARNING: Removing unreachable block (ram,0x007f88dc) */
/* WARNING: Removing unreachable block (ram,0x007f88e4) */
/* WARNING: Removing unreachable block (ram,0x007f8944) */
/* WARNING: Removing unreachable block (ram,0x007f8958) */
/* WARNING: Removing unreachable block (ram,0x007f895c) */
/* WARNING: Removing unreachable block (ram,0x007f8964) */
/* WARNING: Removing unreachable block (ram,0x007f8978) */
/* WARNING: Removing unreachable block (ram,0x007f897c) */
/* WARNING: Removing unreachable block (ram,0x007f8988) */
/* WARNING: Removing unreachable block (ram,0x007f8990) */
/* Function Stack Size: 0x20 bytes */

double __thiscall
WCRefineToDoHook::WCRefineToDo_tableView_heightForFooterInSection_
          (WCRefineToDoHook *this,ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  double dVar1;
  ID IVar2;
  undefined *puVar3;
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
            (local_38,PTR_s_WCRefineToDo_tableView_heightFor_026a8620,local_48,param_4);
  IVar2 = local_38;
  local_58 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
  _objc_retainAutoreleasedReturnValue();
  local_60 = IVar2;
  FUN_007f8a9c();
  if (((IVar2 & 1) != 0) && (local_48 == local_60)) {
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_numberOfSections_026a2068);
    FUN_007f8b48();
    if (local_50 == IVar2) {
      if (((ABS(local_58) == INFINITY) || (local_58 <= DAT_02323d38)) || (10000.0 < local_58)) {
        local_58 = 0.0;
      }
      dVar1 = local_58;
      puVar3 = PTR_WCRefineConfig_026cdf58;
      dVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      FUN_007f5444();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_30 = dVar1 + dVar4;
      goto LAB_007f8a70;
    }
  }
  local_30 = local_58;
LAB_007f8a70:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_48,0);
  return local_30;
}

