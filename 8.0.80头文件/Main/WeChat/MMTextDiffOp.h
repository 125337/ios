@interface MMTextDiffOp : NSObject
{
    unsigned long long _kind; // +0x8
    NSArray * _oldUnits; // +0x10
    NSArray * _targetUnits; // +0x18
}
- (unsigned long long)kind;
- (void)setKind:(unsigned long long)arg1;
- (id)oldUnits;
- (void)setOldUnits:(id)arg1;
- (id)targetUnits;
- (void)setTargetUnits:(id)arg1;
- (void).cxx_destruct;
@end
