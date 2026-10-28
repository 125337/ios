@interface MMFinderLiveKSKitLyricPreparingView : UIView
{
    BOOL _isStartCountDown; // +0x8
    BOOL _isStartPrepare; // +0x9
    int _countDownSeconds; // +0xc
    int _remainSeconds; // +0x10
    id /* block */ _prepareEndCallback; // +0x18
    NSMutableArray * _countDowntDotList; // +0x20
}
- (id)init;
- (void)initDefaultDatas;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initCountDownDots;
- (id)createCountDownDot;
- (id)getValidCountDownDots;
- (void)resetCountDownDots;
- (void)refreshCountDownDotsIfNeed;
- (double)preferHeight;
- (void)startPrepare;
- (void)stopPrepare;
- (void)endPrepare;
- (BOOL)isPrepareStart;
- (void)updateMaxPreparingMs:(int)arg1;
- (void)updatePreparingRemainMs:(int)arg1;
- (void)checkCountDownIsStart;
- (void)checkPrepareIsEnd;
- (BOOL)isStartCountDown;
- (void)setIsStartCountDown:(BOOL)arg1;
- (int)countDownSeconds;
- (void)setCountDownSeconds:(int)arg1;
- (id /* block */)prepareEndCallback;
- (void)setPrepareEndCallback:(id /* block */)arg1;
- (int)remainSeconds;
- (void)setRemainSeconds:(int)arg1;
- (id)countDowntDotList;
- (void)setCountDowntDotList:(id)arg1;
- (BOOL)isStartPrepare;
- (void)setIsStartPrepare:(BOOL)arg1;
- (void).cxx_destruct;
@end
