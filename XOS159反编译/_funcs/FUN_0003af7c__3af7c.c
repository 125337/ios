// FUN_0003af7c @0x3af7c


void FUN_0003af7c(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  ulong uVar5;

  dispatch_time_t dVar6;

  undefined8 extraout_x1;

  float fVar7;

  float fVar8;

  undefined1 auVar9 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  fVar7 = (float)FUN_00295480(uVar3);

  fVar8 = 0.0;

  if (0.0 < fVar7) {

    fVar8 = fVar7;

  }

  fVar7 = 40.0;

  if (fVar8 <= 40.0) {

    fVar7 = fVar8;

  }

  FUN_0029e500(fVar7,*(undefined8 *)(param_1 + 0x28),extraout_x1,&cf_mesMsgMergeGroupGapReduce);

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_002990e0(*(undefined8 *)(param_1 + 0x30));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar9._0_8_,auVar9._8_8_,0x3ea);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar9._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (lVar4 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    uVar5 = _objc_opt_isKindOfClass(lVar4,uVar1);

    if ((uVar5 & 1) != 0) {

      FUN_0029b140(lVar4);

    }

  }

  dVar6 = _dispatch_time(0,300000000);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_0003b18c;

  puStack_50 = &DAT_00388e60;

  local_48 = *(undefined8 *)(param_1 + 0x30);

  _dispatch_after(dVar6,PTR___dispatch_main_q_00388740,&local_68);

  _objc_release(lVar4);

  _objc_release(uVar3);

  return;

}




