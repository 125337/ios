// allMembersForScope: @ 01a99a24

/* Function Stack Size: 0x18 bytes */

ID WCRefineGroupDataProvider::allMembersForScope_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_a8;
  ulong local_80;
  undefined *local_78;
  ID local_70;
  unsigned_long_long local_68;
  SEL local_60;
  ID local_58;
  ulong auStack_50 [7];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = param_3;
  local_60 = param_2;
  local_58 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_membersByScope_026bda78);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_70 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar1;
  _memcpy(auStack_50,&DAT_02339ed0,0x38);
  for (local_80 = 0; IVar3 = local_70, puVar1 = local_78, local_80 < 7; local_80 = local_80 + 1) {
    if ((local_68 & auStack_50[local_80]) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                 auStack_50[local_80]);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = IVar3;
      if (IVar3 == 0) {
        local_a8 = *(ID *)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540,local_a8);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

