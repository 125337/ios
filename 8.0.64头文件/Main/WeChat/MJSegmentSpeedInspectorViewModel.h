@interface MJSegmentSpeedInspectorViewModel : MJSegmentInspectorViewModel
{
    double _speedOriginalRatio; // +0x40
    double _rawSpeedOriginalRatio; // +0x48
    double _rawSpeedRatio; // +0x50
    double _speedRatio; // +0x58
}
- (id)initWithSegment:(id)arg1 type:(unsigned long long)arg2;
- (void)dealloc;
- (id)speedRatioTextByRawSpeedRatio:(double)arg1;
- (void)handleConfigRawSpeedRatio:(double)arg1;
- (double)segmentedLinearMappingToSpeedValue:(double)arg1;
- (double)reverseSegmentedLinearMappingToSpeedValue:(double)arg1;
- (double)mappingToSpeedValue:(double)arg1;
- (double)reverseMappingFromSpeedValue:(double)arg1;
- (BOOL)isCancelEnabled;
- (BOOL)isApplyAllEnabled;
- (BOOL)isResetEnabled;
- (id)title;
- (id)adjustableProtocols;
- (BOOL)hasChanges;
- (void)notifyDidCancel;
- (void)notifyDidReset;
- (void)setValuesToOriginal;
- (void)notifyDidApplyToAll:(id)arg1;
- (double)rawSpeedRatio;
- (void)setRawSpeedRatio:(double)arg1;
- (double)speedRatio;
- (void)setSpeedRatio:(double)arg1;
@end
