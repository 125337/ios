// _WCRAvatarIsMomentsProfileResponderScene @ 009391e4

byte _WCRAvatarIsMomentsProfileResponderScene(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar2;
  do {
    uVar2 = local_28;
    if (local_28 == 0) {
      local_11 = 0;
LAB_0093930c:
      _objc_storeStrong(&local_28);
      _objc_storeStrong(&local_20,0);
      return local_11 & 1;
    }
    pcVar1 = &cf_WCTimeLineViewController;
    _NSClassFromString(&cf_WCTimeLineViewController);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
    uVar3 = local_28;
    if ((uVar2 & 1) != 0) {
LAB_0093929c:
      local_11 = 1;
      goto LAB_0093930c;
    }
    pcVar1 = &cf_WCListViewController;
    _NSClassFromString(&cf_WCListViewController);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar1);
    if ((uVar3 & 1) != 0) goto LAB_0093929c;
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_28 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  } while( true );
}

