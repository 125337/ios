@interface MMUIFastTapGestureRecognizer : UITapGestureRecognizer
{
    double _tapMaxDelay; // +0x8
    NSString * _contextString; // +0x10
}
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setState:(long long)arg1;
- (void)setStateToFailedIfNotRecognized;
- (void)reset;
- (double)tapMaxDelay;
- (void)setTapMaxDelay:(double)arg1;
- (id)contextString;
- (void)setContextString:(id)arg1;
- (void).cxx_destruct;
@end
