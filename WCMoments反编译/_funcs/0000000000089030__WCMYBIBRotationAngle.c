// _WCMYBIBRotationAngle @0x89030

undefined1  [16] _WCMYBIBRotationAngle(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double local_c0;
  double local_b8;
  undefined8 local_80;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  double local_28;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &_WCMYBIBRotationAngle_onceToken;
  local_20 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_20,&___block_literal_global_6);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  uVar1 = _WCMYBIBRotationAngle_angleMap;
  _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_80,local_30);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForKeyedSubscript_(uVar1,local_80);
  local_40 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar1 = _WCMYBIBRotationAngle_angleMap;
  _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_80,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForKeyedSubscript_(uVar1,local_80);
  local_48 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  dVar3 = (double)_objc_msgSend_doubleValue(local_48,local_80);
  local_28 = (double)_objc_msgSend_doubleValue(local_40,local_80);
  local_28 = dVar3 - local_28;
  local_b8 = local_28;
  if (local_28 < 0.0) {
    local_b8 = -local_28;
  }
  if (3.141592653589793 < local_b8) {
    if (local_28 <= 0.0) {
      local_c0 = local_28 + 6.283185307179586;
    }
    else {
      local_c0 = local_28 - 6.283185307179586;
    }
    local_28 = local_c0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_28;
  return auVar4;
}

