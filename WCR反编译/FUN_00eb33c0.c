// FUN_00eb33c0 @ 00eb33c0

/* WARNING: Removing unreachable block (ram,0x00eb3448) */

void FUN_00eb33c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
             &cf_person_crop_circle_fill);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

