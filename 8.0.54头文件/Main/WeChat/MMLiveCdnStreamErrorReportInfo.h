@interface MMLiveCdnStreamErrorReportInfo : NSObject
{
    BOOL _isMainStreamFailed; // +0x8
    BOOL _isBackStreamFailed; // +0x9
    BOOL _hasManuallySwitchedStream; // +0xa
    unsigned int _failedQualityTag; // +0xc
    int _sdkErrCode; // +0x10
    int _playerEventId; // +0x14
    unsigned int _currentQualityTag; // +0x18
    NSData * _qualityTagCacheBuf; // +0x20
}
- (void)resetAllData;
- (void)resetLastPlayEventData;
- (id)generateFinderLiveCdnPlayInfo;
- (id)qualityTagCacheBuf;
- (void)setQualityTagCacheBuf:(id)arg1;
- (unsigned int)failedQualityTag;
- (void)setFailedQualityTag:(unsigned int)arg1;
- (BOOL)isMainStreamFailed;
- (void)setIsMainStreamFailed:(BOOL)arg1;
- (BOOL)isBackStreamFailed;
- (void)setIsBackStreamFailed:(BOOL)arg1;
- (int)sdkErrCode;
- (void)setSdkErrCode:(int)arg1;
- (BOOL)hasManuallySwitchedStream;
- (void)setHasManuallySwitchedStream:(BOOL)arg1;
- (int)playerEventId;
- (void)setPlayerEventId:(int)arg1;
- (unsigned int)currentQualityTag;
- (void)setCurrentQualityTag:(unsigned int)arg1;
- (void).cxx_destruct;
@end

