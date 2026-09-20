// _WCRForcedChatNicknameEnabled @ 010d6ca8

byte _WCRForcedChatNicknameEnabled(void)

{
  if ((DAT_028e33c0 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_refreshForcedChatNicknameSnapsho_026a5d58)
    ;
  }
  return DAT_028e33c1 & 1;
}

