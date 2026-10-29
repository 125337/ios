@interface WCFinderLiveAudienceNoticeActionInfo : NSObject
{
    long long _noticeScene; // +0x8
    unsigned long long _reserveOpType; // +0x10
}
- (long long)noticeScene;
- (void)setNoticeScene:(long long)arg1;
- (unsigned long long)reserveOpType;
- (void)setReserveOpType:(unsigned long long)arg1;
@end
