@interface YTRoundProgressView : UIView
{
    BOOL _annular; // +0x8
    float _progress; // +0xc
    UIColor * _progressTintColor; // +0x10
    UIColor * _backgroundTintColor; // +0x18
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
- (id)progressTintColor;
- (void)setProgressTintColor:(id)arg1;
- (id)backgroundTintColor;
- (void)setBackgroundTintColor:(id)arg1;
- (BOOL)isAnnular;
- (void)setAnnular:(BOOL)arg1;
- (void).cxx_destruct;
@end

