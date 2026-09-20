// WCRefine_clearSession_select @ 0016c3d8

/* Function Stack Size: 0x10 bytes */

void WCRefineClearSessionHook::WCRefine_clearSession_select(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ID local_88;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [12];
  uint local_34;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((param_1 & 1) == 0) {
    local_88 = 0;
  }
  else {
    local_88 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_88;
  puVar3 = PTR_WCRefineClearSessionHook_026ce348;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineClearSessionHook_026ce348,PTR_s_presenterFromHost__0269f7f8,local_88);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  if (puVar3 != (undefined *)0x0) {
    _objc_initWeak(auStack_40,puVar3);
    puVar2 = local_30;
    puVar1 = PTR_WCRefineSessionPicker_026ce350;
    uVar4 = *(undefined8 *)PTR____NSArray0___02578280;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_0016c5e8;
    local_50 = &DAT_0257a7d0;
    _objc_copyWeak(auStack_48,auStack_40);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_presentFromViewController_title__0269f880,puVar2,&cf_bO,uVar4,&local_68)
    ;
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_40);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
  }
  local_34 = (uint)(puVar3 == (undefined *)0x0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

