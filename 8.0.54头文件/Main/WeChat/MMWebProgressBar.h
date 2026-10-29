@interface MMWebProgressBar : UIView
{
    BOOL _isProcessing; // +0x8
    CGRect _oriFrame; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)start;
- (void)start:(BOOL)arg1;
- (void)progressing;
- (void)end;
- (float)durationOfPhase1;
- (float)durationOfPhase2;
- (float)durationOfPhase3;
- (float)durationOfPhase4;
- (BOOL)isWifiOr4G;
- (void)reset;
- (BOOL)isProcessing;
- (void)setIsProcessing:(BOOL)arg1;
- (CGRect)oriFrame;
- (void)setOriFrame:(CGRect)arg1;
@end

