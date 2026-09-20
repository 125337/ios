// FUN_007f14d0 @ 007f14d0

/* WARNING: Removing unreachable block (ram,0x007f16f4) */
/* WARNING: Removing unreachable block (ram,0x007f1708) */
/* WARNING: Removing unreachable block (ram,0x007f170c) */
/* WARNING: Removing unreachable block (ram,0x007f1714) */
/* WARNING: Removing unreachable block (ram,0x007f1728) */
/* WARNING: Removing unreachable block (ram,0x007f172c) */
/* WARNING: Removing unreachable block (ram,0x007f1738) */
/* WARNING: Removing unreachable block (ram,0x007f1740) */
/* WARNING: Removing unreachable block (ram,0x007f1640) */
/* WARNING: Removing unreachable block (ram,0x007f165c) */
/* WARNING: Removing unreachable block (ram,0x007f1660) */
/* WARNING: Removing unreachable block (ram,0x007f1668) */
/* WARNING: Removing unreachable block (ram,0x007f167c) */
/* WARNING: Removing unreachable block (ram,0x007f1680) */
/* WARNING: Removing unreachable block (ram,0x007f168c) */
/* WARNING: Removing unreachable block (ram,0x007f1694) */

double FUN_007f14d0(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_58;
  undefined4 local_4c;
  double local_48;
  undefined *local_40;
  ulong local_38;
  double local_30;
  double local_20;
  
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_3);
  if (local_40 == (undefined *)0x0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_40;
    local_40 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardTopSpacing_026a8958);
  uVar3 = local_38;
  puVar2 = PTR_WCRefineToDoHeaderContainerView_026ce990;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineToDoHeaderContainerView_026ce990,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_38;
  if ((uVar3 & 1) == 0) {
    local_30 = local_48;
    local_4c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_placesCardBeforeForeignHeader_026a85a0);
    if ((uVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_foreignHeaderHeight_026a2220);
      local_20 = param_1;
      if ((ABS(param_1) == INFINITY) || (param_1 <= 0.0)) {
        local_30 = local_48;
      }
      else {
        local_30 = local_48 + param_1;
      }
    }
    else {
      local_30 = local_48;
    }
    local_4c = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return local_30;
}

