// FUN_002f12dc @ 002f12dc

void FUN_002f12dc(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long local_48;
  undefined1 local_3d;
  byte local_29;
  undefined *local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c99f8)(param_1,param_2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_gestureScreenshotEnabled_026a1ed8);
  local_29 = (byte)puVar2;
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_gestureScreenshotTitleSwipeEnabl_026a1f68);
  local_3d = SUB81(puVar2,0);
  if (((local_29 & 1) == 0) || (((ulong)puVar2 & 1) == 0)) {
    lVar3 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026dfda0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar3;
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeGestureRecognizer__026ca808,lVar3);
    }
    _objc_setAssociatedObject(local_18,DAT_026dfda0,0,1);
    _objc_storeStrong(&local_48,0);
  }
  else {
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    if (lVar3 != 0) {
      lVar4 = local_18;
      _objc_getAssociatedObject(local_18,DAT_026dfda0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar4 == 0;
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    (*(code *)PTR__objc_release_02578630)(lVar3);
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcrefine_setupGlobalTitleSwipeGe_026a1eb8);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

