// FUN_00436ffc @ 00436ffc

long FUN_00436ffc(undefined8 param_1,char *param_2)

{
  bool bVar1;
  long lVar2;
  ulong local_120;
  long local_108;
  ulong local_100;
  long local_e8;
  long local_e0;
  char *local_d8 [2];
  char local_c8 [160];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_1);
  if ((local_e8 == 0) || (param_2 == (char *)0x0)) {
    local_e0 = 0;
  }
  else {
    local_d8[1] = (char *)0x0;
    if (*param_2 != '_') {
      local_c8[0] = '_';
      for (local_100 = 0; param_2[local_100] != '\0' && local_100 < 0x9d; local_100 = local_100 + 1)
      {
        local_c8[local_100 + 1] = param_2[local_100];
      }
      local_d8[1] = local_c8;
      local_d8[1][local_100 + 1] = '\0';
    }
    local_108 = local_e8;
    local_d8[0] = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_class_0269cd60);
    while (local_108 != 0) {
      local_120 = 0;
      while( true ) {
        bVar1 = false;
        if (local_120 < 2) {
          bVar1 = local_d8[local_120] != (char *)0x0;
        }
        if (!bVar1) break;
        lVar2 = local_108;
        _class_getInstanceVariable(local_108,local_d8[local_120]);
        local_e0 = lVar2;
        if (lVar2 != 0) goto LAB_0043724c;
        local_120 = local_120 + 1;
      }
      _class_getSuperclass();
    }
    local_e0 = 0;
  }
LAB_0043724c:
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_e0;
}

