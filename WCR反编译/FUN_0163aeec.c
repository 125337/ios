// FUN_0163aeec @ 0163aeec

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0163aeec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_18;
  
  if (DAT_028e3cc8 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_addObserverForName_object_queue__026ca4b0,
               &cf_com_qimiao_wcrefine_will_take_screenshot,0,0,
               &PTR___NSConcreteGlobalBlock_02587bc0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028e3cc8;
    DAT_028e3cc8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_addObserverForName_object_queue__026ca4b0,
               &cf_com_qimiao_wcrefine_did_take_screenshot,0,0,&PTR___NSConcreteGlobalBlock_02587c00
              );
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028e3cd0;
    DAT_028e3cd0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_addObserverForName_object_queue__026ca4b0,
               *(undefined8 *)PTR__UIApplicationUserDidTakeScreenshotNotification_025780e0,0,0,
               &PTR___NSConcreteGlobalBlock_02587c40);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028e3cf0;
    DAT_028e3cf0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_addObserverForName_object_queue__026ca4b0,
               &cf_com_qimiao_wcrefine_send_captrue_did_show,0,0,
               &PTR___NSConcreteGlobalBlock_02587c60);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028e3cf8;
    DAT_028e3cf8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_addObserverForName_object_queue__026ca4b0,
               &cf_com_qimiao_wcrefine_send_captrue_did_hide,0,0,
               &PTR___NSConcreteGlobalBlock_02587ca0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028e3d00;
    DAT_028e3d00 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_addObserverForName_object_queue__026ca4b0,
               &cf_com_qimiao_wcrefine_capture_preview_did_appear,0,0,
               &PTR___NSConcreteGlobalBlock_02587ce0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028e3d08;
    DAT_028e3d08 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_addObserverForName_object_queue__026ca4b0,
               &cf_com_qimiao_wcrefine_capture_preview_did_disappear,0,0,
               &PTR___NSConcreteGlobalBlock_02587d00);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028e3d10;
    DAT_028e3d10 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_addObserverForName_object_queue__026ca4b0,
               *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_025780b0,0,0,
               &PTR___NSConcreteGlobalBlock_02587d40);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028e3d18;
    DAT_028e3d18 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_18,0);
  }
  return;
}

