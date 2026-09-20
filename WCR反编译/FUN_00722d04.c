// FUN_00722d04 @ 00722d04

void FUN_00722d04(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    lVar2 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_0232427b);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    lVar1 = local_18;
    if (lVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar1,&DAT_0232427b,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      FUN_00720de4(&cf_com_qimiao_wcrefine_capture_preview_did_disappear,local_18);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

