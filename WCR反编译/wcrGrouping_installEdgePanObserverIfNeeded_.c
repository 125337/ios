// wcrGrouping_installEdgePanObserverIfNeeded: @ 00376918

/* Function Stack Size: 0x18 bytes */

void WCRefineHomeSessionGroupingHook::wcrGrouping_installEdgePanObserverIfNeeded_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_48;
  undefined *local_40;
  uint local_38;
  undefined1 local_31;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_31 = 0;
  bVar2 = true;
  uVar1 = local_28 != 0;
  if ((bool)uVar1) {
    lVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028ca0fb);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar3 != 0;
    local_31 = uVar1;
    local_30 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  if (!bVar2) {
    puVar4 = PTR_WCRGroupingEdgePanObserver_026ce5b0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar5 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
    local_40 = puVar4;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setCancelsTouchesInView__026ca8b8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDelaysTouchesBegan__026a1af0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDelaysTouchesEnded__026a1af8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDelegate__026ca910,local_40);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addGestureRecognizer__026ca4a8,local_48);
    _objc_setAssociatedObject(local_28,&DAT_028ca0fb,local_40,1);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  local_38 = (uint)bVar2;
  _objc_storeStrong(&local_28,0);
  return;
}

