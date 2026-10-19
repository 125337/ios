// __YYDeviceMemoryFree @0xa124c

long __YYDeviceMemoryFree(void)

{
  kern_return_t kVar1;
  uint local_64 [15];
  vm_size_t local_28;
  mach_msg_type_number_t local_20;
  host_t local_1c;
  long local_18;
  
  local_1c = _mach_host_self();
  local_20 = 0xf;
  kVar1 = _host_page_size(local_1c,&local_28);
  if (kVar1 == 0) {
    kVar1 = _host_statistics(local_1c,2,(host_info_t)local_64,&local_20);
    if (kVar1 == 0) {
      local_18 = local_64[0] * local_28;
    }
    else {
      local_18 = -1;
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}

