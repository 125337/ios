// md5FromEmoticonWrap: @ 00f29e64

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonGroupStore::md5FromEmoticonWrap_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_b0 [2];
  cfstringStruct *local_a0 [2];
  cfstringStruct *local_90 [3];
  cfstringStruct *local_78;
  cfstringStruct *local_70 [4];
  cfstringStruct *local_50;
  uint local_44;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  if (local_40 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf___;
    local_44 = 1;
    goto LAB_00f2a6d0;
  }
  local_50 = (cfstringStruct *)0x0;
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_m_emojiInfo_026a3d98);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_emojiInfo_026a3d98);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_50;
    local_50 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if (local_50 == (cfstringStruct *)0x0) {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_m_emojiInfo);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_50;
    local_50 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if (local_50 == (cfstringStruct *)0x0) {
LAB_00f2a274:
    local_44 = 0;
  }
  else {
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_md5_026a3da0);
    if (((ulong)pcVar2 & 1) == 0) {
LAB_00f2a128:
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_valueForKey__0269d128,&cf_md5);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_00f29cf4();
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar3 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
      pcVar2 = local_78;
      bVar1 = pcVar3 != (cfstringStruct *)0x0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar2;
      }
      local_44 = (uint)bVar1;
      _objc_storeStrong(bVar1,&local_78,0);
      if (local_44 == 0) goto LAB_00f2a274;
    }
    else {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_md5_026a3da0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_00f29cf4();
      _objc_retainAutoreleasedReturnValue();
      local_70[0] = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar3 = local_70[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_length_0269cca0);
      pcVar2 = local_70[0];
      bVar1 = pcVar3 != (cfstringStruct *)0x0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar2;
      }
      local_44 = (uint)bVar1;
      _objc_storeStrong(bVar1,local_70,0);
      if (local_44 == 0) goto LAB_00f2a128;
    }
  }
  _objc_storeStrong(&local_50,0);
  if (local_44 == 0) {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_md5_026a3da0);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_md5_026a3da0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_00f29cf4();
      _objc_retainAutoreleasedReturnValue();
      local_90[0] = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar3 = local_90[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_90[0],PTR_s_length_0269cca0);
      pcVar2 = local_90[0];
      bVar1 = pcVar3 != (cfstringStruct *)0x0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar2;
      }
      local_44 = (uint)bVar1;
      _objc_storeStrong(bVar1,local_90,0);
      if (local_44 != 0) goto LAB_00f2a6d0;
    }
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_md5);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_00f29cf4();
    _objc_retainAutoreleasedReturnValue();
    local_a0[0] = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar3 = local_a0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_a0[0],PTR_s_length_0269cca0);
    pcVar2 = local_a0[0];
    bVar1 = pcVar3 != (cfstringStruct *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
    }
    local_44 = (uint)bVar1;
    _objc_storeStrong(bVar1,local_a0,0);
    if (local_44 == 0) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_m_md5);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_00f29cf4();
      _objc_retainAutoreleasedReturnValue();
      local_b0[0] = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar3 = local_b0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_b0[0],PTR_s_length_0269cca0);
      pcVar2 = local_b0[0];
      bVar1 = pcVar3 != (cfstringStruct *)0x0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar2;
      }
      local_44 = (uint)bVar1;
      _objc_storeStrong(bVar1,local_b0,0);
      if (local_44 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &::cf___;
        local_44 = 1;
      }
    }
  }
LAB_00f2a6d0:
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

