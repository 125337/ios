// ___Install_block_invoke_4.3077 @0x62034

void ___Install_block_invoke_4_3077(long param_1,undefined8 param_2,byte param_3)

{
  undefined8 local_60;
  undefined8 local_38;
  long local_30;
  byte local_21;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  local_30 = param_1;
  local_21 = param_3;
  _objc_getAssociatedObject(local_20,&_PanelKey);
  local_38 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_stop(local_38,local_60);
  _objc_msgSend_restoreChrome(local_38,local_60);
  (**(code **)(param_1 + 0x20))(local_20,"viewWillDisappear:",local_21 & 1);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_20,0);
  return;
}

