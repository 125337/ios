@interface WCRecordFeedbackView : UIView
{
    BOOL _bShowRecordingState; // +0x8
    BOOL _hasLoggedFirstPeakGeometry; // +0x9
    int _pillarCount; // +0xc
    WCRecordFBSmallView * _smallFbView; // +0x10
    WCRecordFBNormalView * _normalFbView; // +0x18
    UIColor * _pillarColor; // +0x20
    double _pillarWidth; // +0x28
    double _pillarMaxHeight; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 pillarColor:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 pillarCount:(int)arg2 pillarColor:(id)arg3 pillarWidth:(double)arg4;
- (id)initWithFrame:(CGRect)arg1 pillarCount:(int)arg2 pillarColor:(id)arg3 pillarWidth:(double)arg4 maxHeight:(double)arg5;
- (void)initSmallFbView;
- (void)initNormalFbView;
- (void)setBShowRecordingState:(BOOL)arg1;
- (void)setPeakPower:(float)arg1;
- (void)setPillarColor:(id)arg1;
- (void)layoutSubviews;
- (void)dynamicSetPillarColor:(id)arg1;
- (void)setPillarMargin:(double)arg1;
- (BOOL)bShowRecordingState;
- (id)smallFbView;
- (void)setSmallFbView:(id)arg1;
- (id)normalFbView;
- (void)setNormalFbView:(id)arg1;
- (int)pillarCount;
- (void)setPillarCount:(int)arg1;
- (id)pillarColor;
- (double)pillarWidth;
- (void)setPillarWidth:(double)arg1;
- (double)pillarMaxHeight;
- (void)setPillarMaxHeight:(double)arg1;
- (BOOL)hasLoggedFirstPeakGeometry;
- (void)setHasLoggedFirstPeakGeometry:(BOOL)arg1;
- (void).cxx_destruct;
@end
