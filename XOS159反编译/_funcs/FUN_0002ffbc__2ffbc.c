// FUN_0002ffbc @0x2ffbc


/* WARNING: Removing unreachable block (ram,0x00030108) */



void FUN_0002ffbc(long param_1,undefined8 param_2)



{

  cfstringStruct *pcVar1;

  ulong uVar2;

  ulong extraout_x1;

  cfstringStruct *pcVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  undefined *local_98;

  undefined8 local_90;

  code *local_88;

  undefined *puStack_80;

  undefined8 *local_78;

  undefined8 local_70;

  undefined8 *local_68;

  undefined8 local_60;

  code *local_58;

  code *pcStack_50;

  undefined8 local_48;

  

  _objc_retain(param_2);

  local_70 = 0;

  local_60 = 0x3032000000;

  local_58 = FUN_00030178;

  pcStack_50 = FUN_00030188;

  local_48 = 0;

  local_68 = &local_70;

  FUN_00004498();

  local_98 = PTR___NSConcreteStackBlock_003886f0;

  local_90 = 0xc2000000;

  local_88 = FUN_00030190;

  puStack_80 = &DAT_003892b0;

  local_78 = &local_70;

  uVar2 = FUN_000042e4(&local_98);

  FUN_000044e0();

  FUN_0029af80(*(undefined8 *)(param_1 + 0x20));

  auVar5._8_8_ = 0;

  auVar5._0_8_ = extraout_x1;

  auVar5 = auVar5 << 0x40;

  uVar4 = *(undefined8 *)(param_1 + 0x20);

  pcVar1 = &cf__nzzMn_;

  if ((int)uVar2 == 0) {

    pcVar1 = &cf_nzz1Y_;

  }

  if ((uVar2 & 1) == 0) {

    FUN_00298400(local_68[5]);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    pcVar3 = &cf_elnzzMn_;

    if (auVar5._0_8_ != (cfstringStruct *)0x0) {

      pcVar3 = auVar5._0_8_;

    }

  }

  else {

    pcVar3 = &cf_cNn__b_Y_N<P_T_OT[hQuHe0;

  }

  FUN_0029a3e0(uVar4,auVar5._8_8_,pcVar1,pcVar3,uVar2);

  if ((uVar2 & 1) == 0) {

    _objc_release(auVar5._0_8_);

  }

  __Block_object_dispose(&local_70,8);

  _objc_release(local_48);

  _objc_release(param_2);

  return;

}




