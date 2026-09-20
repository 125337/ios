// FUN_0153a74c @ 0153a74c

void FUN_0153a74c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 local_38;
  
  DAT_028e3988 = 1;
  _objc_storeWeak(&DAT_028e3908,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(ulong *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(undefined8 *)(param_1 + 0x28);
  }
  _objc_storeWeak(&DAT_028e3910,local_38);
  _objc_storeStrong(&DAT_028e3918,*(undefined8 *)(param_1 + 0x30));
  DAT_028e3990 = 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_presentProfileCardForContact_sou_0269e720,
             *(undefined8 *)(param_1 + 0x38),0,0,0);
  return;
}

