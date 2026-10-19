// ___Install_block_invoke_3.3056 @0x61948

void ___Install_block_invoke_3_3056(long param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_postNotificationName_object_
            (uVar1,local_30,&cf_WCMomentsTimelineChanged,*(undefined8 *)(param_1 + 0x20));
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

