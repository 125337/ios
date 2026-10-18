// FUN_002608dc @0x2608dc


void FUN_002608dc(long param_1)



{

  cfstringStruct *pcVar1;

  undefined *puVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  double dVar6;

  undefined1 auVar7 [16];

  undefined *local_100;

  undefined8 local_f8;

  code *local_f0;

  undefined *puStack_e8;

  undefined8 local_e0;

  undefined8 local_d8;

  undefined8 uStack_d0;

  undefined1 local_c8;

  undefined *local_c0;

  undefined8 local_b8;

  code *local_b0;

  undefined *puStack_a8;

  undefined8 local_a0;

  undefined8 uStack_98;

  undefined1 local_90;

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  undefined8 local_68;

  

  dVar6 = (double)FUN_0024e9d0(*(undefined8 *)(param_1 + 0x20));

  FUN_00299540(*(undefined8 *)(param_1 + 0x20),extraout_x1,&cf_overflowTop);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar4 = _objc_opt_respondsToSelector(uVar3,"doubleValue");

  _objc_release(uVar3);

  pcVar1 = &cf___1f;

  if (ABS(dVar6 - (double)(long)dVar6) < 0.05) {

    pcVar1 = &cf___0f;

  }

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,pcVar1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf_S_MR_Ndk;

  if ((uVar4 & 1) == 0) {

    pcVar1 = &cf_S_MRNxhb<P0OX[TO:Ndk;

  }

  _objc_retain(pcVar1);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_01,&cf_H,pcVar1,1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  puVar2 = PTR___NSConcreteStackBlock_003886f0;

  local_88 = PTR___NSConcreteStackBlock_003886f0;

  local_80 = 0xc2000000;

  local_78 = FUN_00260bf8;

  puStack_70 = &DAT_00388f20;

  _objc_retain(uVar3);

  local_68 = uVar3;

  FUN_00291400(uVar5,extraout_x1_02,&local_88);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_Sm,1,0);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar5,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  local_c0 = puVar2;

  local_b8 = 0xc2000000;

  local_b0 = FUN_00260c6c;

  puStack_a8 = &DAT_0038fd88;

  local_90 = *(undefined1 *)(param_1 + 0x38);

  local_a0 = *(undefined8 *)(param_1 + 0x28);

  uStack_98 = *(undefined8 *)(param_1 + 0x30);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,&cf_b_YNx,0,&local_c0);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar5,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  local_100 = puVar2;

  local_f8 = 0xc2000000;

  local_f0 = FUN_00260de4;

  puStack_e8 = &DAT_0038fdb8;

  _objc_retain(uVar5);

  local_d8 = *(undefined8 *)(param_1 + 0x28);

  uStack_d0 = *(undefined8 *)(param_1 + 0x30);

  local_c8 = *(undefined1 *)(param_1 + 0x38);

  local_e0 = uVar5;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_05,&cf_OX_,0,&local_100);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar5,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_0029a500(*(undefined8 *)(param_1 + 0x28),extraout_x1_06,uVar5,1,0);

  _objc_release(local_e0);

  _objc_release(local_68);

  _objc_release(uVar5);

  _objc_release(pcVar1);

  _objc_release(uVar3);

  return;

}




