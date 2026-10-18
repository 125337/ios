// FUN_0008f408 @0x8f408


void FUN_0008f408(long param_1,undefined8 param_2,undefined8 param_3,long param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  dispatch_time_t dVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  undefined *local_118;

  undefined8 local_110;

  code *local_108;

  undefined *puStack_100;

  undefined8 local_f8;

  undefined8 local_f0;

  undefined8 local_e8;

  undefined8 local_e0;

  undefined1 local_d8;

  undefined *local_d0;

  undefined8 local_c8;

  code *local_c0;

  undefined *puStack_b8;

  undefined8 local_b0;

  undefined *local_a8;

  undefined8 local_a0;

  code *local_98;

  undefined *puStack_90;

  undefined8 local_88;

  undefined8 local_80;

  undefined8 local_78;

  cfstringStruct *pcStack_70;

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_2);

  auVar8 = FUN_00297fa0(param_2);

  if (auVar8._0_8_ == 0) {

    auVar9._8_8_ = 0;

    auVar9._0_8_ = auVar8._8_8_;

    auVar9 = auVar9 << 0x40;

  }

  else {

    FUN_00290ae0(&_OBJC_CLASS___NSJSONSerialization,auVar8._8_8_,param_2,0,0);

    auVar9 = _objc_retainAutoreleasedReturnValue();

  }

  lVar5 = auVar9._0_8_;

  FUN_00299540(lVar5,auVar9._8_8_,&cf_url);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_opt_class(&_OBJC_CLASS___NSString);

  auVar8 = _objc_opt_isKindOfClass(uVar1,uVar2);

  if ((auVar8._0_8_ & 1) == 0) {

    uVar2 = 0;

  }

  else {

    FUN_00299540(lVar5,auVar8._8_8_,&cf_url);

    uVar2 = _objc_retainAutoreleasedReturnValue();

  }

  _objc_release(uVar1);

  if (((param_4 == 0) && (lVar5 == 0)) && ((*(byte *)(param_1 + 0x40) & 1) != 0)) {

    auVar8 = FUN_00297fa0(param_2);

    uVar1 = auVar8._8_8_;

    if (auVar8._0_8_ != 0) {

      local_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

      pcStack_70 = &cf_F;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,uVar1,&pcStack_70,&local_78,1);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_00294de0(&_OBJC_CLASS___NSError,auVar8._8_8_,&cf_FineVoice,0xfffffffffffffffa,auVar8._0_8_

                  );

      uVar1 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar8._0_8_);

      local_a8 = PTR___NSConcreteStackBlock_003886f0;

      local_a0 = 0xc2000000;

      local_98 = FUN_0008f930;

      puStack_90 = &DAT_00389f30;

      uVar6 = *(undefined8 *)(param_1 + 0x30);

      _objc_retain(uVar6);

      local_88 = uVar1;

      local_80 = uVar6;

      _objc_retain(uVar1);

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_a8);

      _objc_release(local_88);

      _objc_release(local_80);

      goto LAB_0008f818;

    }

LAB_0008f5e4:

    FUN_00299540(lVar5,uVar1,&cf_status);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    lVar3 = FUN_002974a0();

    if (lVar3 == 3) {

      lVar3 = FUN_00297fa0(uVar2);

      _objc_release(uVar1);

      if (lVar3 != 0) {

        _objc_retain(uVar2);

        uVar1 = uVar2;

        if (*(char *)(param_1 + 0x40) == '\x01') {

          FUN_002a4560(uVar2,extraout_x1_00,&cf_https___dlaudio_fineshare_net,

                       &cf_https___ysfd_zyxzy_top);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar2);

          FUN_002a4560(uVar6,extraout_x1_01,&cf_http___dlaudio_fineshare_net,

                       &cf_https___ysfd_zyxzy_top);

          uVar1 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar6);

        }

        FUN_0008a9d4();

        auVar8 = _objc_retainAutoreleasedReturnValue();

        FUN_00290c20(&_OBJC_CLASS___NSURL,auVar8._8_8_,uVar1);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        local_d0 = PTR___NSConcreteStackBlock_003886f0;

        local_c8 = 0xc2000000;

        local_c0 = FUN_0008f950;

        puStack_b8 = &DAT_00389860;

        uVar7 = *(undefined8 *)(param_1 + 0x30);

        _objc_retain(uVar7);

        local_b0 = uVar7;

        FUN_00293f80(auVar8._0_8_,extraout_x1_02,uVar6,&local_d0);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_0029b980();

        _objc_release(uVar7);

        _objc_release(uVar6);

        _objc_release(auVar8._0_8_);

        _objc_release(local_b0);

        goto LAB_0008f818;

      }

    }

    else {

      _objc_release(uVar1);

    }

  }

  else {

    uVar1 = extraout_x1;

    if (param_4 == 0) goto LAB_0008f5e4;

  }

  dVar4 = _dispatch_time(0,500000000);

  _dispatch_get_global_queue(0x11,0);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  local_118 = PTR___NSConcreteStackBlock_003886f0;

  local_110 = 0xc2000000;

  local_108 = FUN_0008fcf8;

  puStack_100 = &DAT_0038a8f0;

  uVar1 = *(undefined8 *)(param_1 + 0x20);

  _objc_retain(uVar1);

  uVar7 = *(undefined8 *)(param_1 + 0x28);

  local_f8 = uVar1;

  _objc_retain(uVar7);

  uVar1 = *(undefined8 *)(param_1 + 0x30);

  local_e0 = *(undefined8 *)(param_1 + 0x38);

  local_d8 = *(undefined1 *)(param_1 + 0x40);

  local_f0 = uVar7;

  _objc_retain(uVar1);

  local_e8 = uVar1;

  _dispatch_after(dVar4,uVar6,&local_118);

  _objc_release(uVar6);

  _objc_release(local_e8);

  _objc_release(local_f0);

  uVar1 = local_f8;

LAB_0008f818:

  _objc_release(uVar1);

  _objc_release(uVar2);

  _objc_release(lVar5);

  _objc_release(param_2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




