@interface MassSendWrap : NSObject
{
    unsigned int m_uiMessageType; // +0x8
    NSArray * m_arrayToList; // +0x10
    NSString * m_nsText; // +0x18
    UIImage * m_image; // +0x20
    NSData * m_dtImage; // +0x28
    NSData * m_dtVoice; // +0x30
    unsigned int m_uiVoiceTime; // +0x38
    unsigned int m_uiVoiceTmpID; // +0x3c
    NSString * m_nsChatName; // +0x40
    unsigned int m_uiMesLocalID; // +0x48
    unsigned int m_uiIsSendAgain; // +0x4c
    CaptureVideoInfo * m_oVideoInfo; // +0x50
    unsigned int m_uiCreateTime; // +0x58
    unsigned int m_voiceFormat; // +0x5c
    unsigned int m_uiUploadStatus; // +0x60
    NSString * m_nsUsrNameList; // +0x68
    NSString * m_nsFileMD5; // +0x70
    CEmoticonWrap * _emoticonWrap; // +0x78
    WCFinderDataItem * _finderDataItem; // +0x80
}
- (id)init;
- (void)dealloc;
- (unsigned int)m_uiMessageType;
- (void)setM_uiMessageType:(unsigned int)arg1;
- (id)m_arrayToList;
- (void)setM_arrayToList:(id)arg1;
- (id)m_nsText;
- (void)setM_nsText:(id)arg1;
- (id)m_image;
- (void)setM_image:(id)arg1;
- (id)m_dtImage;
- (void)setM_dtImage:(id)arg1;
- (id)m_dtVoice;
- (void)setM_dtVoice:(id)arg1;
- (unsigned int)m_uiVoiceTime;
- (void)setM_uiVoiceTime:(unsigned int)arg1;
- (id)m_oVideoInfo;
- (void)setM_oVideoInfo:(id)arg1;
- (unsigned int)m_uiCreateTime;
- (void)setM_uiCreateTime:(unsigned int)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (unsigned int)m_uiMesLocalID;
- (void)setM_uiMesLocalID:(unsigned int)arg1;
- (unsigned int)m_uiVoiceTmpID;
- (void)setM_uiVoiceTmpID:(unsigned int)arg1;
- (unsigned int)m_uiIsSendAgain;
- (void)setM_uiIsSendAgain:(unsigned int)arg1;
- (unsigned int)m_voiceFormat;
- (void)setM_voiceFormat:(unsigned int)arg1;
- (unsigned int)m_uiUploadStatus;
- (void)setM_uiUploadStatus:(unsigned int)arg1;
- (id)m_nsUsrNameList;
- (void)setM_nsUsrNameList:(id)arg1;
- (id)m_nsFileMD5;
- (void)setM_nsFileMD5:(id)arg1;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (void).cxx_destruct;
@end
