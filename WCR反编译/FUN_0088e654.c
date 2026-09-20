// FUN_0088e654 @ 0088e654

void FUN_0088e654(void)

{
  bool bVar1;
  char *pcVar2;
  char *local_98;
  char *local_88;
  char *local_48;
  char *local_20;
  char *local_18;
  
  local_98 = "MMUILabel";
  _objc_getClass();
  bVar1 = local_98 == (char *)0x0;
  local_18 = local_98;
  if (bVar1) {
    local_98 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18),local_98,
               PTR_s_initWithFrame__026ca6e8);
    local_88 = local_98;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    local_48 = local_98;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_98;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setText__026caa88,&cf___);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setHidden__026ca970,1);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_20,PTR_s_setAlpha__026ca860);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setUserInteractionEnabled__026caad8,0);
  pcVar2 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(pcVar2);
  return;
}

