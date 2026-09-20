// FUN_00780d74 @ 00780d74

void FUN_00780d74(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  FUN_0077b5c0();
  if (((uVar1 & 1) != 0) &&
     (uVar1 = param_1,
     (*(code *)PTR__objc_msgSend_02578628)
               (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_onShowMsgReplyMenuItem__026a4380),
     (uVar1 & 1) != 0)) {
    uVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrefine_isMyMessage_026a42e0);
    puVar2 = PTR___dispatch_main_q_02578680;
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR___dispatch_main_q_02578680;
      if (((ulong)puVar3 & 1) == 0) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_onDelete__026a43d0);
        puVar2 = PTR___dispatch_main_q_02578680;
        if ((param_1 & 1) != 0) {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          _dispatch_async();
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
      }
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  return;
}

