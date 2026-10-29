@interface WCLanDeviceData : MMObject
{
    CMessageWrap * m_nsMsgWrap; // +0x8
    WCDataItem * m_nsDataItem; // +0x10
    unsigned long long m_nsScene; // +0x18
    unsigned long long m_nsSource; // +0x20
    WCMediaItem * m_nsMediaItem; // +0x28
    WCLanDeviceKissFileMsg * m_nsFileInfo; // +0x30
}
- (id)initWithMessageWrap:(id)arg1;
- (id)initWithTimeLineItem:(id)arg1 mediaItem:(id)arg2;
- (id)musicInfo;
- (id)locationInfo;
- (id)urlInfo;
- (id)imagePath;
- (id)imageKissMsg;
- (id)filePath;
- (id)thumbPath;
- (id)fileKissMsgWithDetail:(BOOL)arg1;
- (id)dataId;
- (long long)opObjType;
- (id)fileExt;
- (long long)opSource;
- (id)m_nsMsgWrap;
- (void)setM_nsMsgWrap:(id)arg1;
- (id)m_nsDataItem;
- (void)setM_nsDataItem:(id)arg1;
- (unsigned long long)m_nsScene;
- (void)setM_nsScene:(unsigned long long)arg1;
- (unsigned long long)m_nsSource;
- (void)setM_nsSource:(unsigned long long)arg1;
- (id)m_nsMediaItem;
- (void)setM_nsMediaItem:(id)arg1;
- (id)m_nsFileInfo;
- (void)setM_nsFileInfo:(id)arg1;
- (void).cxx_destruct;
@end

