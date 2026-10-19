// _Text @0xa564

void _Text(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  cfstringStruct *local_28;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = local_18;
  uVar2 = _objc_opt_class(&_OBJC_CLASS___NSString);
  uVar3 = _objc_opt_isKindOfClass(pcVar1,uVar2);
  if ((uVar3 & 1) == 0) {
    local_28 = &cf___;
  }
  else {
    local_28 = local_18;
  }
  uVar2 = (*(code *)PTR__objc_retain_00110460)(local_28);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

