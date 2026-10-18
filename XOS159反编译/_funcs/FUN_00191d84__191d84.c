// FUN_00191d84 @0x191d84


uint FUN_00191d84(long param_1)



{

  uint uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 uVar4;

  long lVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  if (param_1 == 0) {

    uVar1 = 0;

  }

  else {

    _objc_retain(param_1);

    uVar4 = 0;

    lVar5 = param_1;

    if ((DAT_003e95d0 != 0) &&

       (auVar6 = _objc_opt_isKindOfClass(param_1), uVar4 = auVar6._8_8_, (auVar6._0_8_ & 1) != 0)) {

      FUN_002a6080(param_1,uVar4,&cf_parentModel);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      if (lVar2 != 0) {

        _objc_retain(lVar2);

        _objc_release(param_1);

        lVar5 = lVar2;

      }

      _objc_release(lVar2);

      uVar4 = extraout_x1;

    }

    FUN_002a6080(lVar5,uVar4,&cf_messageWrap);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    lVar2 = auVar6._0_8_;

    if (lVar2 == 0) {

      uVar1 = 0;

    }

    else {

      FUN_002a6080(lVar2,auVar6._8_8_,&cf_m_nsToUsr);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      uVar4 = auVar6._0_8_;

      FUN_002a6080(lVar2,auVar6._8_8_,&cf_m_nsFromUsr);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar6._0_8_;

      auVar6 = FUN_00295fa0(uVar4,auVar6._8_8_,&cf__chatroom);

      if ((((auVar6._0_8_ & 1) == 0) &&

          (auVar6 = FUN_00295fa0(uVar3,auVar6._8_8_,&cf__chatroom), (auVar6._0_8_ & 1) == 0)) &&

         (auVar6 = FUN_00295f60(uVar4,auVar6._8_8_,&cf_gh_), (auVar6._0_8_ & 1) == 0)) {

        uVar1 = FUN_00295f60(uVar3,auVar6._8_8_,&cf_gh_);

        uVar1 = uVar1 ^ 1;

      }

      else {

        uVar1 = 0;

      }

      _objc_release(uVar3);

      _objc_release(uVar4);

    }

    _objc_release(lVar2);

    _objc_release(lVar5);

  }

  _objc_release(param_1);

  return uVar1;

}




