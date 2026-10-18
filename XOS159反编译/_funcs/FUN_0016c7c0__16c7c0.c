// FUN_0016c7c0 @0x16c7c0


void FUN_0016c7c0(long param_1,undefined8 param_2)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined *local_70;

  undefined8 local_68;

  code *local_60;

  undefined *puStack_58;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 local_40;

  long local_38;

  

  local_38 = *(long *)PTR____stack_chk_guard_00388738;

  uVar1 = FUN_00297ae0(&_OBJC_CLASS___UIImagePickerController,param_2,1);

  if ((uVar1 & 1) == 0) {

    if (*(long *)PTR____stack_chk_guard_00388738 == local_38) {

                    /* WARNING: Could not recover jumptable at 0x0016c8bc. Too many branches */

                    /* WARNING: Treating indirect jump as call */

      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);

      return;

    }

  }

  else {

    auVar7 = _objc_alloc_init(&_OBJC_CLASS___UIImagePickerController);

    uVar2 = auVar7._0_8_;

    FUN_002a1720(uVar2,auVar7._8_8_,1);

    if (*(char *)(param_1 + 0x28) == '\x01') {

      FUN_002963e0(*(undefined8 *)PTR__UTTypeMovie_003886b0);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      local_40 = auVar7._0_8_;

      FUN_00291e00(&_OBJC_CLASS___NSArray,auVar7._8_8_,&local_40,1);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_0029fa80(uVar2,auVar8._8_8_,auVar8._0_8_);

      _objc_release(auVar8._0_8_);

      _objc_release(auVar7._0_8_);

      FUN_0029d1e0(uVar2,extraout_x1,1);

    }

    else {

      FUN_002963e0(*(undefined8 *)PTR__UTTypeImage_00388698);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      local_48 = auVar7._0_8_;

      FUN_00291e00(&_OBJC_CLASS___NSArray,auVar7._8_8_,&local_48,1);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_0029fa80(uVar2,auVar8._8_8_,auVar8._0_8_);

      _objc_release(auVar8._0_8_);

      _objc_release(auVar7._0_8_);

    }

    _objc_setAssociatedObject(uVar2,PTR_LOOP_003e6c10,PTR____kCFBooleanTrue_00388320,1);

    uVar3 = _objc_alloc_init(&objc::class_t::CadisImagePickerDelegate);

    local_70 = PTR___NSConcreteStackBlock_003886f0;

    local_68 = 0xc2000000;

    local_60 = FUN_0016caf4;

    puStack_58 = &DAT_0038da58;

    uVar6 = *(undefined8 *)(param_1 + 0x20);

    _objc_retain(uVar6);

    local_50 = uVar6;

    FUN_0029d5c0(uVar3,extraout_x1_00,&local_70);

    FUN_0029dca0(uVar2,extraout_x1_01,uVar3);

    uVar6 = extraout_x1_02;

    if (DAT_003e8a20 == 0) {

      FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      lVar5 = DAT_003e8a20;

      DAT_003e8a20 = lVar4;

      _objc_release(lVar5);

      uVar6 = extraout_x1_03;

    }

    FUN_00291240(DAT_003e8a20,uVar6,uVar3);

    FUN_0016cb00();

    auVar7 = _objc_retainAutoreleasedReturnValue();

    lVar5 = auVar7._0_8_;

    if (lVar5 == 0) {

      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);

    }

    else {

      FUN_0029a500(lVar5,auVar7._8_8_,uVar2,1,0);

    }

    _objc_release(lVar5);

    _objc_release(local_50);

    _objc_release(uVar3);

    _objc_release(uVar2);

    if (*(long *)PTR____stack_chk_guard_00388738 == local_38) {

      return;

    }

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




