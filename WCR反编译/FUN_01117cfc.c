// FUN_01117cfc @ 01117cfc

long FUN_01117cfc(double param_1)

{
  long local_8;
  
  if (-40.0 <= param_1) {
    if (param_1 <= 40.0) {
      local_8 = (long)param_1;
    }
    else {
      local_8 = 0x4044000000000000;
    }
  }
  else {
    local_8 = -0x3fbc000000000000;
  }
  return local_8;
}

