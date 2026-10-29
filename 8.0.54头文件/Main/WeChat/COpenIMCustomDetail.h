@interface COpenIMCustomDetail : NSObject
{
    unsigned int _resSubType; // +0x8
    NSString * _icon; // +0x10
    NSString * _desc; // +0x18
    long long _descType; // +0x20
    long long _action; // +0x28
    NSDictionary * _action_param; // +0x30
}
- (id)getDesc:(id)arg1;
- (unsigned int)resSubType;
- (void)setResSubType:(unsigned int)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (long long)descType;
- (void)setDescType:(long long)arg1;
- (long long)action;
- (void)setAction:(long long)arg1;
- (id)action_param;
- (void)setAction_param:(id)arg1;
- (void).cxx_destruct;
@end

