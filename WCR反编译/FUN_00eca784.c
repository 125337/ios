// FUN_00eca784 @ 00eca784

bool FUN_00eca784(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool local_11;
  
  if ((param_1 == 0) || (899999 < param_1)) {
    local_11 = false;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_id__u);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    _WCRChatAttachmentCatalogIconName();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = puVar3 != (undefined *)0x0;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  return local_11;
}

