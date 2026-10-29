@interface WCRecordFeedbackView : UIView
{
    BOOL _bShowRecordingState; // +0x8
    WCRecordFBSmallView * _smallFbView; // +0x10
    WCRecordFBNormalView * _normalFbView; // +0x18
    UIColor * _pillarColor; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 pillarColor:(id)arg2;
- (void)initSmallFbView;
- (void)initNormalFbView;
- (void)setBShowRecordingState:(BOOL)arg1;
- (void)setPeakPower:(float)arg1;
- (void)setPillarColor:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (BOOL)bShowRecordingState;
- (id)smallFbView;
- (void)setSmallFbView:(id)arg1;
- (id)normalFbView;
- (void)setNormalFbView:(id)arg1;
- (id)pillarColor;
- (void).cxx_destruct;
@end

