@interface MMFinderLiveKTVSeatUserInfo : NSObject
{
    BOOL _isPreparing; // +0x8
    int _score; // +0xc
    MMFinderLiveConnectMicUser * _userInfo; // +0x10
}
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (BOOL)isPreparing;
- (void)setIsPreparing:(BOOL)arg1;
- (int)score;
- (void)setScore:(int)arg1;
- (void).cxx_destruct;
@end

