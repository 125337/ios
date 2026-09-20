// FUN_0031918c @ 0031918c

uint FUN_0031918c(undefined8 param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  uint local_3c;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_0030fd54();
  _objc_retainAutoreleasedReturnValue();
  local_3c = 0;
  local_20 = lVar1;
  if (lVar1 != 0) {
    pcVar2 = &cf_MainFrameTableView;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_isKindOfClass__0269cd68,pcVar2);
    local_3c = (uint)lVar1;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_3c & 1;
}

