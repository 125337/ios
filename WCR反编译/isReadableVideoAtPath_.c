// isReadableVideoAtPath: @ 00f3ef88

/* WARNING: Removing unreachable block (ram,0x00f3f1b8) */
/* WARNING: Removing unreachable block (ram,0x00f3f1cc) */
/* WARNING: Removing unreachable block (ram,0x00f3f1d0) */
/* WARNING: Removing unreachable block (ram,0x00f3f1d8) */
/* WARNING: Removing unreachable block (ram,0x00f3f1ec) */
/* WARNING: Removing unreachable block (ram,0x00f3f1f0) */
/* WARNING: Removing unreachable block (ram,0x00f3f1fc) */
/* WARNING: Removing unreachable block (ram,0x00f3f20c) */
/* WARNING: Removing unreachable block (ram,0x00f3f0f4) */
/* WARNING: Removing unreachable block (ram,0x00f3f110) */
/* WARNING: Removing unreachable block (ram,0x00f3f114) */
/* WARNING: Removing unreachable block (ram,0x00f3f11c) */
/* WARNING: Removing unreachable block (ram,0x00f3f130) */
/* WARNING: Removing unreachable block (ram,0x00f3f134) */
/* WARNING: Removing unreachable block (ram,0x00f3f140) */
/* WARNING: Removing unreachable block (ram,0x00f3f150) */
/* Function Stack Size: 0x18 bytes */

bool __thiscall
WCRefineEmoticonToolsHelper::isReadableVideoAtPath_
          (WCRefineEmoticonToolsHelper *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  double in_d0;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  double local_58;
  undefined *local_50;
  undefined4 local_44;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  byte local_25;
  double local_20;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fileExistsWithBytesAtPath__026ac1d8,local_40)
  ;
  puVar4 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
  if ((IVar2 & 1) == 0) {
    local_25 = 0;
    local_44 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_URLAssetWithURL_options__026a1748,puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_50 == (undefined *)0x0) {
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(&local_70,local_50,PTR_s_duration_0269dd70);
    }
    _CMTimeGetSeconds(&local_70);
    puVar4 = local_50;
    local_58 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isPlayable_026a1750);
    bVar1 = false;
    local_25 = false;
    if (((ulong)puVar4 & 1) != 0) {
      local_20 = local_58;
      local_25 = false;
      if ((ABS(local_58) != INFINITY) && (local_25 = false, 0.0 < local_58)) {
        local_78 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_tracksWithMediaType__0269f568,
                   *(undefined8 *)PTR__AVMediaTypeVideo_02578588);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        puVar4 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_25 = puVar4 != (undefined *)0x0;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  return local_25 & 1;
}

