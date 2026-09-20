// FUN_0101227c @ 0101227c

void FUN_0101227c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
               PTR_s_setObject_forKeyedSubscript__0269d248,local_20,&cf_livePhotoVideoPath);
  }
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x28));
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

