@interface WCAdFinderLiveNoticePolymericLogic : WCAdvertiseOperationLogicBase
{
    unsigned int _finderLiveStartTime; // +0x8
    id <WCAdFinderLiveNoticePolymericLogicDelegate> _delegate; // +0x10
    NSString * _finderUsername; // +0x18
    NSString * _finderLiveNoticeId; // +0x20
    WCAdvertiseInfo * _adData; // +0x28
    NSString * _snsId; // +0x30
}
- (id)initWithFinderUsername:(id)arg1 finderLiveNoticeId:(id)arg2 finderLiveStartTime:(unsigned int)arg3 adData:(id)arg4 snsId:(id)arg5;
- (void)tryToUpdateFinderLiveNoticeStatus;
- (BOOL)willJumpToFinderProfile;
- (void)doLogic;
- (void)updateFinderLiveNoticeStatusRemote;
- (void)onFinderLiveNoticeStatusUpdatedWith:(int)arg1;
- (void)submitNotice;
- (void)jumpToProfile;
- (void)reportFinderLiveNoticeReserveResult:(int)arg1;
- (BOOL)isFinderLiveAvailable;
- (BOOL)isFinderLiveExpired;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)finderLiveNoticeId;
- (void)setFinderLiveNoticeId:(id)arg1;
- (unsigned int)finderLiveStartTime;
- (void)setFinderLiveStartTime:(unsigned int)arg1;
- (id)adData;
- (void)setAdData:(id)arg1;
- (id)snsId;
- (void)setSnsId:(id)arg1;
- (void).cxx_destruct;
@end
