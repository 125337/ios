@interface WCC2CPlayerRateLabel : UIView
{
    int _playRateIndex; // +0x8
    id /* block */ _onPlayRateChange; // +0x10
    UILabel * _textLabel; // +0x18
    UIView * _bgView; // +0x20
    NSArray * _supportedPlayRate; // +0x28
    UIViewPropertyAnimator * _animator; // +0x30
}
- (id)init;
- (void)layoutSubviews;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)textLabel;
- (id)bgView;
- (id)animator;
- (void)setText:(id)arg1;
- (int)playRateIndex;
- (void)setPlayRateIndex:(int)arg1;
- (id /* block */)onPlayRateChange;
- (void)setOnPlayRateChange:(id /* block */)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setBgView:(id)arg1;
- (id)supportedPlayRate;
- (void)setSupportedPlayRate:(id)arg1;
- (void)setAnimator:(id)arg1;
- (void).cxx_destruct;
@end

