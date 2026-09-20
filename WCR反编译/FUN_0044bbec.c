// FUN_0044bbec @ 0044bbec

/* WARNING: Removing unreachable block (ram,0x0044be98) */

void FUN_0044bbec(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  dispatch_time_t dVar7;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ulong local_48;
  byte local_39;
  undefined4 local_38;
  long local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar4 == 1) {
    uVar5 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026e0398);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar5 == 0) {
      FUN_0045c290();
      uVar2 = local_18;
      uVar1 = DAT_026e0398;
      if ((uVar5 & 1) == 0) {
        local_38 = 1;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar2,uVar1,puVar6,1);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        local_39 = 0;
        uVar5 = local_18;
        FUN_0045e82c();
        if ((uVar5 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRHr_gN_ecdh_
                    );
        }
        local_38 = 0;
        dVar7 = _dispatch_time(0,500000000);
        puVar6 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_68 = PTR___NSConcreteStackBlock_02578660;
        local_60 = 0xc0000000;
        local_5c = 0;
        local_58 = FUN_0045e9a0;
        local_50 = &DAT_025797b0;
        local_48 = local_18;
        _dispatch_after(dVar7,puVar6,&local_68);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        if ((local_39 & 1) != 0) {
          _objc_exception_rethrow();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x44be88);
          (*pcVar3)();
        }
        local_38 = 0;
      }
    }
    else {
      local_38 = 1;
    }
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

