// FUN_015def38 @ 015def38

void FUN_015def38(Bytef *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *local_80d0;
  int local_80bc;
  undefined *local_80b8;
  z_stream local_80b0;
  long local_8040;
  Bytef *local_8038;
  undefined *local_8030;
  Bytef aBStack_8028 [32768];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_8040 = param_2;
  local_8038 = param_1;
  if ((param_1 == (Bytef *)0x0) || (param_2 == 0)) {
    local_8030 = (undefined *)0x0;
  }
  else {
    _memset(&local_80b0,0,0x70);
    iVar1 = _inflateInit2_(&local_80b0,0x1f,"1.2.12",0x70);
    if (iVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableData_026ce660;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_dataWithCapacity__026a9df0,
                 local_8040 << 3);
      _objc_retainAutoreleasedReturnValue();
      local_80b0.next_in = local_8038;
      local_80b0.avail_in = (uInt)local_8040;
      local_80bc = 0;
      local_80b8 = puVar2;
      while (local_80bc == 0) {
        local_80b0.next_out = aBStack_8028;
        local_80b0.avail_out = 0x8000;
        local_80bc = _inflate(&local_80b0,0);
        if (((local_80bc == -2) || (local_80bc == -3)) || (local_80bc == -4)) {
          _inflateEnd(&local_80b0);
          local_8030 = (undefined *)0x0;
          goto LAB_015df104;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80b8,PTR_s_appendBytes_length__026a9628,aBStack_8028,
                   0x8000 - (ulong)local_80b0.avail_out);
      }
      _inflateEnd(&local_80b0);
      if (local_80bc == 1) {
        local_80d0 = local_80b8;
      }
      else {
        local_80d0 = (undefined *)0x0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_8030 = local_80d0;
LAB_015df104:
      _objc_storeStrong(&local_80b8,0);
    }
    else {
      local_8030 = (undefined *)0x0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_8030);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

