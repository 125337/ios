// FUN_0039d49c @ 0039d49c

undefined8 FUN_0039d49c(undefined8 param_1,uint param_2)

{
  undefined8 local_18;
  
  FUN_003c9db4();
  if ((param_2 & 1) == 0) {
    local_18 = 0x4051000000000000;
  }
  else {
    FUN_003cb0c8();
    local_18 = param_1;
  }
  return local_18;
}

