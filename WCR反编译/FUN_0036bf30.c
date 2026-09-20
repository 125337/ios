// FUN_0036bf30 @ 0036bf30

/* WARNING: Removing unreachable block (ram,0x0036c060) */

void FUN_0036bf30(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_28;
  uint local_1c;
  long local_18;
  
  uVar2 = DAT_02323c88;
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = local_18 != 0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSelectionStyle__0269e5f8,3);
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_28 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setUserInteractionEnabled__026caad8,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setSelectedBackgroundView__0269e600,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bringSubviewToFront__026ca550,local_28);
    _objc_storeStrong(&local_28,0);
  }
  local_1c = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

