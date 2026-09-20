// FUN_01630f58 @ 01630f58

void FUN_01630f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar3 = "WCSVGImage";
  _objc_getClass();
  puVar1 = PTR_s_imageWithContentsOfFile_size_col_026b1a70;
  if ((pcVar3 == (char *)0x0) ||
     (pcVar4 = pcVar3,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar3,PTR_s_respondsToSelector__026ca818,
                PTR_s_imageWithContentsOfFile_size_col_026b1a70), uVar2 = local_20,
     ((ulong)pcVar4 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    uVar5 = local_28;
    uVar6 = local_28;
    FUN_0163111c();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,uVar6,0x3ff0000000000000,0,pcVar3,puVar1,uVar2,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

