// FUN_00085afc @0x85afc


void FUN_00085afc(undefined8 param_1)



{

  undefined8 extraout_x1;

  undefined1 auVar1 [16];

  cfstringStruct *local_58;

  cfstringStruct *pcStack_50;

  cfstringStruct *local_48;

  cfstringStruct *pcStack_40;

  cfstringStruct *local_38;

  cfstringStruct *pcStack_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  local_58 = &cf_xzySettingsRevision;

  pcStack_50 = &cf_ttsVoiceListCache;

  local_48 = &cf_xzy_fontLaunchGuardCount;

  pcStack_40 = &cf_CadisWeatherCache;

  local_38 = &cf_CadisWeatherError;

  pcStack_30 = &cf_CadisXZYSettingsRevision;

  FUN_00291e00(&_OBJC_CLASS___NSArray,extraout_x1,&local_58,6);

  auVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4c0(param_1,auVar1._8_8_,auVar1._0_8_);

  _objc_release(auVar1._0_8_);

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_28) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




