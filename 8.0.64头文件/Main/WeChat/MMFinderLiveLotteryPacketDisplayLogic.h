@interface MMFinderLiveLotteryPacketDisplayLogic : NSObject
{
    BOOL _isLittlePacketShow; // +0x8
    unsigned int _currentLotteryStatus; // +0xc
    id /* block */ _invokeOpenLotteryPanelBlock; // +0x10
    id /* block */ _countDownRemainTimeCallback; // +0x18
    id /* block */ _lotteryCompleteCallback; // +0x20
    id <LiveLotteryPacketDisplayDelegate> _displayDelegate; // +0x28
    MMFinderLiveLittleLotteryPacketView * _littleLotteryPacket; // +0x30
    MMFinderLiveLotteryInfo * _currentLotteryInfo; // +0x38
    LOTAnimationView * _largeLotteryPacket; // +0x40
}
+ (id)createLargeLotteryPacketView;
+ (id)createLittleLotteryPacketView;
- (id)initWithLargeLotteryPacketView:(id)arg1;
- (void)initNotification;
- (void)updateDisplayingLotteryInfo:(id)arg1;
- (void)updateCurrentLotteryInfo:(id)arg1;
- (BOOL)checkLotteryCountDownTimeInValid;
- (void)clearCurrentLotteryState;
- (void)updateCurrentLotteryStatus;
- (void)startDisplayLargeLotteryPacketAnimated;
- (void)startDisplayLittleLotteryPacketAnimated;
- (unsigned int)getModifiedRemainTime;
- (void)stopDisplayLargeLotteryPacket;
- (void)stopDisplayLittleLotteryPacket;
- (unsigned int)currentRemainTime;
- (void)showLittleLotteryPacket;
- (void)checkAndShowLittleLotteryPacket;
- (void)hideLittleLotteryPacket;
- (void)invokeCountDownFinished;
- (void)setLittleLotteryPacket:(id)arg1;
- (long long)currentState;
- (void)setCurrentLotteryStatus:(unsigned int)arg1;
- (void)handleLittlePacketTapGesture:(id)arg1;
- (BOOL)isCountDownFinished;
- (void)stopCountDown;
- (void)onEnterForeground;
- (id /* block */)invokeOpenLotteryPanelBlock;
- (void)setInvokeOpenLotteryPanelBlock:(id /* block */)arg1;
- (id /* block */)countDownRemainTimeCallback;
- (void)setCountDownRemainTimeCallback:(id /* block */)arg1;
- (id /* block */)lotteryCompleteCallback;
- (void)setLotteryCompleteCallback:(id /* block */)arg1;
- (id)displayDelegate;
- (void)setDisplayDelegate:(id)arg1;
- (id)littleLotteryPacket;
- (id)currentLotteryInfo;
- (void)setCurrentLotteryInfo:(id)arg1;
- (BOOL)isLittlePacketShow;
- (void)setIsLittlePacketShow:(BOOL)arg1;
- (unsigned int)currentLotteryStatus;
- (id)largeLotteryPacket;
- (void)setLargeLotteryPacket:(id)arg1;
- (void).cxx_destruct;
@end
