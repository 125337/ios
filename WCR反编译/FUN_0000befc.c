// FUN_0000befc @ 0000befc

void FUN_0000befc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_EncryptionLock_026ce008;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_EncryptionLock_026ce008,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar2 & 1) != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  return;
}

