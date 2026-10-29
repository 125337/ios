@interface MJSegmentInspectorViewModel : NSObject
{
    id <OMCSegmentMeta> _segment; // +0x8
    unsigned long long _type; // +0x10
    UBDictionarySignal * _valueDidChangeSignal; // +0x18
    UBBooleanSignal * _didFinishSignal; // +0x20
    UBDictionarySignal * _didApplyToAllSignal; // +0x28
    UBEmptySignal * _didResetSignal; // +0x30
    NSArray * _adjustableProtocols; // +0x38
}
- (id)initWithSegment:(id)arg1 type:(unsigned long long)arg2;
- (void)setupSignals;
- (void)notifyAdjustableValueDidChange;
- (void)notifyAdjustableValueDidChangeWithOptions:(unsigned long long)arg1;
- (void)notifyDidFinish;
- (void)notifyDidCancel;
- (void)notifyDidApplyToAll:(id)arg1;
- (void)notifyDidReset;
- (BOOL)isCancelEnabled;
- (BOOL)isApplyAllEnabled;
- (BOOL)isApplyAllSwitchEnabled;
- (BOOL)isResetEnabled;
- (id)title;
- (id)subTitle;
- (BOOL)hasChanges;
- (id)segment;
- (unsigned long long)type;
- (id)valueDidChangeSignal;
- (id)didFinishSignal;
- (id)didApplyToAllSignal;
- (id)didResetSignal;
- (id)adjustableProtocols;
- (void).cxx_destruct;
@end

