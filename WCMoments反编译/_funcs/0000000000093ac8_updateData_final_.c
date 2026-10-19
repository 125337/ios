// updateData:final: @0x93ac8

/* Function Stack Size: 0x1c bytes */

bool WCMYYImageDecoder::updateData_final_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  byte bVar1;
  undefined8 local_48;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _pthread_mutex_lock((pthread_mutex_t *)(local_18 + 8));
  bVar1 = _objc_msgSend__updateData_final_(local_18,local_48,local_28,param_4 & 1);
  _pthread_mutex_unlock((pthread_mutex_t *)(local_18 + 8));
  _objc_storeStrong(&local_28,0);
  return bVar1 & 1;
}

