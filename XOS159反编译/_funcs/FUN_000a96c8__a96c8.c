// FUN_000a96c8 @0xa96c8


undefined8 FUN_000a96c8(long param_1)



{

  undefined *puVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined1 auVar8 [16];

  

  _objc_retain();

  if (param_1 == 0) {

    uVar4 = 0;

  }

  else {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e6530);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 == 0) {

      auVar8 = _objc_opt_respondsToSelector(param_1,"messageWrap");

      uVar7 = auVar8._8_8_;

      if ((auVar8._0_8_ & 1) == 0) {

        uVar4 = 0;

      }

      else {

        FUN_00298ce0(param_1);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_retain();

        if ((lVar5 == 0) || (iVar2 = FUN_00298760(lVar5), iVar2 != 0x31)) {

          uVar4 = 0;

        }

        else {

          FUN_002985a0(lVar5);

          lVar6 = _objc_retainAutoreleasedReturnValue();

          if ((lVar6 == 0) || (auVar8 = FUN_00297fa0(lVar6), auVar8._0_8_ == 0)) {

            uVar4 = 0;

          }

          else {

            auVar8 = FUN_00293580(lVar6,auVar8._8_8_,&cf_<type>53<_type>);

            if (((((auVar8._0_8_ & 1) == 0) &&

                 (auVar8 = FUN_00293580(lVar6,auVar8._8_8_,&cf_<type>87<_type>),

                 (auVar8._0_8_ & 1) == 0)) &&

                (auVar8 = FUN_00293580(lVar6,auVar8._8_8_,&cf_<type><_[CDATA[53]]><_type>),

                (auVar8._0_8_ & 1) == 0)) &&

               (auVar8 = FUN_00293580(lVar6,auVar8._8_8_,&cf_<type><_[CDATA[87]]><_type>),

               (auVar8._0_8_ & 1) == 0)) {

              uVar4 = FUN_00293580(lVar6,auVar8._8_8_,&cf_<announcement>);

            }

            else {

              uVar4 = 1;

            }

          }

          _objc_release(lVar6);

        }

        _objc_release(lVar5);

        _objc_release(lVar5);

        uVar7 = extraout_x1;

      }

      puVar1 = PTR_LOOP_003e6530;

      FUN_00299380(&_OBJC_CLASS___NSNumber,uVar7,uVar4);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_1,puVar1,uVar7,1);

      _objc_release(uVar7);

    }

    else {

      uVar4 = FUN_002924e0(lVar3);

    }

    _objc_release(lVar3);

  }

  _objc_release(param_1);

  return uVar4;

}




