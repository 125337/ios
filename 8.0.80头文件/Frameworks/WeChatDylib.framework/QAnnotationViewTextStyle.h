@interface QAnnotationViewTextStyle : NSObject <NSCopying>
{
    BOOL _hideWhenAvoidFailed; // +0x8
    NSArray * _candidatePositions; // +0x10
    unsigned long long _effect; // +0x18
    double _fontSize; // +0x20
    double _haloSize; // +0x28
    double _iconSpace; // +0x30
    UIColor * _textColor; // +0x38
    UIColor * _haloColor; // +0x40
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setHaloSize:(double)arg1;
- (id)candidatePositions;
- (void)setCandidatePositions:(id)arg1;
- (unsigned long long)effect;
- (void)setEffect:(unsigned long long)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (double)haloSize;
- (double)iconSpace;
- (void)setIconSpace:(double)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)haloColor;
- (void)setHaloColor:(id)arg1;
- (BOOL)hideWhenAvoidFailed;
- (void)setHideWhenAvoidFailed:(BOOL)arg1;
- (void).cxx_destruct;
@end
