// FUN_0008c524 @ 0008c524

double FUN_0008c524(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 *param_8,byte *param_9)

{
  byte bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
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
  byte *local_68;
  undefined8 *local_60;
  long local_58;
  long local_50;
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
  if (param_9 != (byte *)0x0) {
    *param_9 = 0;
  }
  local_69 = 0;
  local_68 = param_9;
  local_60 = param_8;
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
  dVar5 = dStack_38;
  dVar6 = local_30;
  dVar9 = dStack_28;
  FUN_0007e6b8();
  dVar7 = dVar5;
  dVar8 = dVar6;
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
      dVar7 = dVar6;
      dVar8 = dVar5;
      dVar10 = dVar4;
      local_d0 = dVar4;
      dStack_c8 = dVar5;
      local_c0 = dVar6;
      dStack_b8 = dVar9;
    }
    dStack_38 = dStack_c8;
    local_40 = local_d0;
    dStack_28 = dStack_b8;
    local_30 = local_c0;
    dVar4 = local_c0;
    _objc_storeStrong(local_88,&cf_head_frame);
  }
  if ((local_48 != 0) && (local_50 != 0)) {
    uVar3 = local_48;
    FUN_0008d7f0();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar3;
    if (uVar3 != 0) {
      local_d9 = 0;
      FUN_0008d3c0(uVar3,local_50,&local_d9);
      FUN_0007e6b8(dVar4,dVar7,dVar8,dVar10);
      if ((uVar3 & 1) != 0) {
        dVar5 = local_40;
        FUN_0007e914(local_40,dStack_38,local_30,dStack_28);
        dVar6 = dVar4;
        FUN_0007e914(dVar4,dVar7,dVar8,dVar10);
        if (dVar5 * DAT_02323cd8 < dVar6) {
          pcVar2 = &cf_border_pres;
          if ((local_d9 & 1) == 0) {
            pcVar2 = &cf_border;
          }
          local_40 = dVar4;
          dStack_38 = dVar7;
          local_30 = dVar8;
          dStack_28 = dVar10;
          _objc_storeStrong(local_88,pcVar2);
          bVar1 = 1;
          if ((local_69 & 1) == 0) {
            bVar1 = local_d9;
          }
          local_69 = bVar1 & 1;
        }
      }
    }
    _objc_storeStrong(&local_d8,0);
  }
  pcVar2 = local_88[0];
  if (local_60 != (undefined8 *)0x0) {
    _objc_retainAutorelease();
    *local_60 = pcVar2;
  }
  if (local_68 != (byte *)0x0) {
    *local_68 = local_69 & 1;
  }
  _objc_storeStrong(local_88);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  return local_40;
}

