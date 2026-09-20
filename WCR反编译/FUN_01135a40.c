// FUN_01135a40 @ 01135a40

byte FUN_01135a40(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  char *local_e8;
  bool local_99;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_68;
  undefined4 local_5c;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  byte local_31;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  uVar1 = local_40;
  FUN_01130f58();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_48;
  local_50 = uVar1;
  FUN_01130f58();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_50;
  local_58 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasSuffix__0269d018,&cf__chatroom);
  if ((((uVar1 & 1) == 0) ||
      (uVar1 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
      uVar1 == 0)) ||
     (uVar1 = local_58,
     (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasSuffix__0269d018,&cf__chatroom),
     (uVar1 & 1) != 0)) {
    local_31 = 0;
    local_5c = 1;
  }
  else {
    pcVar3 = "MMServiceCenter";
    _objc_getClass();
    pcVar4 = "CGroupMgr";
    local_68 = pcVar3;
    _objc_getClass();
    local_80 = pcVar4;
    if ((local_68 == (char *)0x0) || (pcVar4 == (char *)0x0)) {
      local_31 = 0;
      local_5c = 1;
    }
    else {
      local_e8 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_99 = local_e8 == (char *)0x0;
      local_88 = local_e8;
      if (local_99) {
        local_e8 = (char *)0x0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_getService__0269d170,local_80);
        _objc_retainAutoreleasedReturnValue();
        local_98 = local_e8;
      }
      local_99 = !local_99;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = local_e8;
      if (local_99) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      pcVar5 = &cf_InviteGroupMember_withMemberList_;
      _NSSelectorFromString();
      if ((local_90 == (char *)0x0) ||
         (pcVar4 = local_90,
         (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_respondsToSelector__026ca818,pcVar5),
         uVar1 = local_50, pcVar3 = local_90, ((ulong)pcVar4 & 1) == 0)) {
        local_31 = 0;
      }
      else {
        local_30 = local_58;
        puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_30,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar5,uVar1);
        local_31 = (byte)pcVar3 & 1;
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      local_5c = 1;
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_88,0);
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_31 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

