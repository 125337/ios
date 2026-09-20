// wcr_processedMetadataIdentifier @ 006ffb10

/* Function Stack Size: 0x10 bytes */

ID WCRefineScreenRecordingFrameProcessor::wcr_processedMetadataIdentifier(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___AVMetadataItem_026ce8b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___AVMetadataItem_026ce8b8,PTR_s_identifierForKey_keySpace__026a7348,
             &cf_com_qimao_wcrefine_processed,
             *(undefined8 *)PTR__AVMetadataKeySpaceQuickTimeMetadata_02578590);
  return (ID)puVar1;
}

