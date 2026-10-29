@interface RecordRenewFileIdResult : NSObject
{
    NSString * _effectiveFileId; // +0x8
    unsigned long long _target; // +0x10
}
- (id)effectiveFileId;
- (void)setEffectiveFileId:(id)arg1;
- (unsigned long long)target;
- (void)setTarget:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
