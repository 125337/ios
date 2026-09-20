// FUN_01a82e30 @ 01a82e30

void FUN_01a82e30(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_selectedSegmentIndex_0269e998);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,uVar1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_contentMode);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_20,0);
  return;
}

