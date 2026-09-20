// FUN_00935908 @ 00935908

void FUN_00935908(uint *param_1)

{
  mach_msg_header_t local_3c;
  undefined8 local_24;
  undefined4 local_1c;
  uint *local_18;
  
  local_18 = param_1;
  _memset(&local_3c,0,0x24);
  local_3c.msgh_bits = *local_18 & 0x1f;
  local_3c.msgh_size = 0x24;
  local_3c.msgh_remote_port = local_18[2];
  local_3c.msgh_local_port = 0;
  local_3c.msgh_id = local_18[5] + 100;
  local_24 = *(undefined8 *)PTR__NDR_record_02578650;
  local_1c = 5;
  _mach_msg(&local_3c,1,0x24,0,0,0,0);
  return;
}

