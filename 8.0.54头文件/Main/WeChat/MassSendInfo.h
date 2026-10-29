@interface MassSendInfo : NSObject
{
    NSString * m_nsToList; // +0x8
    NSString * m_nsToListMD5; // +0x10
    unsigned int m_uiMessageType; // +0x18
    NSData * m_dtBuffer; // +0x20
    unsigned int m_uiStartPos; // +0x28
    unsigned int m_uiTotalLen; // +0x2c
    NSString * m_nsLocalID; // +0x30
    unsigned int m_uiMediaTime; // +0x38
    NSData * m_dtThumb; // +0x40
    unsigned int m_uiThumbStartPos; // +0x48
    unsigned int m_uiThumbTotalLen; // +0x4c
    unsigned int m_uiVideoSource; // +0x50
    unsigned int m_uiCameraType; // +0x54
    unsigned int m_uiToListCount; // +0x58
    UIImage * m_image; // +0x60
    NSString * m_nsText; // +0x68
    CaptureVideoInfo * m_videoInfo; // +0x70
    BOOL m_bDataSent; // +0x78
    unsigned int m_uiIsSendAgain; // +0x7c
    unsigned int m_uiCompressType; // +0x80
    unsigned int m_uiVoiceFormat; // +0x84
    CEmoticonWrap * m_emoticonWrap; // +0x88
    BOOL _hasUploadedToCDN; // +0x90
    CMessageWrap * m_msgWrap; // +0x98
    NSData * _m_originDtBuffer; // +0xa0
    NSString * _tmpFilePath; // +0xa8
    NSString * _tmpThumbPath; // +0xb0
    NSString * _tmpMiddlePath; // +0xb8
}
- (id)init;
- (void)dealloc;
- (id)m_nsToList;
- (void)setM_nsToList:(id)arg1;
- (id)m_nsToListMD5;
- (void)setM_nsToListMD5:(id)arg1;
- (unsigned int)m_uiMessageType;
- (void)setM_uiMessageType:(unsigned int)arg1;
- (id)m_dtBuffer;
- (void)setM_dtBuffer:(id)arg1;
- (unsigned int)m_uiStartPos;
- (void)setM_uiStartPos:(unsigned int)arg1;
- (unsigned int)m_uiTotalLen;
- (void)setM_uiTotalLen:(unsigned int)arg1;
- (id)m_nsLocalID;
- (void)setM_nsLocalID:(id)arg1;
- (unsigned int)m_uiMediaTime;
- (void)setM_uiMediaTime:(unsigned int)arg1;
- (id)m_dtThumb;
- (void)setM_dtThumb:(id)arg1;
- (unsigned int)m_uiThumbStartPos;
- (void)setM_uiThumbStartPos:(unsigned int)arg1;
- (unsigned int)m_uiThumbTotalLen;
- (void)setM_uiThumbTotalLen:(unsigned int)arg1;
- (unsigned int)m_uiCameraType;
- (void)setM_uiCameraType:(unsigned int)arg1;
- (unsigned int)m_uiVideoSource;
- (void)setM_uiVideoSource:(unsigned int)arg1;
- (id)m_image;
- (void)setM_image:(id)arg1;
- (id)m_nsText;
- (void)setM_nsText:(id)arg1;
- (id)m_videoInfo;
- (void)setM_videoInfo:(id)arg1;
- (BOOL)m_bDataSent;
- (void)setM_bDataSent:(BOOL)arg1;
- (unsigned int)m_uiToListCount;
- (void)setM_uiToListCount:(unsigned int)arg1;
- (unsigned int)m_uiIsSendAgain;
- (void)setM_uiIsSendAgain:(unsigned int)arg1;
- (unsigned int)m_uiCompressType;
- (void)setM_uiCompressType:(unsigned int)arg1;
- (unsigned int)m_uiVoiceFormat;
- (void)setM_uiVoiceFormat:(unsigned int)arg1;
- (id)m_msgWrap;
- (void)setM_msgWrap:(id)arg1;
- (id)m_originDtBuffer;
- (void)setM_originDtBuffer:(id)arg1;
- (BOOL)hasUploadedToCDN;
- (void)setHasUploadedToCDN:(BOOL)arg1;
- (id)tmpFilePath;
- (void)setTmpFilePath:(id)arg1;
- (id)tmpThumbPath;
- (void)setTmpThumbPath:(id)arg1;
- (id)tmpMiddlePath;
- (void)setTmpMiddlePath:(id)arg1;
- (void).cxx_destruct;
@end

