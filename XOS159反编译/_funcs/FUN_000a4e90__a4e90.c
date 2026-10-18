// FUN_000a4e90 @0xa4e90


void FUN_000a4e90(undefined8 param_1)



{

  bool bVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  ulong uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  long lVar11;

  undefined8 extraout_x1;

  undefined1 auVar12 [16];

  long local_68;

  

  _objc_retain();

  lVar3 = FUN_00297fa0(param_1);

  if (lVar3 == 0) {

    lVar3 = 0;

  }

  else {

    FUN_000a5abc();

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_0029bac0();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar3 == 0) {

      lVar3 = 0;

    }

    else {

      FUN_0029bac0(uVar4);

      auVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_00291dc0(&_OBJC_CLASS___NSMutableArray,auVar12._8_8_,auVar12._0_8_);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar12._0_8_);

      FUN_002a6400(&_OBJC_CLASS___NSHashTable);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      lVar7 = _objc_getClass("BaseMsgContentViewController");

      local_68 = 0;

      bVar1 = false;

      while (lVar3 = FUN_00293860(uVar5), lVar3 != 0) {

        FUN_00295440(uVar5);

        auVar12 = _objc_retainAutoreleasedReturnValue();

        lVar3 = auVar12._0_8_;

        FUN_0029b480(uVar5,auVar12._8_8_,0);

        if ((lVar3 != 0) &&

           (auVar12 = FUN_00293560(uVar6,extraout_x1,lVar3), (auVar12._0_8_ & 1) == 0)) {

          FUN_00291240(uVar6,auVar12._8_8_,lVar3);

          if ((lVar7 != 0) && (uVar8 = _objc_opt_isKindOfClass(lVar3,lVar7), (uVar8 & 1) != 0)) {

            FUN_00290ac0(lVar3);

            uVar9 = _objc_retainAutoreleasedReturnValue();

            FUN_002986c0();

            auVar12 = _objc_retainAutoreleasedReturnValue();

            uVar10 = auVar12._0_8_;

            uVar8 = FUN_00297820(uVar10,auVar12._8_8_,param_1);

            _objc_release(uVar9);

            if ((uVar8 & 1) != 0) {

              _objc_release(uVar10);

              goto LAB_000a518c;

            }

            lVar11 = FUN_00297fa0(uVar10);

            if ((lVar11 == 0) && (iVar2 = FUN_00297b80(lVar3), iVar2 != 0)) {

              FUN_002a6220(lVar3);

              uVar9 = _objc_retainAutoreleasedReturnValue();

              FUN_002a6520();

              lVar11 = _objc_retainAutoreleasedReturnValue();

              _objc_release();

              _objc_release(uVar9);

              if (lVar11 != 0) {

                _objc_retain(lVar3);

                if (local_68 == 0) {

                  _objc_retain(lVar3);

                  local_68 = lVar3;

                }

                else {

                  bVar1 = (bool)(local_68 != lVar3 | bVar1);

                }

                _objc_release(lVar3);

              }

            }

            _objc_release(uVar10);

          }

          FUN_0029a560(lVar3);

          lVar11 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          if (lVar11 != 0) {

            FUN_0029a560(lVar3);

            auVar12 = _objc_retainAutoreleasedReturnValue();

            FUN_00291240(uVar5,auVar12._8_8_,auVar12._0_8_);

            _objc_release(auVar12._0_8_);

          }

          FUN_00292d00(lVar3);

          uVar9 = _objc_retainAutoreleasedReturnValue();

          lVar11 = FUN_00293860();

          _objc_release(uVar9);

          if (lVar11 != 0) {

            FUN_00292d00(lVar3);

            auVar12 = _objc_retainAutoreleasedReturnValue();

            FUN_00291260(uVar5,auVar12._8_8_,auVar12._0_8_);

            _objc_release(auVar12._0_8_);

          }

        }

        _objc_release(lVar3);

      }

      lVar3 = 0;

      if (!bVar1) {

        lVar3 = local_68;

      }

      _objc_retain(lVar3);

LAB_000a518c:

      _objc_release(local_68);

      _objc_release(uVar6);

      _objc_release(uVar5);

    }

    _objc_release(uVar4);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar3);

  return;

}




