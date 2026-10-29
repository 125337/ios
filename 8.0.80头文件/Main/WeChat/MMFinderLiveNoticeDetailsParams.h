@interface MMFinderLiveNoticeDetailsParams : NSObject
{
    NSString * _noticeId; // +0x8
    FinderLivePermissionVerifyInfo * _verifyInfo; // +0x10
    MMFinderLiveNoticeDetailsReservationParameters * _reservationParams; // +0x18
    unsigned long long _role; // +0x20
    unsigned long long _sourceScene; // +0x28
}
- (id)init;
- (id)noticeId;
- (void)setNoticeId:(id)arg1;
- (id)verifyInfo;
- (void)setVerifyInfo:(id)arg1;
- (id)reservationParams;
- (void)setReservationParams:(id)arg1;
- (unsigned long long)role;
- (void)setRole:(unsigned long long)arg1;
- (unsigned long long)sourceScene;
- (void)setSourceScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
