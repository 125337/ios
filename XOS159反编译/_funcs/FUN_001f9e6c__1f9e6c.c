// FUN_001f9e6c @0x1f9e6c


void FUN_001f9e6c(double param_1,undefined8 param_2,ulong param_3)



{

  int iVar1;

  long lVar2;

  long lVar3;

  dispatch_time_t dVar4;

  undefined8 extraout_x1;

  double dVar5;

  undefined8 uVar6;

  undefined1 auVar7 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  int local_48;

  

  _objc_retain();

  auVar7 = FUN_00297fa0(param_2);

  uVar6 = auVar7._8_8_;

  if (auVar7._0_8_ == 0) goto LAB_001f9fb8;

  if (DAT_003ea9e8 == 0) {

    FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    lVar2 = DAT_003ea9e8;

    DAT_003ea9e8 = lVar3;

    _objc_release(lVar2);

    uVar6 = extraout_x1;

    if ((param_3 & 1) == 0) goto LAB_001f9edc;

LAB_001f9ef8:

    FUN_0029b4a0(DAT_003ea9e8,uVar6,param_2);

  }

  else {

    if ((param_3 & 1) != 0) goto LAB_001f9ef8;

LAB_001f9edc:

    if (ABS(param_1 + -9.0) < 0.01) goto LAB_001f9ef8;

    dVar5 = 7.0;

    if (7.0 <= param_1) {

      dVar5 = param_1;

    }

    uVar6 = NEON_fminnm(dVar5,0x402e000000000000);

    FUN_002993a0(uVar6,&_OBJC_CLASS___NSNumber);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a00a0(DAT_003ea9e8,auVar7._8_8_,auVar7._0_8_,param_2);

    _objc_release(auVar7._0_8_);

  }

  DAT_003eae60 = 1;

  iVar1 = DAT_003eae64 + 1;

  DAT_003eae64 = iVar1;

  dVar4 = _dispatch_time(0,200000000);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc0000000;

  local_58 = FUN_00215100;

  puStack_50 = &DAT_0038b570;

  local_48 = iVar1;

  _dispatch_after(dVar4,PTR___dispatch_main_q_00388740,&local_68);

LAB_001f9fb8:

  _objc_release(param_2);

  return;

}




