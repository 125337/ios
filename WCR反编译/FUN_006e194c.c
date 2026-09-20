// FUN_006e194c @ 006e194c

undefined8 FUN_006e194c(undefined8 param_1,long param_2)

{
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) || (param_2 == 0)) {
    local_18 = 0;
  }
  else {
    _ivar_getOffset();
    if (param_2 < 8) {
      local_18 = 0;
    }
    else {
      local_18 = *(undefined8 *)(local_20 + param_2);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

