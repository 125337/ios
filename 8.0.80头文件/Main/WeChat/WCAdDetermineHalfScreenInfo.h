@interface WCAdDetermineHalfScreenInfo : NSObject
{
    NSString * _headIconUrl; // +0x8
    NSString * _headIconLocalName; // +0x10
    NSString * _name; // +0x18
    NSString * _title; // +0x20
    NSString * _desc; // +0x28
    NSString * _cancelTitle; // +0x30
    NSString * _confirmTitle; // +0x38
    NSObject * _userInfo; // +0x40
}
- (id)headIconUrl;
- (void)setHeadIconUrl:(id)arg1;
- (id)headIconLocalName;
- (void)setHeadIconLocalName:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)cancelTitle;
- (void)setCancelTitle:(id)arg1;
- (id)confirmTitle;
- (void)setConfirmTitle:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
