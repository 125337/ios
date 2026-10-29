@interface WCWatchNotificationMgr : MMUserService <WCYoDelegate, MMServiceProtocol>
{
    unsigned int _yoTime; // +0x8
    NSMutableArray * _yoCounts; // +0x10
    WCYoWindowController * _yoWindowController; // +0x18
    NSString * _isShowingUsername; // +0x20
}
- (void)onServiceEnterForeground;
- (id)yoCounts;
- (id)getYoWindow;
- (void)displaySignalMessage:(id)arg1;
- (void)addYoCount:(unsigned long long)arg1 contact:(id)arg2 type:(int)arg3;
- (void)dequeue;
- (void)prepareToCloseYoWindow;
- (void)dismissYoWindow;
- (void)didHitOutside;
- (void)didHitInside;
- (void)setYoCounts:(id)arg1;
- (id)yoWindowController;
- (void)setYoWindowController:(id)arg1;
- (id)isShowingUsername;
- (void)setIsShowingUsername:(id)arg1;
- (unsigned int)yoTime;
- (void)setYoTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

