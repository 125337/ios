// _WCRefineInstallPluginHubHideGesture @ 01781568

void _WCRefineInstallPluginHubHideGesture(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_38;
  undefined *local_30;
  uint local_28;
  undefined1 local_21;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_21 = 0;
  bVar2 = true;
  uVar1 = local_18 != 0;
  if ((bool)uVar1) {
    lVar3 = local_18;
    _objc_getAssociatedObject(local_18,DAT_028c6230);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar3 != 0;
    local_21 = uVar1;
    local_20 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    uVar1 = local_21;
  }
  local_21 = uVar1;
  if (!bVar2) {
    puVar4 = PTR_WCRefinePluginHubHideGestureTarget_026cef98;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginHubHideGestureTarget_026cef98,PTR_s_new_0269d288);
    local_30 = puVar4;
    _objc_setAssociatedObject(local_18,DAT_028c6230,puVar4,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setUserInteractionEnabled__026caad8,1);
    puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,puVar4,PTR_s_setMinimumPressDuration__026ca9c8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addGestureRecognizer__026ca4a8,local_38);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  local_28 = (uint)bVar2;
  _objc_storeStrong(&local_18,0);
  return;
}

