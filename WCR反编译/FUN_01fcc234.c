// FUN_01fcc234 @ 01fcc234

byte FUN_01fcc234(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  lVar2 = local_20;
  if (lVar1 == 0) {
    local_11 = false;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_fileSystemRepresentation_026a95c0);
    local_11 = false;
    if (lVar2 != 0) {
      _access(lVar2,0);
      local_11 = (int)lVar2 == 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

