// FUN_00150c58 @ 00150c58

undefined4 FUN_00150c58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 local_14;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  if ((((ulong)puVar2 & 1) == 0) ||
     (_WCRChatAttachmentLastAppliedCount(), puVar1 == (undefined *)0x0)) {
    local_14 = 0x11;
  }
  else {
    local_14 = SUB84(puVar1,0);
  }
  return local_14;
}

