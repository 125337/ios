@interface EmoticonWeAppInfo : NSObject
{
    NSString * _iconUrl; // +0x8
    NSString * _name; // +0x10
    NSString * _actionDesc; // +0x18
    NSString * _weAppID; // +0x20
}
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)actionDesc;
- (void)setActionDesc:(id)arg1;
- (id)weAppID;
- (void)setWeAppID:(id)arg1;
- (void).cxx_destruct;
@end
