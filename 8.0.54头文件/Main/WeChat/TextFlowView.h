@interface TextFlowView : UIView
{
    BOOL _needFlow; // +0x8
    MMTimer * _timer; // +0x10
    long long _textAlignment; // +0x18
    unsigned int _spaceLength; // +0x20
    UIFont * _font; // +0x28
    NSString * _text; // +0x30
    UILabel * _label; // +0x38
    long long _startIndex; // +0x40
    double _XOffset; // +0x48
    CGSize _textSize; // +0x50
}
- (CGRect)moveNewPoint:(CGPoint)arg1 rect:(CGRect)arg2;
- (CGSize)computeTextSize:(id)arg1 Font:(id)arg2;
- (void)timerAction;
- (void)startRun;
- (void)cancelRun;
- (void)drawRect:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 Font:(id)arg2 Text:(id)arg3;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (unsigned int)spaceLength;
- (void)setSpaceLength:(unsigned int)arg1;
- (void).cxx_destruct;
@end

