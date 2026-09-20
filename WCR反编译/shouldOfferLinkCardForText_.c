// shouldOfferLinkCardForText: @ 01004424

/* Function Stack Size: 0x18 bytes */

bool WCRefineLinkMediaSender::shouldOfferLinkCardForText_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *local_48;
  undefined *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == (cfstringStruct *)0x0) {
    local_48 = &::cf___;
  }
  else {
    local_48 = local_28;
  }
  puVar1 = PTR_WCRefineLinkParser_026ce168;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLinkParser_026ce168,PTR_s_extractSupportedURLFromText__0269db90,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    _objc_storeStrong(&local_30,local_28);
  }
  puVar1 = PTR_WCRefineLinkParser_026ce168;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLinkParser_026ce168,PTR_s_platformForURL__026ad950,local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (uint)(puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 1));
}

