// FUN_01c3adf0 @ 01c3adf0

void FUN_01c3adf0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  char *local_140;
  char *local_90;
  char *local_70 [3];
  char *local_58;
  char *local_50;
  long local_48;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_40 = 0;
  local_38 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = (char *)0x0;
  pcVar4 = "MMServiceCenter";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = "MMThemeManager";
  local_58 = pcVar4;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_getService__0269d170,pcVar5);
  _objc_retainAutoreleasedReturnValue();
  local_70[0] = pcVar4;
  if (((pcVar4 != (char *)0x0) && (0.0 < local_38)) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_respondsToSelector__026ca818,
                 PTR_s_svgImageNamed_size_color_alpha__026a3d18), uVar3 = local_30,
     pcVar5 = local_70[0], puVar2 = PTR_s_svgImageNamed_size_color_alpha__026a3d18,
     ((ulong)pcVar4 & 1) != 0)) {
    dVar7 = local_38;
    dVar8 = local_38;
    FUN_01c38978();
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar7,dVar8,0x3ff0000000000000,pcVar5,puVar2,uVar3,local_40);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_50;
    local_50 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  if (((local_50 == (char *)0x0) && (local_70[0] != (char *)0x0)) &&
     (pcVar4 = local_70[0],
     (*(code *)PTR__objc_msgSend_02578628)
               (local_70[0],PTR_s_respondsToSelector__026ca818,PTR_s_svgImageNamed_color__0269f760),
     ((ulong)pcVar4 & 1) != 0)) {
    pcVar5 = local_70[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70[0],PTR_s_svgImageNamed_color__0269f760,local_30,local_40);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_50;
    local_50 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  _objc_storeStrong(local_70);
  _objc_storeStrong(&local_58,0);
  if ((local_50 == (char *)0x0) &&
     (lVar6 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     lVar6 != 0)) {
    pcVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,local_48);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_50;
    local_50 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  bVar1 = local_50 == (char *)0x0;
  if (bVar1) {
    local_140 = (char *)0x0;
  }
  else {
    local_140 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_imageWithRenderingMode__026ca690,2);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_140;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_140;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

