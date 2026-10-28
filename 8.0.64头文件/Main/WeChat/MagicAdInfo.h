@interface MagicAdInfo : NSObject
{
    BOOL _isForOldUser; // +0x8
    NSString * _aid; // +0x10
    NSString * _hintText; // +0x18
    NSString * _descText; // +0x20
    NSString * _iconUrl; // +0x28
    NSString * _iconUrlForDark; // +0x30
}
- (id)aid;
- (void)setAid:(id)arg1;
- (id)hintText;
- (void)setHintText:(id)arg1;
- (id)descText;
- (void)setDescText:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)iconUrlForDark;
- (void)setIconUrlForDark:(id)arg1;
- (BOOL)isForOldUser;
- (void)setIsForOldUser:(BOOL)arg1;
- (void).cxx_destruct;
@end
