// WCRefineToDo_tableView:heightForHeaderInSection: @ 007f7788

/* WARNING: Removing unreachable block (ram,0x007f789c) */
/* WARNING: Removing unreachable block (ram,0x007f78b8) */
/* WARNING: Removing unreachable block (ram,0x007f78bc) */
/* WARNING: Removing unreachable block (ram,0x007f78c4) */
/* WARNING: Removing unreachable block (ram,0x007f78d8) */
/* WARNING: Removing unreachable block (ram,0x007f78dc) */
/* WARNING: Removing unreachable block (ram,0x007f78e8) */
/* WARNING: Removing unreachable block (ram,0x007f78f0) */
/* WARNING: Removing unreachable block (ram,0x007f7950) */
/* WARNING: Removing unreachable block (ram,0x007f7964) */
/* WARNING: Removing unreachable block (ram,0x007f7968) */
/* WARNING: Removing unreachable block (ram,0x007f7970) */
/* WARNING: Removing unreachable block (ram,0x007f7984) */
/* WARNING: Removing unreachable block (ram,0x007f7988) */
/* WARNING: Removing unreachable block (ram,0x007f7994) */
/* WARNING: Removing unreachable block (ram,0x007f799c) */
/* Function Stack Size: 0x20 bytes */

double __thiscall
WCRefineToDoHook::WCRefineToDo_tableView_heightForHeaderInSection_
          (WCRefineToDoHook *this,ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  double in_d0;
  double dVar5;
  ID local_60;
  double local_58;
  ulong local_50;
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
            (local_38,PTR_s_WCRefineToDo_tableView_heightFor_026a85b0,local_48,param_4);
  IVar2 = local_38;
  local_58 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
  _objc_retainAutoreleasedReturnValue();
  local_60 = IVar2;
  FUN_007f7ae4();
  bVar1 = (IVar2 & 1) != 0 && local_48 == local_60;
  uVar4 = (ulong)bVar1;
  if (bVar1) {
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_numberOfSections_026a2068);
    uVar4 = local_50;
    FUN_007f7b90();
    uVar4 = uVar4 - IVar2;
    if (uVar4 == 0) {
      if (((ABS(local_58) == INFINITY) || (local_58 <= DAT_02323d38)) || (10000.0 < local_58)) {
        local_58 = 0.0;
      }
      puVar3 = PTR_WCRefineConfig_026cdf58;
      dVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      FUN_007f5444();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      dVar5 = local_58 + dVar5;
      uVar4 = local_50;
      FUN_007f7bec();
      local_30 = dVar5;
      if ((uVar4 & 1) != 0) {
        _object_getClass(local_38);
        FUN_007f26ac();
      }
      goto LAB_007f7ab8;
    }
  }
  FUN_007f7bec(uVar4);
  local_30 = local_58;
LAB_007f7ab8:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_48,0);
  return local_30;
}

