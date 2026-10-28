@interface WCFinderShortTapGestureRecognizer : UITapGestureRecognizer
{
    BOOL _supportConstantTapping; // +0x8
    BOOL _constantTapped; // +0x9
    BOOL _constantTapping; // +0xa
    double _maxDelay; // +0x10
    double _minDoubleTapInterval; // +0x18
    unsigned long long _firstTapTimestamp; // +0x20
}
- (id)init;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)cancelTappingAfterDelay;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (double)maxDelay;
- (void)setMaxDelay:(double)arg1;
- (double)minDoubleTapInterval;
- (void)setMinDoubleTapInterval:(double)arg1;
- (BOOL)supportConstantTapping;
- (void)setSupportConstantTapping:(BOOL)arg1;
- (BOOL)constantTapped;
- (void)setConstantTapped:(BOOL)arg1;
- (BOOL)constantTapping;
- (void)setConstantTapping:(BOOL)arg1;
- (unsigned long long)firstTapTimestamp;
- (void)setFirstTapTimestamp:(unsigned long long)arg1;
@end
