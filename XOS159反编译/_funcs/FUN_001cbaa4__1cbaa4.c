// FUN_001cbaa4 @0x1cbaa4


void FUN_001cbaa4(undefined8 param_1)



{

  ulong uVar1;

  long lVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  cfstringStruct *pcVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  auVar6 = FUN_00297820(param_1,extraout_x1,&cf___xzy_clg_side_total__);

  if ((auVar6._0_8_ & 1) != 0) {

    pcVar5 = &cf___R_;

    goto LAB_001cbc10;

  }

  auVar6 = FUN_00297820(param_1,auVar6._8_8_,&cf_sticky);

  if ((auVar6._0_8_ & 1) != 0) {

    pcVar5 = &cf_n_v;

    goto LAB_001cbc10;

  }

  auVar6 = FUN_00297820(param_1,auVar6._8_8_,&cf_unread);

  if ((auVar6._0_8_ & 1) != 0) {

    pcVar5 = &cf__g;

    goto LAB_001cbc10;

  }

  auVar6 = FUN_00297820(param_1,auVar6._8_8_,&cf_private);

  if ((auVar6._0_8_ & 1) != 0) {

    pcVar5 = &cf_yJ;

    goto LAB_001cbc10;

  }

  auVar6 = FUN_00297820(param_1,auVar6._8_8_,&cf_groupchat);

  if ((auVar6._0_8_ & 1) != 0) {

    pcVar5 = &cf__J;

    goto LAB_001cbc10;

  }

  auVar6 = FUN_00297820(param_1,auVar6._8_8_,&cf_official);

  if ((auVar6._0_8_ & 1) != 0) {

    pcVar5 = &cf_lQOS;

    goto LAB_001cbc10;

  }

  uVar1 = FUN_00297820(param_1,auVar6._8_8_,&cf_other);

  if ((uVar1 & 1) != 0) {

    pcVar5 = &cf_hQ;

    goto LAB_001cbc10;

  }

  FUN_001f13cc(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  lVar2 = auVar6._0_8_;

  if (lVar2 == 0) {

LAB_001cbc00:

    pcVar5 = &cf__IN;

  }

  else {

    FUN_00299540(lVar2,auVar6._8_8_,&cf_name);

    pcVar5 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    uVar3 = _objc_opt_class(&_OBJC_CLASS___NSString);

    uVar1 = _objc_opt_isKindOfClass(pcVar5,uVar3);

    if (((uVar1 & 1) == 0) || (lVar4 = FUN_00297fa0(pcVar5), lVar4 == 0)) {

      _objc_release(pcVar5);

      goto LAB_001cbc00;

    }

  }

  _objc_release(lVar2);

LAB_001cbc10:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(pcVar5);

  return;

}




