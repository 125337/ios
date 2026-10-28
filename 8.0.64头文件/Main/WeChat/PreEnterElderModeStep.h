@interface PreEnterElderModeStep : PreEnterBaseStep
{
    unsigned long long _flag; // +0x18
    unsigned long long _hearingAidMode; // +0x20
}
- (id)initWithFlag:(unsigned long long)arg1;
- (id)initWithFlag:(unsigned long long)arg1 withHearingAidMode:(unsigned long long)arg2;
- (void)startStep;
- (void)startStepAlert:(BOOL)arg1 andHearingAid:(BOOL)arg2;
- (unsigned long long)flag;
- (void)setFlag:(unsigned long long)arg1;
- (unsigned long long)hearingAidMode;
- (void)setHearingAidMode:(unsigned long long)arg1;
@end
