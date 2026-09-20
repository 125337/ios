// FUN_00413ecc @ 00413ecc

byte FUN_00413ecc(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  char *local_140;
  undefined *local_b8;
  cfstringStruct *local_b0;
  bool local_a1;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  ulong local_78;
  undefined4 local_6c;
  ulong local_68 [3];
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
  uVar2 = local_40;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = local_48;
  local_50 = uVar2;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_50;
  local_68[0] = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasSuffix__0269d018,&cf__chatroom);
  if ((((uVar2 & 1) == 0) ||
      (uVar2 = local_68[0], (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_length_0269cca0)
      , uVar2 == 0)) ||
     (uVar2 = local_68[0],
     (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_hasSuffix__0269d018,&cf__chatroom),
     (uVar2 & 1) != 0)) {
    local_31 = 0;
    local_6c = 1;
    goto LAB_0041448c;
  }
  FUN_0040c4c4();
  _objc_retainAutoreleasedReturnValue();
  local_78 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  uVar7 = 0;
  if (uVar2 == 0) {
LAB_004140f8:
    pcVar3 = "MMServiceCenter";
    _objc_getClass(uVar7);
    pcVar4 = "CGroupMgr";
    local_80 = pcVar3;
    _objc_getClass();
    local_88 = pcVar4;
    if ((local_80 == (char *)0x0) || (pcVar4 == (char *)0x0)) {
      local_31 = 0;
      local_6c = 1;
    }
    else {
      local_140 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_a1 = false;
      bVar1 = local_140 == (char *)0x0;
      local_90 = local_140;
      if (bVar1) {
        local_140 = (char *)0x0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_getService__0269d170,local_88);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = local_140;
      }
      local_a1 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = local_140;
      if ((local_a1 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      pcVar5 = &cf_InviteGroupMember_withMemberList_;
      _NSSelectorFromString();
      local_b0 = pcVar5;
      if ((local_98 == (char *)0x0) ||
         (pcVar3 = local_98,
         (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_respondsToSelector__026ca818,pcVar5),
         ((ulong)pcVar3 & 1) == 0)) {
        local_31 = 0;
        local_6c = 1;
      }
      else {
        local_30 = local_68[0];
        puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_30,1);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_98;
        local_b8 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,local_b0,local_50,puVar6);
        local_31 = (byte)pcVar3 & 1;
        local_6c = 1;
        _objc_storeStrong(&local_b8,0);
      }
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_90,0);
    }
  }
  else {
    uVar2 = local_68[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_isEqualToString__0269ccc8,local_78);
    uVar7 = uVar2 & 0xffffffff;
    if ((uVar2 & 1) == 0) goto LAB_004140f8;
    local_31 = 0;
    local_6c = 1;
  }
  _objc_storeStrong(&local_78,0);
LAB_0041448c:
  _objc_storeStrong(local_68);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_31 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

