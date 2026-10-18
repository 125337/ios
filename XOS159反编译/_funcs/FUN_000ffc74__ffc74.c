// FUN_000ffc74 @0xffc74


void FUN_000ffc74(long param_1)



{

  ulong uVar1;

  undefined8 uVar2;

  long lVar3;

  cfstringStruct *pcVar4;

  undefined **ppuVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  if (param_1 == 0) goto LAB_000fff8c;

  if (DAT_003e7ff0 != -1) {

    FUN_0028f1b8();

  }

  uVar1 = _objc_opt_isKindOfClass(param_1,DAT_003e7fe8);

  if ((uVar1 & 1) != 0) goto switchD_000ffd1c_caseD_a;

  uVar2 = _objc_opt_class(param_1);

  auVar6 = _CFDictionaryGetValue(DAT_003e7ff8,uVar2);

  if (auVar6._0_8_ < 1) goto switchD_000ffd1c_default;

  pcVar4 = &cf_messageWrap;

  ppuVar5 = &PTR_s_messageWrap_003de4e0;

  switch(auVar6._0_8_) {

  case 1:

    goto switchD_000ffd1c_caseD_1;

  case 2:

    ppuVar5 = &PTR_s_msgWrap_003db820;

    goto switchD_000ffd1c_caseD_1;

  case 3:

    break;

  case 4:

    pcVar4 = &cf_m_msgWrap;

    break;

  case 5:

    pcVar4 = &cf_m_messageWrap;

    break;

  case 6:

    pcVar4 = &cf_msgWrap;

    break;

  case 7:

    pcVar4 = &cf_m_oMsgWrap;

    break;

  case 8:

    pcVar4 = &cf_m_oMessageWrap;

    break;

  case 9:

    pcVar4 = &cf_m_refMessageWrap;

    break;

  case 10:

    goto switchD_000ffd1c_caseD_a;

  default:

    goto switchD_000ffd1c_default;

  }

  FUN_002a6080(param_1,auVar6._8_8_,pcVar4);

  lVar3 = _objc_retainAutoreleasedReturnValue();

LAB_000ffd94:

  if (lVar3 == 0) {

switchD_000ffd1c_default:

    uVar1 = _objc_opt_respondsToSelector(param_1,"messageWrap");

    if ((uVar1 & 1) != 0) {

      _objc_msgSend(param_1,"messageWrap");

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 != 0) {

        _CFDictionarySetValue(DAT_003e7ff8,uVar2,1);

        goto LAB_000fff90;

      }

    }

    uVar1 = _objc_opt_respondsToSelector(param_1,"msgWrap");

    if ((uVar1 & 1) != 0) {

      _objc_msgSend(param_1,"msgWrap");

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 != 0) {

        _CFDictionarySetValue(DAT_003e7ff8,uVar2,2);

        goto LAB_000fff90;

      }

    }

    if (DAT_003e8008 != -1) {

      FUN_0028f1cc();

    }

    uVar1 = 0;

    while( true ) {

      auVar6 = FUN_00293860(DAT_003e8000);

      if (auVar6._0_8_ <= uVar1) break;

      FUN_00299500(DAT_003e8000,auVar6._8_8_,uVar1);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_002a6080(param_1,auVar6._8_8_,auVar6._0_8_);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar6._0_8_);

      if (lVar3 != 0) {

        _CFDictionarySetValue(DAT_003e7ff8,uVar2,(&DAT_0030e498)[uVar1]);

        goto LAB_000fff90;

      }

      uVar1 = uVar1 + 1;

    }

    uVar1 = _objc_opt_respondsToSelector(param_1,"m_nsFromUsr");

    if (((uVar1 & 1) == 0) &&

       (uVar1 = _objc_opt_respondsToSelector(param_1,"m_nsRealChatUsr"), (uVar1 & 1) == 0)) {

LAB_000fff8c:

      lVar3 = 0;

    }

    else {

      _CFDictionarySetValue(DAT_003e7ff8,uVar2,10);

switchD_000ffd1c_caseD_a:

      _objc_retain(param_1);

      lVar3 = param_1;

    }

  }

LAB_000fff90:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar3);

  return;

switchD_000ffd1c_caseD_1:

  _objc_msgSend(param_1,*ppuVar5);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  goto LAB_000ffd94;

}




