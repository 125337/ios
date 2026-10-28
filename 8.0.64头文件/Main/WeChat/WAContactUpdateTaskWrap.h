@interface WAContactUpdateTaskWrap : MMObject
{
    BOOL _isForce; // +0x8
    unsigned long long _updateType; // +0x10
    NSString * _updateKey; // +0x18
    CommRequestSource * _requestSource; // +0x20
}
- (BOOL)isEqualToTaskWrap:(id)arg1;
- (unsigned long long)updateType;
- (void)setUpdateType:(unsigned long long)arg1;
- (id)updateKey;
- (void)setUpdateKey:(id)arg1;
- (BOOL)isForce;
- (void)setIsForce:(BOOL)arg1;
- (id)requestSource;
- (void)setRequestSource:(id)arg1;
- (void).cxx_destruct;
@end
