// checkFollowStatusRecursively:maxAttempts:waitingAlert:defaults: @0x57168


/* Function Stack Size: 0x28 bytes */



void _0x2f19de29::checkFollowStatusRecursively_maxAttempts_waitingAlert_defaults_

               (ID param_1,SEL param_2,int param_3,int param_4,ID param_5,ID param_6)



{

  int iVar1;

  dispatch_time_t dVar2;

  ID IVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined *local_d8;

  undefined8 local_d0;

  code *local_c8;

  undefined *puStack_c0;

  ID local_b8;

  ID local_b0;

  ID local_a8;

  int local_a0;

  int iStack_9c;

  undefined *local_98;

  undefined8 local_90;

  code *local_88;

  undefined *puStack_80;

  ID local_78;

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  ID local_50;

  ID IStack_48;

  

  _objc_retain(param_5);

  _objc_retain(param_6);

  iVar1 = FUN_00297880(&objc::class_t::_0x2f19de29);

  if (iVar1 == 0) {

    if ((int)(param_4 - 1) <= (int)param_3) {

      local_98 = PTR___NSConcreteStackBlock_003886f0;

      local_90 = 0xc2000000;

      local_88 = FUN_00057478;

      puStack_80 = &DAT_00388e60;

      local_78 = param_1;

      FUN_00294700(param_5,extraout_x1,1,&local_98);

      goto LAB_000572d8;

    }

    dVar2 = _dispatch_time(0,3000000000);

    local_d8 = PTR___NSConcreteStackBlock_003886f0;

    local_d0 = 0xc2000000;

    local_c8 = FUN_00057540;

    puStack_c0 = &DAT_00389bb0;

    local_b8 = param_1;

    local_a0 = param_3;

    iStack_9c = param_4;

    _objc_retain(param_5);

    local_b0 = param_5;

    _objc_retain(param_6);

    local_a8 = param_6;

    _dispatch_after(dVar2,PTR___dispatch_main_q_00388740,&local_d8);

    _objc_release(local_a8);

    IVar3 = local_b0;

  }

  else {

    local_70 = PTR___NSConcreteStackBlock_003886f0;

    local_68 = 0xc2000000;

    local_60 = FUN_00057330;

    puStack_58 = &DAT_00388d50;

    _objc_retain(param_6);

    local_50 = param_6;

    IStack_48 = param_1;

    FUN_00294700(param_5,extraout_x1_00,1,&local_70);

    IVar3 = local_50;

  }

  _objc_release(IVar3);

LAB_000572d8:

  _objc_release(param_6);

  _objc_release(param_5);

  return;

}




