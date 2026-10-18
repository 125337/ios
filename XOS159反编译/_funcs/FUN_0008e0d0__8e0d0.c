// FUN_0008e0d0 @0x8e0d0


void FUN_0008e0d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined *puVar4;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  undefined *local_118;

  undefined8 local_110;

  code *local_108;

  undefined *puStack_100;

  long local_f8;

  undefined8 local_f0;

  undefined *local_e8;

  undefined8 local_e0;

  code *local_d8;

  undefined *puStack_d0;

  undefined *local_c8;

  undefined8 local_c0;

  undefined *local_b8;

  undefined8 local_b0;

  code *local_a8;

  undefined *puStack_a0;

  long local_98;

  undefined8 uStack_90;

  undefined8 local_88;

  cfstringStruct *pcStack_80;

  undefined8 local_78;

  cfstringStruct *pcStack_70;

  long local_68;

  undefined **ppuVar5;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_2);

  _objc_retain(param_3);

  _objc_retain(param_4);

  uVar1 = _objc_opt_class(&_OBJC_CLASS___NSHTTPURLResponse);

  auVar6 = _objc_opt_isKindOfClass(param_3,uVar1);

  if ((auVar6._0_8_ & 1) == 0) {

    if (param_4 == 0) {

      auVar7._8_8_ = 0;

      auVar7._0_8_ = auVar6._8_8_;

      auVar6 = auVar7 << 0x40;

      goto LAB_0008e2a0;

    }

LAB_0008e290:

    _objc_retain(param_4);

    lVar3 = param_4;

LAB_0008e310:

    local_b8 = PTR___NSConcreteStackBlock_003886f0;

    local_b0 = 0xc2000000;

    local_a8 = FUN_0008e55c;

    puStack_a0 = &DAT_00389f30;

    ppuVar5 = &local_b8;

    uVar1 = *(undefined8 *)(param_1 + 0x20);

    _objc_retain(uVar1);

    local_98 = lVar3;

    uStack_90 = uVar1;

    _objc_retain(lVar3);

    _dispatch_async(PTR___dispatch_main_q_00388740,&local_b8);

    _objc_release(local_98);

  }

  else {

    auVar6 = FUN_002a4280(param_3);

    lVar3 = auVar6._0_8_;

    if ((param_4 != 0) || (lVar3 - 300U < 0xffffffffffffff9c)) {

      if (param_4 != 0) goto LAB_0008e290;

LAB_0008e2a0:

      local_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

      pcStack_70 = &cf_F;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar6._8_8_,&pcStack_70,&local_78,1);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_00294de0(&_OBJC_CLASS___NSError,auVar7._8_8_,&cf_FishAudio,auVar6._0_8_,auVar7._0_8_);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar7._0_8_);

      goto LAB_0008e310;

    }

    auVar7 = FUN_00297fa0(param_2);

    auVar6._8_8_ = auVar7._8_8_;

    auVar6._0_8_ = lVar3;

    if (auVar7._0_8_ == 0) goto LAB_0008e2a0;

    _NSTemporaryDirectory();

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_00290c60(&_OBJC_CLASS___NSUUID);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00290c80();

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar6._8_8_,&cf_xzy_tts____mp3);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4460(uVar1,auVar7._8_8_,auVar7._0_8_);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar7._0_8_);

    _objc_release(auVar6._0_8_);

    _objc_release(uVar2);

    _objc_release(uVar1);

    auVar6 = FUN_002a6580(param_2,extraout_x1,lVar3,1);

    if ((auVar6._0_8_ & 1) == 0) {

      local_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_00388218;

      pcStack_80 = &cf_elOX_;

      FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar6._8_8_,&pcStack_80,&local_88,1);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_00294de0(&_OBJC_CLASS___NSError,auVar6._8_8_,&cf_FishAudio,0xfffffffffffffffe,auVar6._0_8_

                  );

      puVar4 = (undefined *)_objc_retainAutoreleasedReturnValue();

      _objc_release(auVar6._0_8_);

      local_e8 = PTR___NSConcreteStackBlock_003886f0;

      local_e0 = 0xc2000000;

      local_d8 = FUN_0008e57c;

      puStack_d0 = &DAT_00389f30;

      uVar1 = *(undefined8 *)(param_1 + 0x20);

      _objc_retain(uVar1);

      local_c8 = puVar4;

      local_c0 = uVar1;

      _objc_retain(puVar4);

      _dispatch_async(PTR___dispatch_main_q_00388740,&local_e8);

      _objc_release(local_c8);

      _objc_release(local_c0);

      goto LAB_0008e374;

    }

    local_118 = PTR___NSConcreteStackBlock_003886f0;

    local_110 = 0xc2000000;

    local_108 = FUN_0008e59c;

    puStack_100 = &DAT_00389f30;

    ppuVar5 = &local_118;

    uVar1 = *(undefined8 *)(param_1 + 0x20);

    _objc_retain(uVar1);

    local_f0 = uVar1;

    _objc_retain(lVar3);

    local_f8 = lVar3;

    _dispatch_async(PTR___dispatch_main_q_00388740,&local_118);

    _objc_release(local_f8);

  }

  puVar4 = ppuVar5[5];

LAB_0008e374:

  _objc_release(puVar4);

  _objc_release(lVar3);

  _objc_release(param_4);

  _objc_release(param_3);

  _objc_release(param_2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




