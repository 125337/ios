// FUN_00eb7158 @ 00eb7158

ulong FUN_00eb7158(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___AVAudioSession_026ce9d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___AVAudioSession_026ce9d0,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return (ulong)puVar2 & 0xffffffff;
}

