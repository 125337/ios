// FUN_0078abc0 @ 0078abc0

byte FUN_0078abc0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  double local_a8;
  ulong local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ulong local_78;
  byte local_69;
  undefined4 local_68;
  byte local_51;
  undefined8 local_50;
  ulong local_48;
  byte local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  local_51 = param_3;
  local_50 = param_2;
  switch(param_2) {
  case 0:
    uVar3 = local_48;
    FUN_0078b3cc();
    local_39 = (byte)uVar3 & 1;
    local_68 = 1;
    break;
  case 1:
    uVar3 = local_48;
    FUN_0078b914(local_48,PTR_s_onCopy__026a4340);
    puVar2 = PTR___dispatch_main_q_02578680;
    local_69 = (byte)uVar3;
    if ((uVar3 & 1) != 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    local_39 = local_69 & 1;
    local_68 = 1;
    break;
  case 2:
    uVar3 = local_48;
    FUN_0078b914(local_48,PTR_s_onForward__026a4350);
    local_39 = (byte)uVar3 & 1;
    local_68 = 1;
    break;
  case 3:
    uVar3 = local_48;
    FUN_0078bcdc(local_48,param_3 & 1);
    local_39 = (byte)uVar3 & 1;
    local_68 = 1;
    break;
  case 4:
    uVar3 = local_48;
    FUN_0078b914(local_48,PTR_s_onDelete__026a43d0);
    local_39 = (byte)uVar3 & 1;
    local_68 = 1;
    break;
  case 5:
    uVar3 = local_48;
    FUN_0078b914(local_48,PTR_s_onFavorite__026a43b8);
    local_39 = (byte)uVar3 & 1;
    local_68 = 1;
    break;
  case 6:
    local_a0 = 0;
    dVar4 = 0.0;
    local_a8 = 0.0;
    if ((param_3 & 1) != 0) {
      uVar1 = local_48;
      FUN_00788488();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_a0;
      local_a0 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_a0 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        uVar3 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_m_uiCreateTime_0269d208);
        local_a8 = dVar4 - (double)(uVar3 & 0xffffffff);
      }
    }
    uVar3 = local_48;
    FUN_0078b914(local_48,PTR_s_onRevokeMsg__026a43d8);
    puVar2 = PTR___dispatch_main_q_02578680;
    if ((uVar3 & 1) == 0) {
      if ((((local_51 & 1) == 0) || (local_a0 == 0)) || (local_a8 <= 120.0)) {
        local_39 = 0;
      }
      else {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_39 = 1;
      }
    }
    else {
      local_39 = 1;
    }
    local_68 = 1;
    _objc_storeStrong(&local_a0,0);
    break;
  case 7:
    local_39 = 1;
    local_68 = 1;
    break;
  case 8:
    uVar3 = local_48;
    FUN_0078b914(local_48,PTR_s_onShowFTSIndexMenuItem__026a43c0);
    if ((uVar3 & 1) == 0) {
      uVar1 = local_48;
      FUN_0078b914(local_48,PTR_s_onFingertipSearch_026a43c8);
      uVar3 = local_48;
      if ((uVar1 & 1) == 0) {
        local_38 = &cf_d;
        local_30 = &cf_Search;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_38,2);
        _objc_retainAutoreleasedReturnValue();
        FUN_0078c210();
        local_39 = (byte)uVar3 & 1;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_68 = 1;
      }
      else {
        local_39 = 1;
        local_68 = 1;
      }
    }
    else {
      local_39 = 1;
      local_68 = 1;
    }
    break;
  case 9:
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,
               PTR_s_performRepeatEnhanceGestureActio_026a4360);
    puVar2 = PTR___dispatch_main_q_02578680;
    if ((uVar3 & 1) == 0) {
      local_39 = 0;
      local_68 = 1;
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_48;
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_0078cca0;
      local_80 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = uVar3;
      _dispatch_async(puVar2,&local_98);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_39 = 1;
      local_68 = 1;
      _objc_storeStrong(&local_78,0);
    }
    break;
  case 10:
    uVar3 = local_48;
    FUN_0078cce4();
    local_39 = (byte)uVar3 & 1;
    local_68 = 1;
    break;
  case 0xb:
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_tryPresentThemeBoxAirDropFromMes_026a4348,local_48)
    ;
    local_39 = (byte)puVar2 & 1;
    local_68 = 1;
    break;
  case 0xc:
    uVar3 = local_48;
    FUN_0078d130(local_48,param_3 & 1);
    local_39 = (byte)uVar3 & 1;
    local_68 = 1;
    break;
  default:
    local_39 = 0;
    local_68 = 1;
  }
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_39 & 1;
}

