@interface CdnTimelineMediaOfSightInfo : NSObject
{
    NSString * m_nsClientMsgID; // +0x8
    NSString * m_nsFilePath; // +0x10
    BOOL m_bHaveThumb; // +0x18
    NSString * m_nsThumbFilePath; // +0x20
    BOOL useLargeFileAPI; // +0x28
    int _thumbFileType; // +0x2c
    NSDictionary * _customRequestHeaders; // +0x30
}
- (id)m_nsClientMsgID;
- (void)setM_nsClientMsgID:(id)arg1;
- (id)m_nsFilePath;
- (void)setM_nsFilePath:(id)arg1;
- (BOOL)m_bHaveThumb;
- (void)setM_bHaveThumb:(BOOL)arg1;
- (id)m_nsThumbFilePath;
- (void)setM_nsThumbFilePath:(id)arg1;
- (BOOL)useLargeFileAPI;
- (void)setUseLargeFileAPI:(BOOL)arg1;
- (int)thumbFileType;
- (void)setThumbFileType:(int)arg1;
- (id)customRequestHeaders;
- (void)setCustomRequestHeaders:(id)arg1;
- (void).cxx_destruct;
@end

