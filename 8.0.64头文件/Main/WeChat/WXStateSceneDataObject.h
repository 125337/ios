@interface WXStateSceneDataObject : WXSceneDataObject
{
    NSString * _stateId; // +0x8
    NSString * _stateTitle; // +0x10
    NSString * _token; // +0x18
    unsigned long long _jumpType; // +0x20
    WXStateJumpInfo * _stateJumpDataInfo; // +0x28
}
+ (id)object;
- (id)stateId;
- (void)setStateId:(id)arg1;
- (id)stateTitle;
- (void)setStateTitle:(id)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (unsigned long long)jumpType;
- (void)setJumpType:(unsigned long long)arg1;
- (id)stateJumpDataInfo;
- (void)setStateJumpDataInfo:(id)arg1;
- (void).cxx_destruct;
@end
