// scheduleAutoCapture @ 00fe42e8

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x10 bytes */

void WCRefineIconNameCaptureSupport::scheduleAutoCapture(ID param_1,SEL param_2)

{
  dispatch_object_t dVar1;
  undefined *puVar2;
  dispatch_queue_t queue;
  dispatch_object_t dVar3;
  dispatch_time_t start;
  
  _WCRefineIconNameCaptureIsLiveArmedFast();
  if ((param_1 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    queue = (dispatch_queue_t)PTR___dispatch_main_q_02578680;
    if (((ulong)puVar2 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(queue);
    }
    else {
      if (DAT_028e3088._os_obj == (_os_object_s *)0x0) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        dVar3._os_obj =
             (_os_object_s *)
             _dispatch_source_create
                       ((dispatch_source_type_t)PTR___dispatch_source_type_timer_02578698,0,0,queue)
        ;
        dVar1 = DAT_028e3088;
        DAT_028e3088 = (dispatch_object_t)(dispatch_object_t)dVar3._os_obj;
        (*(code *)PTR__objc_release_02578630)(dVar1._os_obj);
        (*(code *)PTR__objc_release_02578630)(queue);
        _dispatch_source_set_event_handler
                  (DAT_028e3088._os_obj,&PTR___NSConcreteGlobalBlock_02583e88);
        _dispatch_resume(DAT_028e3088);
      }
      dVar1 = DAT_028e3088;
      start = _dispatch_time(0,280000000);
      _dispatch_source_set_timer((dispatch_source_t)dVar1._os_obj,start,0xffffffffffffffff,40000000)
      ;
    }
  }
  return;
}

