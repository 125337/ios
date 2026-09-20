// _thread_get_state @ 0221fa8c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_thread_get_state(thread_act_t target_act,thread_state_flavor_t flavor,thread_state_t old_state,
                 mach_msg_type_number_t *old_stateCnt)

{
                    /* WARNING: Could not recover jumptable at 0x0221fa94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__thread_get_state_0264d658)(target_act,flavor);
  return target_act;
}

