// FUN_00236a48 @0x236a48


void FUN_00236a48(long param_1,undefined8 param_2)



{

  bool bVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  undefined **local_a8;

  undefined **ppuStack_a0;

  undefined **local_98;

  undefined **ppuStack_90;

  undefined **local_88;

  undefined **ppuStack_80;

  undefined **local_78;

  cfstringStruct *local_70;

  cfstringStruct *pcStack_68;

  cfstringStruct *local_60;

  cfstringStruct *pcStack_58;

  cfstringStruct *local_50;

  cfstringStruct *pcStack_48;

  cfstringStruct *local_40;

  long local_38;

  

  local_38 = *(long *)PTR____stack_chk_guard_00388738;

  uVar4 = param_2;

  if (DAT_003eb160 != 0) {

    FUN_002a4680(&_OBJC_CLASS___NSString,param_2,&cf__ld);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar5._0_8_;

    FUN_00299540(DAT_003eb160,auVar5._8_8_,uVar4);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar3 = FUN_00297fa0();

    if (lVar3 != 0) {

      _objc_release(uVar4);

      goto LAB_00236c2c;

    }

    _objc_release(uVar2);

    _objc_release(uVar4);

    uVar4 = extraout_x1;

  }

  if (param_1 < 0) {

    local_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003c0040;

    ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003c0058;

    bVar1 = (int)param_2 == 0;

    pcStack_68 = &cf_icons_filled_moment;

    if (bVar1) {

      pcStack_68 = &cf_icons_outlined_colorful_moment;

    }

    local_70 = &cf_icons_filled_search;

    local_60 = &cf_icons_filled_favorites;

    if (bVar1) {

      local_60 = &cf_icons_outlined_favorites;

    }

    local_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003c0070;

    ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003c0088;

    pcStack_58 = &cf_icons_filled_wechatpay;

    if (bVar1) {

      pcStack_58 = &cf_icons_outlined_wechatpay;

    }

    local_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003c00a0;

    ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003c00b8;

    pcStack_48 = &cf_icons_filled_setting;

    if (bVar1) {

      pcStack_48 = &cf_icons_outlined_setting;

    }

    local_50 = &cf_icons_outlined_cards;

    local_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003c00d0;

    local_40 = &cf_WeChat_Lab_Logo_light_small;

    FUN_00294560(&_OBJC_CLASS___NSDictionary,uVar4,&local_70,&local_a8,7);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00299400(&_OBJC_CLASS___NSNumber,auVar5._8_8_,param_1);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_00299540(auVar5._0_8_,auVar6._8_8_,auVar6._0_8_);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar6._0_8_);

    _objc_release(auVar5._0_8_);

  }

  else {

    FUN_0023b714(param_1,param_2);

    uVar2 = _objc_retainAutoreleasedReturnValue();

  }

LAB_00236c2c:

  if (*(long *)PTR____stack_chk_guard_00388738 == local_38) {

    _objc_autoreleaseReturnValue(uVar2);

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




