// FUN_01a9e7c8 @ 01a9e7c8

void FUN_01a9e7c8(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long local_18;
  
  plVar1 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar1,param_1);
  if (local_18 != 0) {
    FUN_01ab96fc();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)();
    FUN_01ab96fc();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_release_02578630)();
    FUN_01ab977c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textLabel_0269fd00);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_release_02578630)();
    FUN_01ab97fc();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_detailTextLabel_0269fd08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_release_02578630)(plVar1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

