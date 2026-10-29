@interface WCAdConfirmHalfScreenBaseInfo : NSObject
{
    BOOL _isNotice; // +0x8
    NSString * _headIconUrl; // +0x10
    NSString * _name; // +0x18
    NSString * _title; // +0x20
    NSString * _desc; // +0x28
    NSString * _extraDesc; // +0x30
    NSString * _confirmTitle; // +0x38
}
- (id)headIconUrl;
- (void)setHeadIconUrl:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)extraDesc;
- (void)setExtraDesc:(id)arg1;
- (id)confirmTitle;
- (void)setConfirmTitle:(id)arg1;
- (BOOL)isNotice;
- (void)setIsNotice:(BOOL)arg1;
- (void).cxx_destruct;
@end

