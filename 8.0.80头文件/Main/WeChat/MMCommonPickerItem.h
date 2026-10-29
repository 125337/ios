@interface MMCommonPickerItem : NSObject <NSCopying>
{
    NSString * _displayStr; // +0x8
    id _userInfo; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithDisplayStr:(id)arg1;
- (id)displayStr;
- (void)setDisplayStr:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
