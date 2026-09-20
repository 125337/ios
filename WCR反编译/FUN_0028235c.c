// FUN_0028235c @ 0028235c

void FUN_0028235c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___PHAssetChangeRequest_026ce4a8;
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,
             *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_creationRequestForAssetFromVideo_026a1738);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

