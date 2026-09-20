// FUN_02206cf8 @ 02206cf8

undefined8 FUN_02206cf8(char param_1)

{
  undefined8 local_18;
  
  if (param_1 == '\0') {
    local_18 = 0;
  }
  else if (param_1 == '\x01') {
    local_18 = 1;
  }
  else if (param_1 == '\x02') {
    local_18 = 2;
  }
  else {
    local_18 = 3;
  }
  return local_18;
}

