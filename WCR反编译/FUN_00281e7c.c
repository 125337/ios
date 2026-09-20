// FUN_00281e7c @ 00281e7c

/* WARNING: Removing unreachable block (ram,0x00281ffc) */
/* WARNING: Removing unreachable block (ram,0x0028206c) */
/* WARNING: Removing unreachable block (ram,0x00282034) */
/* WARNING: Removing unreachable block (ram,0x00282040) */
/* WARNING: Removing unreachable block (ram,0x00282060) */

void FUN_00281e7c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  long local_38;
  undefined4 local_30;
  undefined1 *local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar3 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,
             PTR_s_authorizationStatusForAccessLeve_026a1760,1);
  lVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
  local_20 = puVar3;
  if ((puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) ||
     ((dword *)puVar3 == &MACH_HEADER.cputype)) {
    if (local_18 != 0) {
      (**(code **)(local_18 + 0x10))(local_18,1);
    }
    local_30 = 1;
  }
  else {
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_002826dc;
    local_40 = &DAT_0257b408;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_requestAuthorizationForAccessLev_026a1768,1,&local_58);
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

