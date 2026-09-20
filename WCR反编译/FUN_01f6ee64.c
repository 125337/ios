// FUN_01f6ee64 @ 01f6ee64

void FUN_01f6ee64(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoicePackStore_026cea20,PTR_s_ensureChatIncludeDirectoryExists_026c9850,0);
  lVar2 = *(long *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_WCRefineVoicePackStore_026cea20;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoicePackStore_026cea20,PTR_s_chatIncludeDirectoryAbsolutePath_026b0d68);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

