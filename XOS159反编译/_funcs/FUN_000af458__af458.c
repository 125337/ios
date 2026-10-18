// FUN_000af458 @0xaf458


bool FUN_000af458(long param_1)



{

  bool bVar1;

  int iVar2;

  ulong uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined1 auVar8 [16];

  

  _objc_retain();

  if (DAT_003e7a58 != -1) {

    FUN_0028f014();

  }

  if (param_1 == 0) {

    bVar1 = false;

    goto LAB_000af64c;

  }

  if ((((((DAT_003e7a30 == 0) || (uVar3 = _objc_opt_isKindOfClass(param_1), (uVar3 & 1) == 0)) &&

        ((DAT_003e7a38 == 0 || (uVar3 = _objc_opt_isKindOfClass(param_1), (uVar3 & 1) == 0)))) &&

       ((DAT_003e7a40 == 0 || (uVar3 = _objc_opt_isKindOfClass(param_1), (uVar3 & 1) == 0)))) &&

      ((DAT_003e7a48 == 0 || (uVar3 = _objc_opt_isKindOfClass(param_1), (uVar3 & 1) == 0)))) &&

     ((DAT_003e7a50 == 0 || (uVar3 = _objc_opt_isKindOfClass(param_1), (uVar3 & 1) == 0)))) {

    uVar4 = _object_getClass(param_1);

    if (DAT_003e7a60 == 0) {

      DAT_003e7a60 = _CFDictionaryCreateMutable(0,0,0,0);

    }

    lVar5 = _CFDictionaryGetValue(DAT_003e7a60,uVar4);

    if (lVar5 != 1) {

      if (lVar5 != 2) {

        _NSStringFromClass(uVar4);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        auVar8 = FUN_00297fa0();

        if (auVar8._0_8_ == 0) {

          uVar3 = 0;

          uVar7 = 2;

        }

        else {

          auVar8 = FUN_00293580(uVar6,auVar8._8_8_,&cf_Revoke);

          if ((auVar8._0_8_ & 1) == 0) {

            auVar8 = FUN_00293580(uVar6,auVar8._8_8_,&cf_SystemMessage);

            if ((auVar8._0_8_ & 1) == 0) {

              auVar8 = FUN_00293580(uVar6,auVar8._8_8_,&cf_ChatTime);

              if ((auVar8._0_8_ & 1) == 0) {

                uVar3 = FUN_00293580(uVar6,auVar8._8_8_,&cf_PatMessage);

                uVar7 = 1;

                if ((uVar3 & 1) == 0) {

                  uVar7 = 2;

                }

                goto LAB_000af5e0;

              }

            }

            uVar7 = 1;

            uVar3 = 1;

          }

          else {

            uVar3 = 1;

            uVar7 = 1;

          }

        }

LAB_000af5e0:

        _CFDictionarySetValue(DAT_003e7a60,uVar4,uVar7);

        _objc_release(uVar6);

        if ((uVar3 & 1) != 0) goto LAB_000af5f8;

      }

      FUN_000856e8(param_1);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      if (lVar5 == 0) {

        bVar1 = false;

      }

      else {

        iVar2 = FUN_00298760(lVar5);

        bVar1 = iVar2 == 10000;

      }

      _objc_release(lVar5);

      goto LAB_000af64c;

    }

  }

LAB_000af5f8:

  bVar1 = true;

LAB_000af64c:

  _objc_release(param_1);

  return bVar1;

}




