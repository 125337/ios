// FUN_00562774 @ 00562774

void FUN_00562774(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_c8;
  ulong local_88;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_18;
  FUN_00566368(local_18,&cf_commentViewForDelete);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_tag_026cab98)
  ;
  if ((uVar2 & 1) == 0) {
    local_88 = 0xffffffffffffffff;
  }
  else {
    local_88 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tag_026cab98);
  }
  local_48 = local_88;
  uVar3 = local_18;
  FUN_00566368(local_18,&cf_arrCommentList);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  uVar2 = local_48;
  if (((uVar3 & 1) != 0) && (-1 < (long)local_48)) {
    uVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    if ((long)uVar2 < (long)uVar3) {
      local_c8 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_60 = local_c8;
      goto LAB_00562970;
    }
  }
  local_c8 = 0;
LAB_00562970:
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_c8;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*DAT_028cb4a8)(local_18,local_20,local_28);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

