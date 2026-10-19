// _WCMYYImageTypeFromUTType @0x929a8

undefined8 _WCMYYImageTypeFromUTType(long param_1)

{
  undefined8 local_48;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &_WCMYYImageTypeFromUTType_onceToken;
  local_20 = 0;
  local_30 = param_1;
  _objc_storeStrong(&local_20,&___block_literal_global_4);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  if (local_30 == 0) {
    local_28 = 0;
  }
  else {
    _objc_msgSend_objectForKeyedSubscript_(_WCMYYImageTypeFromUTType_dic,local_48,local_30);
    local_38 = _objc_retainAutoreleasedReturnValue();
    local_28 = _objc_msgSend_unsignedIntegerValue(local_38,local_48);
    _objc_storeStrong(&local_38,0);
  }
  return local_28;
}

