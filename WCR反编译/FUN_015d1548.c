// FUN_015d1548 @ 015d1548

byte FUN_015d1548(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  byte local_64;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = "MZipUtil";
  _objc_getClass();
  pcVar2 = &cf_UnZipFile_toPath_;
  _NSSelectorFromString();
  if (pcVar1 != (char *)0x0) {
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,pcVar2);
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,pcVar2,local_20,local_28);
      if (((ulong)pcVar1 & 1) != 0) {
        local_11 = 1;
        goto LAB_015d16ac;
      }
    }
  }
  pcVar1 = "SSZipArchive";
  _objc_getClass();
  pcVar2 = &cf_unzipFileAtPath_toDestination_;
  _NSSelectorFromString();
  local_64 = 0;
  if (pcVar1 != (char *)0x0) {
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,pcVar2);
    local_64 = 0;
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,pcVar2,local_20,local_28);
      local_64 = (byte)pcVar1;
    }
  }
  local_11 = local_64 & 1;
LAB_015d16ac:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

