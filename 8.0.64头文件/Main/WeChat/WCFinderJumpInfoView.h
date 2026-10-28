@interface WCFinderJumpInfoView : UIView <WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id <WCFinderJumpInfoViewBaseDelegate> _delegate; // +0x10
    WCFinderJumpInfo * _jumpInfo; // +0x18
    FinderJumpInfo_Style * _style; // +0x20
    MMTimer * _timer; // +0x28
    unsigned long long _feedExposeTimestamp; // +0x30
    unsigned long long _viewExposeTimestamp; // +0x38
}
+ (BOOL)shouldHiddenJumpInfoView:(id)arg1 playPos:(double)arg2;
+ (id)genAdReportExtraInfo:(id)arg1 pos:(unsigned long long)arg2;
- (void)dealloc;
- (void)notifyToShow;
- (void)changeToShow:(BOOL)arg1;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (id)jumpInfo;
- (int)showPosition;
- (void)setFeedExposeTime:(unsigned long long)arg1;
- (unsigned long long)feedExposeTime;
- (unsigned long long)viewExposeTime;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setJumpInfo:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (void)setShowPosition:(int)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (unsigned long long)feedExposeTimestamp;
- (void)setFeedExposeTimestamp:(unsigned long long)arg1;
- (unsigned long long)viewExposeTimestamp;
- (void)setViewExposeTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
