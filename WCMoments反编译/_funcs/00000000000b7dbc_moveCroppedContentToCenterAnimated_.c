// moveCroppedContentToCenterAnimated: @0xb7dbc

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff00 : 0x000b8144 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x14 bytes */

void WCMTOCropView::moveCroppedContentToCenterAnimated_(ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  dispatch_time_t dVar5;
  double dVar6;
  double in_d1;
  double dVar7;
  double dVar8;
  double in_d2;
  double in_d3;
  double local_250;
  double local_248;
  double local_218;
  undefined8 local_200;
  undefined *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  code *local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  uint local_1c8;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  code *local_1a8;
  undefined *local_1a0;
  undefined8 *local_198;
  undefined1 auStack_190 [8];
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  long local_160;
  undefined1 auStack_158 [8];
  double local_150;
  double local_140;
  double local_138;
  double local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  char *local_108;
  double local_100;
  double dStack_f8;
  undefined8 local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_30 = param_2;
  local_28 = param_1;
  uVar3 = _objc_msgSend_internalLayoutDisabled(param_1);
  if ((uVar3 & 1) == 0) {
    local_58 = (double)_objc_msgSend_contentBounds(local_28,local_200);
    local_50 = in_d1;
    local_48 = in_d2;
    local_40 = in_d3;
    local_78 = (double)_objc_msgSend_cropBoxFrame(local_28,local_200);
    if ((1.1920928955078125e-07 <= in_d2) && (1.1920928955078125e-07 <= in_d3)) {
      dStack_70 = in_d1;
      local_68 = in_d2;
      dStack_60 = in_d3;
      dVar6 = (double)_CGRectGetWidth(local_58,local_50,local_48,local_40);
      local_88 = (double)_CGRectGetWidth(local_78,dStack_70,local_68,dStack_60);
      local_88 = dVar6 / local_88;
      dVar6 = (double)_CGRectGetHeight(local_58,local_50,local_48,local_40);
      local_90 = (double)_CGRectGetHeight(local_78,dStack_70,local_68,dStack_60);
      local_90 = dVar6 / local_90;
      local_218 = local_90;
      if (local_88 < local_90) {
        local_218 = local_88;
      }
      local_98 = local_218;
      local_80 = local_218;
      local_a8 = (double)_CGRectGetMidX(local_78,dStack_70,local_68,dStack_60);
      local_a0 = (double)_CGRectGetMidY(local_78,dStack_70,local_68,dStack_60);
      local_b8 = _CGRectGetMidX(local_58,local_50,local_48,local_40);
      local_b0 = _CGRectGetMidY(local_58,local_50,local_48,local_40);
      dVar6 = local_a8;
      local_68 = (double)(float)(int)(local_68 * local_80);
      dStack_60 = (double)(float)(int)(dStack_60 * local_80);
      local_78 = local_58 + (double)(float)(int)((local_48 - local_68) * 0.5);
      dVar7 = (double)(float)(int)((local_40 - dStack_60) * 0.5);
      dStack_70 = local_50 + dVar7;
      dStack_c8 = *(double *)(PTR__CGPointZero_00110850 + 8);
      local_d0 = *(double *)PTR__CGPointZero_00110850;
      _objc_msgSend_scrollView(local_28,local_200);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      local_e0 = (double)_objc_msgSend_contentOffset(uVar4,local_200);
      local_d0 = (dVar6 + local_e0) * local_80;
      dVar8 = local_80;
      local_d8 = dVar7;
      (*(code *)PTR__objc_release_00110458)(uVar4);
      dVar6 = local_a0;
      _objc_msgSend_scrollView(local_28,local_200);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      local_f0 = _objc_msgSend_contentOffset(uVar4,local_200);
      dStack_c8 = (dVar6 + dVar8) * local_80;
      local_e8 = dVar8;
      (*(code *)PTR__objc_release_00110458)(uVar4);
      local_118 = &local_120;
      local_120 = 0;
      local_110 = 0x10000000;
      local_10c = 0x30;
      local_108 = "";
      local_128 = -local_78;
      local_248 = local_128;
      if (local_128 < local_100) {
        local_248 = local_100;
      }
      local_138 = local_248;
      local_100 = local_248;
      local_140 = -dStack_70;
      local_250 = local_140;
      if (local_140 < dStack_f8) {
        local_250 = dStack_f8;
      }
      local_150 = local_250;
      dStack_f8 = local_250;
      _objc_initWeak(auStack_158,local_28);
      local_1b8 = PTR___NSConcreteStackBlock_001104f0;
      local_1b0 = 0xc2000000;
      local_1ac = 0;
      local_1a8 = ___52__WCMTOCropView_moveCroppedContentToCenterAnimated___block_invoke;
      local_1a0 = &___block_descriptor_88_e8_32r40w_e5_v8__0l;
      _objc_copyWeak(auStack_190,auStack_158);
      local_188 = local_80;
      dStack_178 = dStack_70;
      local_180 = local_78;
      dStack_168 = dStack_60;
      local_170 = local_68;
      local_198 = &local_120;
      local_160 = _objc_retainBlock();
      bVar1 = (local_31 & 1) != 0;
      if (bVar1) {
        _objc_msgSend_matchForegroundToBackground(local_28,local_200);
        dVar5 = _dispatch_time(0,10000000);
        puVar2 = PTR___dispatch_main_q_00110528;
        _objc_retainAutoreleaseReturnValue();
        uVar4 = _objc_retainAutoreleasedReturnValue(puVar2);
        local_1f0 = PTR___NSConcreteStackBlock_001104f0;
        local_1e8 = 0xc2000000;
        local_1e4 = 0;
        local_1e0 = ___52__WCMTOCropView_moveCroppedContentToCenterAnimated___block_invoke_22;
        local_1d8 = &___block_descriptor_40_e8_32bs_e5_v8__0l;
        local_1d0 = (*(code *)PTR__objc_retain_00110460)(local_160);
        _dispatch_after(dVar5,uVar4,&local_1f0);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        _objc_storeStrong(&local_1d0,0);
      }
      else {
        (**(code **)(local_160 + 0x10))();
      }
      local_1c8 = (uint)!bVar1;
      _objc_storeStrong(&local_160,0);
      _objc_destroyWeak(auStack_190);
      _objc_destroyWeak(auStack_158);
      __Block_object_dispose(&local_120,8);
    }
  }
  return;
}

