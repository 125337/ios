// FUN_00fc8bc4 @ 00fc8bc4

/* WARNING: Removing unreachable block (ram,0x00fc8e08) */
/* WARNING: Removing unreachable block (ram,0x00fc8e1c) */
/* WARNING: Removing unreachable block (ram,0x00fc8e20) */
/* WARNING: Removing unreachable block (ram,0x00fc8e28) */
/* WARNING: Removing unreachable block (ram,0x00fc8e3c) */
/* WARNING: Removing unreachable block (ram,0x00fc8e40) */
/* WARNING: Removing unreachable block (ram,0x00fc8e4c) */
/* WARNING: Removing unreachable block (ram,0x00fc8e54) */
/* WARNING: Removing unreachable block (ram,0x00fc8d54) */
/* WARNING: Removing unreachable block (ram,0x00fc8d70) */
/* WARNING: Removing unreachable block (ram,0x00fc8d74) */
/* WARNING: Removing unreachable block (ram,0x00fc8d7c) */
/* WARNING: Removing unreachable block (ram,0x00fc8d90) */
/* WARNING: Removing unreachable block (ram,0x00fc8d94) */
/* WARNING: Removing unreachable block (ram,0x00fc8da0) */
/* WARNING: Removing unreachable block (ram,0x00fc8da8) */

int FUN_00fc8bc4(double param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  int local_a8;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  int local_5c;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  int local_28;
  double local_20;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_28 = 1;
    local_34 = 1;
    goto LAB_00fc8ef8;
  }
  puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___AVURLAsset_026ce330,PTR_s_URLAssetWithURL_options__026a1748,puVar2,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_CaptureVideoInfo;
  local_48 = puVar3;
  _NSClassFromString();
  pcVar5 = &cf_getVideoDurationForAsset_;
  local_50 = pcVar4;
  _NSSelectorFromString();
  local_58 = pcVar5;
  if ((local_50 == (cfstringStruct *)0x0) ||
     (pcVar4 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar5),
     ((ulong)pcVar4 & 1) == 0)) {
LAB_00fc8d00:
    if (local_48 == (undefined *)0x0) {
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(&local_80,local_48,PTR_s_duration_0269dd70);
    }
    _CMTimeGetSeconds(&local_80);
    local_68 = param_1;
    local_20 = param_1;
    if ((ABS(param_1) == INFINITY) || (param_1 < 1.0)) {
      local_28 = 1;
    }
    else {
      local_a8 = (int)(long)param_1;
      if (local_a8 < 2) {
        local_a8 = 1;
      }
      local_28 = local_a8;
    }
  }
  else {
    pcVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,local_58,local_48);
    local_5c = (int)pcVar4;
    local_28 = local_5c;
    if (local_5c == 0) goto LAB_00fc8d00;
  }
  local_34 = 1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
LAB_00fc8ef8:
  _objc_storeStrong(&local_30,0);
  return local_28;
}

