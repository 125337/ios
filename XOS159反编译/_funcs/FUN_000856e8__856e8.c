// FUN_000856e8 @0x856e8


void FUN_000856e8(long param_1)



{

  ulong uVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  cfstringStruct *pcVar5;

  undefined **ppuVar6;

  undefined1 auVar7 [16];

  

  _objc_retain();

  if (param_1 != 0) {

    if (DAT_003e76d8 != -1) {

      FUN_0028eeec();

    }

    uVar1 = _objc_opt_isKindOfClass(param_1,DAT_003e76c8);

    if ((uVar1 & 1) != 0) {

      _objc_retain(param_1);

      lVar3 = param_1;

      goto LAB_000859f4;

    }

    uVar2 = _objc_opt_class(param_1);

    auVar7 = _CFDictionaryGetValue(DAT_003e76e0,uVar2);

    lVar3 = auVar7._0_8_;

    if (0 < lVar3) {

      if (lVar3 < 5) {

        if (2 < lVar3) {

          if (lVar3 == 3) {

            pcVar5 = &cf_messageWrap;

          }

          else {

            if (lVar3 != 4) goto LAB_0008584c;

            pcVar5 = &cf_m_msgWrap;

          }

          goto LAB_00085830;

        }

        if (lVar3 == 1) {

          ppuVar6 = &PTR_s_messageWrap_003de4e0;

        }

        else {

          if (lVar3 != 2) goto LAB_0008584c;

          ppuVar6 = &PTR_s_msgWrap_003db820;

        }

        _objc_msgSend(param_1,*ppuVar6);

        lVar3 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        if (lVar3 < 7) {

          if (lVar3 == 5) {

            pcVar5 = &cf_m_messageWrap;

          }

          else {

            if (lVar3 != 6) goto LAB_0008584c;

            pcVar5 = &cf_msgWrap;

          }

        }

        else if (lVar3 == 7) {

          pcVar5 = &cf_m_oMsgWrap;

        }

        else {

          if (lVar3 != 8) goto LAB_0008584c;

          pcVar5 = &cf_m_oMessageWrap;

        }

LAB_00085830:

        FUN_002a6080(param_1,auVar7._8_8_,pcVar5);

        lVar3 = _objc_retainAutoreleasedReturnValue();

      }

      if (lVar3 != 0) goto LAB_000859f4;

    }

LAB_0008584c:

    uVar1 = _objc_opt_respondsToSelector(param_1,"messageWrap");

    if ((uVar1 & 1) != 0) {

      _objc_msgSend(param_1,"messageWrap");

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 != 0) {

        _CFDictionarySetValue(DAT_003e76e0,uVar2,1);

        goto LAB_000859f4;

      }

    }

    uVar1 = _objc_opt_respondsToSelector(param_1,"msgWrap");

    if ((uVar1 & 1) != 0) {

      _objc_msgSend(param_1,"msgWrap");

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 != 0) {

        _CFDictionarySetValue(DAT_003e76e0,uVar2,2);

        goto LAB_000859f4;

      }

    }

    if (DAT_003e76f0 != -1) {

      FUN_0028ef00();

    }

    for (uVar1 = 0; auVar7 = FUN_00293860(DAT_003e76e8), uVar1 < auVar7._0_8_; uVar1 = uVar1 + 1) {

      FUN_00299500(DAT_003e76e8,auVar7._8_8_,uVar1);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6080(param_1,auVar7._8_8_,auVar7._0_8_);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar7._0_8_);

      if (lVar3 != 0) {

        _CFDictionarySetValue(DAT_003e76e0,uVar2,(&DAT_00308158)[uVar1]);

        goto LAB_000859f4;

      }

    }

    auVar7 = _objc_opt_isKindOfClass(param_1,DAT_003e76d0);

    if ((auVar7._0_8_ & 1) != 0) {

      FUN_002a6080(param_1,auVar7._8_8_,&cf_parentModel);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if (lVar4 != 0) {

        FUN_000856e8(lVar4);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar4);

        goto LAB_000859f4;

      }

    }

  }

  lVar3 = 0;

LAB_000859f4:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar3);

  return;

}




