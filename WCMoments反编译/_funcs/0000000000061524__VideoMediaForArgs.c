// _VideoMediaForArgs @0x61524

void _VideoMediaForArgs(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  _Call(local_20,&cf_userInfo,PTR____NSArray0__struct_00110718);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  uVar3 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);
  uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    local_48 = 0;
  }
  else {
    _objc_msgSend_objectForKeyedSubscript_(local_28,local_50,&cf_WCMediaItem);
    local_48 = _objc_retainAutoreleasedReturnValue();
    local_30 = local_48;
  }
  local_18 = (*(code *)PTR__objc_retain_00110460)(local_48);
  if (!bVar1) {
    (*(code *)PTR__objc_release_00110458)(local_30);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

