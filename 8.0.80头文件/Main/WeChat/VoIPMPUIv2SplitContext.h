@interface VoIPMPUIv2SplitContext : NSObject
{
    unsigned long long _phase; // +0x8
    unsigned long long _axis; // +0x10
    unsigned long long _targetEdge; // +0x18
    unsigned long long _leadingMember; // +0x20
    unsigned long long _trailingMember; // +0x28
    unsigned long long _previewMember; // +0x30
    unsigned long long _generation; // +0x38
}
- (unsigned long long)phase;
- (void)setPhase:(unsigned long long)arg1;
- (unsigned long long)axis;
- (void)setAxis:(unsigned long long)arg1;
- (unsigned long long)targetEdge;
- (void)setTargetEdge:(unsigned long long)arg1;
- (unsigned long long)leadingMember;
- (void)setLeadingMember:(unsigned long long)arg1;
- (unsigned long long)trailingMember;
- (void)setTrailingMember:(unsigned long long)arg1;
- (unsigned long long)previewMember;
- (void)setPreviewMember:(unsigned long long)arg1;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
@end
