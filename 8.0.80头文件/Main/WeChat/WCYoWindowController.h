@interface WCYoWindowController : MMWindowController <WCYoWindowDelegate>
{
    unsigned int _yoTime; // +0xc
    MMUIWindow * _window; // +0x10
    NSDate * _showedDate; // +0x18
    NSObject<WCYoDelegate> * _yoDelegate; // +0x20
}
- (id)init;
- (id)window;
- (void)dealloc;
- (void)restartAnimation;
- (void)setupYoWithCount:(unsigned long long)arg1 username:(id)arg2 type:(int)arg3 delegate:(id)arg4;
- (void)setupYoWithCount:(unsigned long long)arg1 username:(id)arg2 type:(int)arg3 delegate:(id)arg4 nameLabelString:(id)arg5 descriptionString:(id)arg6 allowReply:(BOOL)arg7;
- (void)setupYoWithCount:(unsigned long long)arg1 username:(id)arg2 type:(int)arg3 delegate:(id)arg4 nameLabelString:(id)arg5 descriptionString:(id)arg6 timeString:(id)arg7 allowReply:(BOOL)arg8;
- (void)addYoCount:(unsigned long long)arg1 forUsername:(id)arg2 type:(int)arg3;
- (void)showWindowAnimateType:(int)arg1 withTransitionAnimation:(int)arg2;
- (id)window:(id)arg1 hitTest:(CGPoint)arg2 withEvent:(id)arg3;
- (void)hideYoWindow:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)showedDate;
- (void)setShowedDate:(id)arg1;
- (unsigned int)yoTime;
- (void)setYoTime:(unsigned int)arg1;
- (id)yoDelegate;
- (void)setYoDelegate:(id)arg1;
- (void).cxx_destruct;
@end
