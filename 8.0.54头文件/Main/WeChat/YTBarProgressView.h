@interface YTBarProgressView : UIView
{
    float _progress; // +0x8
    UIColor * _lineColor; // +0x10
    UIColor * _progressRemainingColor; // +0x18
    UIColor * _progressColor; // +0x20
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)drawRect:(CGRect)arg1;
- (void)registerForKVO;
- (void)unregisterFromKVO;
- (id)observableKeypaths;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (float)progress;
- (void)setProgress:(float)arg1;
- (id)lineColor;
- (void)setLineColor:(id)arg1;
- (id)progressRemainingColor;
- (void)setProgressRemainingColor:(id)arg1;
- (id)progressColor;
- (void)setProgressColor:(id)arg1;
- (void).cxx_destruct;
@end

