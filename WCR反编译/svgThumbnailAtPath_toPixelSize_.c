// svgThumbnailAtPath:toPixelSize: @ 0197b40c

/* Function Stack Size: 0x28 bytes */

ID __thiscall
WCRFileThumbnailManager::svgThumbnailAtPath_toPixelSize_
          (WCRFileThumbnailManager *this,ID param_1,SEL param_2,ID param_3,CGSize param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  char *local_58;
  undefined4 local_4c;
  char *local_48;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  undefined8 local_28;
  undefined8 local_20;
  char *local_18;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  local_28 = in_d0;
  local_20 = in_d1;
  _objc_storeStrong(&local_40,param_3,param_3,param_4.field0_0x0,param_4.field1_0x8);
  pcVar1 = "WCSVGImage";
  _objc_getClass();
  local_48 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_respondsToSelector__026ca818,
             PTR_s_imageWithContentsOfFile_size_col_026b1a70);
  if (((ulong)pcVar1 & 1) == 0) {
    local_18 = (char *)0x0;
    local_4c = 1;
  }
  else {
    local_58 = (char *)0x0;
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,local_20,0x3ff0000000000000,0,local_48,
               PTR_s_imageWithContentsOfFile_size_col_026b1a70,local_40,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_58;
    local_58 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_4c = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

