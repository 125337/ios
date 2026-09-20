// toggleViewMode @ 01984fac

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::toggleViewMode(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRFileManagerState_026cf1c8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_viewMode_026ba3d0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setViewMode__026ba400,
             puVar1 != (undefined1 *)((long)&MACH_HEADER.magic + 1));
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setupNavBar_026ba288);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectMode_026ba2a8);
  if ((IVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setupSelectNavBar_026ba2b0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_applyViewModeVisibility_026ba2a0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadVisibleViews_026ba408);
  _objc_storeStrong(&local_28,0);
  return;
}

