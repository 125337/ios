// _WCRefineProfileBgApplyWarehouseTab @ 01cf5098

void _WCRefineProfileBgApplyWarehouseTab(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_profileBgSourceMode_026a8d78);
  if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    _WCRefineProfileBgPersistHTMLLayoutForWork(0);
  }
  if (local_18 < 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setProfileBgRegularMediaKind__026c3ac0);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setProfileBgSourceMode__026c3908,0);
  }
  else if (local_18 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setProfileBgRegularMediaKind__026c3ac0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setProfileBgSourceMode__026c3908,0);
  }
  else if (local_18 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setProfileBgSourceMode__026c3908,1);
    _WCRefineProfileBgEnableHideForHTMLMode();
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_profileBgHTMLWorkId_026a8d88);
    _objc_retainAutoreleasedReturnValue();
    _WCRefineProfileBgApplyHTMLLayoutForWork();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setProfileBgSourceMode__026c3908,2);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

