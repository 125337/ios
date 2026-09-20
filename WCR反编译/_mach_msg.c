// _mach_msg @ 0221f33c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

mach_msg_return_t
_mach_msg(mach_msg_header_t *msg,mach_msg_option_t option,mach_msg_size_t send_size,
         mach_msg_size_t rcv_size,mach_port_name_t rcv_name,mach_msg_timeout_t timeout,
         mach_port_name_t notify)

{
  mach_msg_return_t mVar1;
  
  mVar1 = (mach_msg_return_t)msg;
                    /* WARNING: Could not recover jumptable at 0x0221f344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_msg_0264d178)(mVar1,option,send_size,rcv_size,rcv_name,timeout,notify);
  return mVar1;
}

