// FUN_0084d910 @ 0084d910

void FUN_0084d910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  if ((local_28 != 0) && (local_30 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    lVar2 = local_28;
    uVar1 = DAT_026f48c0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar2,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar2 = local_28;
    uVar1 = DAT_026f48c8;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar2,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_setAssociatedObject(local_28,DAT_026f48d0,0,1);
    lVar2 = local_28;
    uVar1 = DAT_026f48d8;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar2,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

