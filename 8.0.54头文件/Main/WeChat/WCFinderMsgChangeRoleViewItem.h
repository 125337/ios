@interface WCFinderMsgChangeRoleViewItem : NSObject
{
    BOOL _selected; // +0x8
    BOOL _isGlobalSelected; // +0x9
    BOOL _isFinderContact; // +0xa
    BOOL _disableSelect; // +0xb
    NSString * _headURL; // +0x10
    NSString * _nickname; // +0x18
    NSString * _descTitle; // +0x20
    long long _roleType; // +0x28
}
- (id)headURL;
- (void)setHeadURL:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)descTitle;
- (void)setDescTitle:(id)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isGlobalSelected;
- (void)setIsGlobalSelected:(BOOL)arg1;
- (BOOL)isFinderContact;
- (void)setIsFinderContact:(BOOL)arg1;
- (BOOL)disableSelect;
- (void)setDisableSelect:(BOOL)arg1;
- (long long)roleType;
- (void)setRoleType:(long long)arg1;
- (void).cxx_destruct;
@end

