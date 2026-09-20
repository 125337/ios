// FUN_0008ca1c @ 0008ca1c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double FUN_0008ca1c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,byte param_8,byte param_9,
                   undefined8 *param_10)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double local_340;
  double local_338;
  double local_310;
  double local_300;
  byte local_d9;
  ulong local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  cfstringStruct *local_88 [3];
  byte local_69;
  undefined8 *local_68;
  byte local_5a;
  byte local_59;
  long local_58;
  ulong local_50;
  ulong local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_69 = 0;
  local_5a = param_9;
  local_59 = param_8;
  local_68 = param_10;
  FUN_0008d3c0(local_58,local_50,&local_69);
  local_88[0] = &cf_head_pres;
  if ((local_69 & 1) == 0) {
    local_88[0] = &cf_head;
  }
  pcVar2 = local_88[0];
  local_40 = param_1;
  dStack_38 = param_2;
  local_30 = param_3;
  dStack_28 = param_4;
  (*(code *)PTR__objc_retain_02578638)();
  dStack_a8 = dStack_38;
  local_b0 = local_40;
  dStack_98 = dStack_28;
  local_a0 = local_30;
  dVar4 = local_40;
  dVar6 = dStack_38;
  dVar8 = local_30;
  dVar9 = dStack_28;
  FUN_0007e6b8();
  dVar7 = dVar6;
  dVar5 = dVar8;
  dVar10 = dVar9;
  if (((ulong)pcVar2 & 1) == 0) {
    if (local_58 == 0) {
      dStack_c8 = *(double *)(PTR__CGRectZero_025782f0 + 8);
      local_d0 = *(double *)PTR__CGRectZero_025782f0;
      dStack_b8 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
      local_c0 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
      dVar7 = dVar8;
      dVar5 = dVar6;
      dVar10 = dVar4;
      local_d0 = dVar4;
      dStack_c8 = dVar6;
      local_c0 = dVar8;
      dStack_b8 = dVar9;
    }
    dStack_38 = dStack_c8;
    local_40 = local_d0;
    dStack_28 = dStack_b8;
    local_30 = local_c0;
    dVar4 = local_c0;
    _objc_storeStrong(local_88,&cf_head_frame);
  }
  if (((((local_59 & 1) != 0) && (local_48 != 0)) && (local_50 != 0)) && (local_58 != 0)) {
    uVar3 = local_48;
    FUN_0008d7f0();
    _objc_retainAutoreleasedReturnValue();
    local_300 = dVar4;
    local_310 = dVar7;
    dVar6 = dVar5;
    dVar8 = dVar10;
    local_d8 = uVar3;
    if (uVar3 != 0) {
      local_d9 = 0;
      FUN_0008d3c0(uVar3,local_50,&local_d9);
      local_300 = dVar4;
      local_310 = dVar7;
      dVar6 = dVar5;
      dVar8 = dVar10;
      FUN_0007e6b8();
      if ((uVar3 & 1) != 0) {
        local_310 = local_40;
        FUN_0007e914(local_40,dStack_38,local_30,dStack_28);
        local_300 = dVar4;
        dVar8 = dVar10;
        FUN_0007e914(dVar4,dVar7,dVar5);
        local_310 = local_310 * DAT_02323cf0;
        bVar1 = false;
        dVar6 = DAT_02323cf0;
        if (local_310 < local_300) {
          local_300 = dVar5;
          if (dVar5 < dVar10) {
            local_300 = dVar10;
          }
          if (dStack_28 <= local_30) {
            local_310 = local_30;
          }
          else {
            local_310 = dStack_28;
          }
          local_310 = local_310 * DAT_02323ce8;
          bVar1 = local_300 <= local_310;
          dVar6 = DAT_02323ce8;
        }
        if (bVar1) {
          pcVar2 = &cf_border_pres;
          if ((local_d9 & 1) == 0) {
            pcVar2 = &cf_border;
          }
          local_40 = dVar4;
          dStack_38 = dVar7;
          local_30 = dVar5;
          dStack_28 = dVar10;
          _objc_storeStrong(local_88,pcVar2);
          local_300 = dVar5;
        }
      }
    }
    uVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
    if (((local_5a & 1) != 0) && (FUN_0007e6b8(local_300,local_310,dVar6,dVar8), (uVar3 & 1) != 0))
    {
      local_338 = local_30;
      if (local_30 < dStack_28) {
        local_338 = dStack_28;
      }
      local_340 = dVar6;
      if (dVar6 < dVar8) {
        local_340 = dVar8;
      }
      if (local_338 + 4.0 < local_340 && local_340 <= local_338 * DAT_02323ce0) {
        local_40 = local_300;
        dStack_38 = local_310;
        local_30 = dVar6;
        dStack_28 = dVar8;
        _objc_storeStrong(local_88,&cf_container);
      }
    }
    _objc_storeStrong(&local_d8,0);
  }
  pcVar2 = local_88[0];
  if (local_68 != (undefined8 *)0x0) {
    _objc_retainAutorelease();
    *local_68 = pcVar2;
  }
  _objc_storeStrong(local_88);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  return local_40;
}

