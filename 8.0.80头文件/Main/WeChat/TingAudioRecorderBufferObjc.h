@interface TingAudioRecorderBufferObjc : UnitRCObjcBaseClass <TingAudioRecorderBuffer>
{
    BOOL _isFinal; // +0x8
    float _peakPower; // +0xc
    unsigned long long _bufferId; // +0x10
}
- (unsigned long long)bufferId;
- (unsigned long long)getBufferId;
- (void)setBufferId:(unsigned long long)arg1;
- (float)peakPower;
- (float)getPeakPower;
- (void)setPeakPower:(float)arg1;
- (BOOL)isFinal;
- (BOOL)getIsFinal;
- (void)setIsFinal:(BOOL)arg1;
@end
