// FUN_00211e50 @0x211e50


void FUN_00211e50(undefined8 param_1,cfstringStruct *param_2)



{

  byte bVar1;

  byte bVar2;

  int iVar3;

  undefined8 uVar4;

  ulong uVar5;

  long lVar6;

  cfstringStruct *pcVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  byte bVar8;

  undefined1 auVar9 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  uVar4 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar5 = _objc_opt_isKindOfClass(param_2,uVar4);

  if ((uVar5 & 1) == 0) {

    _objc_release(param_2);

    param_2 = &cf___;

  }

  lVar6 = FUN_00297fa0(param_2);

  if (lVar6 != 0) {

    auVar9 = FUN_00293860(DAT_003eaa18);

    if (auVar9._0_8_ != 0) {

      FUN_00299540(DAT_003eaa18,auVar9._8_8_,param_2);

      pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      if (pcVar7 != (cfstringStruct *)0x0) goto LAB_002120fc;

    }

  }

  _objc_retain(param_2);

  uVar4 = _objc_opt_class(&_OBJC_CLASS___NSString);

  auVar9 = _objc_opt_isKindOfClass(param_2,uVar4);

  if ((auVar9._0_8_ & 1) == 0) {

    _objc_release(param_2);

  }

  else {

    iVar3 = FUN_00297820(param_2,auVar9._8_8_,&cf_brandservicesessionholder);

    _objc_release(param_2);

    if (iVar3 != 0) {

      pcVar7 = &cf_official;

      if (DAT_003e715c == 0) {

        pcVar7 = &cf_other;

      }

      _objc_retain(pcVar7);

      goto LAB_002120fc;

    }

  }

  lVar6 = FUN_00212188(param_1);

  bVar1 = FUN_00212d60(param_1);

  if ((0 < lVar6) && ((DAT_003e7159 & 1) != 0)) {

    pcVar7 = &cf_unread;

    goto LAB_002120fc;

  }

  if ((bVar1 & DAT_003e7158 & 1) != 0) {

    pcVar7 = &cf_sticky;

    goto LAB_002120fc;

  }

  bVar1 = FUN_00295fa0(param_2,extraout_x1,&cf__chatroom);

  uVar5 = FUN_00295f60(param_2,extraout_x1_00,&cf_gh_);

  if ((uVar5 & 1) == 0) {

    _objc_retain(param_2);

    iVar3 = FUN_0021314c(param_1,param_2);

    if (iVar3 != 0) {

      _objc_release(param_2);

      goto LAB_00211fe8;

    }

    _objc_retain(param_2);

    uVar4 = _objc_opt_class(&_OBJC_CLASS___NSString);

    uVar5 = _objc_opt_isKindOfClass(param_2,uVar4);

    if ((uVar5 & 1) == 0) {

LAB_0021205c:

      _objc_release(param_2);

      _objc_release(param_2);

    }

    else {

      auVar9 = FUN_00297fa0(param_2);

      uVar4 = auVar9._8_8_;

      if (auVar9._0_8_ == 0) goto LAB_0021205c;

      if (DAT_003eadc8 != -1) {

        FUN_0028f9f8();

        uVar4 = extraout_x1_01;

      }

      uVar5 = FUN_00293560(DAT_003eadc0,uVar4,param_2);

      _objc_release(param_2);

      _objc_release(param_2);

      if ((uVar5 & 1) != 0) goto LAB_00211fe8;

    }

    bVar2 = FUN_002130b0(param_2);

    bVar8 = 0;

  }

  else {

LAB_00211fe8:

    bVar2 = 0;

    bVar8 = 1;

  }

  lVar6 = FUN_00297fa0(param_2);

  if ((bVar8 & DAT_003e715c) == 0) {

    if ((((bVar1 | bVar2) & 1) == 0) || ((DAT_003e715b & 1) == 0)) {

      pcVar7 = &cf_private;

      if ((((bVar8 | bVar2 | lVar6 == 0 | bVar1) ^ 1) & DAT_003e715a & 1) == 0) {

        pcVar7 = &cf_other;

      }

    }

    else {

      pcVar7 = &cf_groupchat;

    }

  }

  else {

    pcVar7 = &cf_official;

  }

LAB_002120fc:

  _objc_release(param_2);

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(pcVar7);

  return;

}




