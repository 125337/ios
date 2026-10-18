// tableView:commitEditingStyle:forRowAtIndexPath: @0x1f2110


/* Function Stack Size: 0x28 bytes */



void XZYCLGCustomGroupEditorViewController::tableView_commitEditingStyle_forRowAtIndexPath_

               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined *puVar4;

  long lVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar8 [16];

  ID local_50;

  long local_48;

  

  local_48 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  _objc_retain(param_5);

  if (param_4 == 1) {

    FUN_00295de0(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_001f13cc();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

    FUN_00299540(uVar3,extraout_x1,&cf_members);

    puVar4 = (undefined *)_objc_retainAutoreleasedReturnValue();

    puVar1 = PTR____NSArray0__struct_00388308;

    if (puVar4 != (undefined *)0x0) {

      puVar1 = puVar4;

    }

    uVar2 = FUN_00299020(puVar1);

    _objc_release(puVar4);

    lVar5 = FUN_0029bae0(param_5);

    lVar6 = FUN_00293860(uVar2);

    if (lVar5 < lVar6) {

      auVar8 = FUN_0029bae0(param_5);

      FUN_0029b480(uVar2,auVar8._8_8_,auVar8._0_8_);

      FUN_00295de0(param_1);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_001f2334(uVar7,uVar2);

      _objc_release(uVar7);

      local_50 = param_5;

      FUN_00291e00(&_OBJC_CLASS___NSArray,extraout_x1_00,&local_50,1);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_002943a0(param_3,auVar8._8_8_,auVar8._0_8_,100);

      _objc_release(auVar8._0_8_);

      FUN_001c9388();

    }

    _objc_release(uVar2);

    _objc_release(uVar3);

  }

  _objc_release(param_5);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_48) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




