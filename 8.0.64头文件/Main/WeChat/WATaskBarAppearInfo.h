@interface WATaskBarAppearInfo : NSObject
{
    NSString * _sessionId; // +0x8
    unsigned long long _actionType; // +0x10
    unsigned long long _backgroundStatus; // +0x18
    unsigned long long _weAppCount; // +0x20
    unsigned long long _weMyAppCount; // +0x28
    unsigned long long _brandCount; // +0x30
    unsigned long long _fileCount; // +0x38
    unsigned long long _noteCount; // +0x40
    unsigned long long _mpVideoCount; // +0x48
    unsigned long long _finderVideoCount; // +0x50
    unsigned long long _finderLiveCount; // +0x58
    unsigned long long _musicCount; // +0x60
    unsigned long long _page; // +0x68
    unsigned long long _tingCount; // +0x70
    unsigned long long _commuseWeappCount; // +0x78
    unsigned long long _isRefresh; // +0x80
    CLLocation * _location; // +0x88
    NSString * _BSSIDHash; // +0x90
    NSString * _SSIDHash; // +0x98
    NSString * _overviewExtraData; // +0xa0
}
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (unsigned long long)backgroundStatus;
- (void)setBackgroundStatus:(unsigned long long)arg1;
- (unsigned long long)weAppCount;
- (void)setWeAppCount:(unsigned long long)arg1;
- (unsigned long long)weMyAppCount;
- (void)setWeMyAppCount:(unsigned long long)arg1;
- (unsigned long long)brandCount;
- (void)setBrandCount:(unsigned long long)arg1;
- (unsigned long long)fileCount;
- (void)setFileCount:(unsigned long long)arg1;
- (unsigned long long)noteCount;
- (void)setNoteCount:(unsigned long long)arg1;
- (unsigned long long)mpVideoCount;
- (void)setMpVideoCount:(unsigned long long)arg1;
- (unsigned long long)finderVideoCount;
- (void)setFinderVideoCount:(unsigned long long)arg1;
- (unsigned long long)finderLiveCount;
- (void)setFinderLiveCount:(unsigned long long)arg1;
- (unsigned long long)musicCount;
- (void)setMusicCount:(unsigned long long)arg1;
- (unsigned long long)page;
- (void)setPage:(unsigned long long)arg1;
- (unsigned long long)tingCount;
- (void)setTingCount:(unsigned long long)arg1;
- (unsigned long long)commuseWeappCount;
- (void)setCommuseWeappCount:(unsigned long long)arg1;
- (unsigned long long)isRefresh;
- (void)setIsRefresh:(unsigned long long)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)BSSIDHash;
- (void)setBSSIDHash:(id)arg1;
- (id)SSIDHash;
- (void)setSSIDHash:(id)arg1;
- (id)overviewExtraData;
- (void)setOverviewExtraData:(id)arg1;
- (void).cxx_destruct;
@end
