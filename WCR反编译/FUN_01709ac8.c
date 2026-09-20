// FUN_01709ac8 @ 01709ac8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01709ac8(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  dispatch_time_t dVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  code *local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  int local_1a4;
  undefined1 auStack_1a0 [48];
  undefined1 auStack_170 [64];
  double local_130;
  double local_128;
  double local_120;
  double dStack_118;
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [72];
  double local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  double local_78;
  undefined8 local_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  undefined8 local_40;
  double local_38;
  long local_30;
  long local_28;
  
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  local_30 = param_5;
  local_28 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_knob_026b3808);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar10 = 0x4000000000000000;
  dVar7 = param_3 / 2.0;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_3;
  local_40 = param_4;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_38 = dVar7;
  if ((*(byte *)(param_5 + 0x28) & 1) == 0) {
    dVar9 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_knobMargin_026b3778)
    ;
    dVar7 = dVar7 + dVar9;
    uVar1 = *(undefined8 *)(param_5 + 0x20);
    dVar8 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_knob_026b3808);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_130 = dVar8;
    local_128 = dVar9;
    FUN_01706f74();
    uVar10 = *(undefined8 *)(param_5 + 0x20);
    local_120 = dVar7;
    dStack_118 = dVar9;
    (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_knob_026b3808);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_120,dStack_118);
    (*(code *)PTR__objc_release_02578630)(uVar10);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02339860,DAT_02339858,DAT_02339850,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_5 + 0x20),PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar1 = *(undefined8 *)(param_5 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_offBorder_026b3848);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _CGAffineTransformMakeScale(0);
    uVar1 = *(undefined8 *)(param_5 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_cloud_026b3858);
    _objc_retainAutoreleasedReturnValue();
    _memcpy(auStack_1a0,auStack_170,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTransform__026caad0,auStack_1a0);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_frame_026ca640);
    dVar8 = param_3 - local_38;
    dVar9 = dVar8;
    local_88 = dVar7;
    local_80 = uVar10;
    local_78 = param_3;
    local_70 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_knobMargin_026b3778)
    ;
    dVar8 = dVar8 - dVar9;
    uVar1 = *(undefined8 *)(param_5 + 0x20);
    dVar7 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_knob_026b3808);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_98 = dVar7;
    local_90 = dVar9;
    FUN_01706f74();
    uVar10 = *(undefined8 *)(param_5 + 0x20);
    local_68 = dVar8;
    dStack_60 = dVar9;
    (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_knob_026b3808);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_68,dStack_60);
    (*(code *)PTR__objc_release_02578630)(uVar10);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02339868,DAT_023397f8,DAT_02323e40,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_5 + 0x20),PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar1 = *(undefined8 *)(param_5 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_offBorder_026b3848);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _memcpy(auStack_e0,PTR__CGAffineTransformIdentity_025782d8,0x30);
    uVar1 = *(undefined8 *)(param_5 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_cloud_026b3858);
    _objc_retainAutoreleasedReturnValue();
    _memcpy(auStack_110,auStack_e0,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTransform__026caad0,auStack_110);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  local_1a4 = 0;
  while( true ) {
    uVar6 = (ulong)local_1a4;
    uVar3 = *(ulong *)(param_5 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stars_026b3868);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (uVar4 <= uVar6) break;
    uVar10 = *(undefined8 *)(param_5 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_stars_026b3868);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1b0 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar10);
    (*(code *)PTR__objc_msgSend_02578628)
              ((double)((*(byte *)(param_5 + 0x28) & 1) == 0),local_1b0,PTR_s_setAlpha__026ca860);
    dVar5 = _dispatch_time(0,(long)(DAT_02323c68 * (double)(long)local_1a4 * 1000000000.0));
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_1b0;
    local_1d8 = PTR___NSConcreteStackBlock_02578660;
    local_1d0 = 0xc2000000;
    local_1cc = 0;
    local_1c8 = FUN_0170a270;
    local_1c0 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b8 = uVar1;
    _dispatch_after(dVar5,puVar2,&local_1d8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_1b8);
    _objc_storeStrong(&local_1b0,0);
    local_1a4 = local_1a4 + 1;
  }
  return;
}

