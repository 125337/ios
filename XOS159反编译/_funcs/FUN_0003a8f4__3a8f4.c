// FUN_0003a8f4 @0x3a8f4


void FUN_0003a8f4(long param_1)



{

  float fVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  ulong uVar6;

  dispatch_time_t dVar7;

  undefined8 extraout_x1;

  float fVar8;

  float fVar9;

  undefined1 auVar10 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  _objc_release(uVar2);

  fVar8 = (float)FUN_00295480(uVar4);

  fVar9 = 60.0;

  if (fVar8 <= 60.0) {

    fVar9 = fVar8;

  }

  fVar1 = -60.0;

  if (-60.0 <= fVar8) {

    fVar1 = fVar9;

  }

  FUN_0029e500(fVar1,*(undefined8 *)(param_1 + 0x28),extraout_x1,*(undefined8 *)(param_1 + 0x30));

  FUN_002a4a40(*(undefined8 *)(param_1 + 0x28));

  FUN_002990e0(*(undefined8 *)(param_1 + 0x38));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5520();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220();

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002a62a0(auVar10._0_8_,auVar10._8_8_,0x3ea);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar10._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar2);

  if (lVar5 != 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    uVar6 = _objc_opt_isKindOfClass(lVar5,uVar2);

    if ((uVar6 & 1) != 0) {

      FUN_0029b140(lVar5);

    }

  }

  dVar7 = _dispatch_time(0,300000000);

  local_68 = PTR___NSConcreteStackBlock_003886f0;

  local_60 = 0xc2000000;

  local_58 = FUN_0003ab00;

  puStack_50 = &DAT_00388e60;

  local_48 = *(undefined8 *)(param_1 + 0x38);

  _dispatch_after(dVar7,PTR___dispatch_main_q_00388740,&local_68);

  _objc_release(lVar5);

  _objc_release(uVar4);

  return;

}




