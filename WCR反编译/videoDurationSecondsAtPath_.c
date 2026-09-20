// videoDurationSecondsAtPath: @ 010038dc

/* WARNING: Removing unreachable block (ram,0x01003a2c) */
/* WARNING: Removing unreachable block (ram,0x01003a3c) */
/* WARNING: Removing unreachable block (ram,0x01003a40) */
/* WARNING: Removing unreachable block (ram,0x01003a48) */
/* WARNING: Removing unreachable block (ram,0x010039d8) */
/* WARNING: Removing unreachable block (ram,0x010039f0) */
/* WARNING: Removing unreachable block (ram,0x010039f4) */
/* WARNING: Removing unreachable block (ram,0x010039fc) */
/* Function Stack Size: 0x18 bytes */

unsigned_long_long __thiscall
WCRefineLinkMediaSender::videoDurationSecondsAtPath_
          (WCRefineLinkMediaSender *this,ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  double in_d0;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_50;
  undefined8 local_48;
  SEL local_40;
  ID local_38;
  unsigned_long_long local_30;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_URLAssetWithURL_options__026a1748,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_50 == (undefined *)0x0) {
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(&local_70,local_50,PTR_s_duration_0269dd70);
  }
  _CMTimeGetSeconds(&local_70);
  if (1.0 <= in_d0) {
    local_30 = (unsigned_long_long)in_d0;
  }
  else {
    local_30 = 1;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  return local_30;
}

