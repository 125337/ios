// FUN_00fbb918 @ 00fbb918

undefined4 FUN_00fbb918(undefined8 param_1,long param_2)

{
  long lVar1;
  long local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) || (param_2 == 0)) {
    local_14 = 0;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,param_2);
    local_14 = (undefined4)lVar1;
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

