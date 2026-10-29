@interface WXLocalNotificationInfo : NSObject
{
    BOOL _showHeadImage; // +0x8
    NSString * _category; // +0x10
    NSString * _title; // +0x18
    NSString * _body; // +0x20
    NSString * _foot; // +0x28
    NSString * _soundName; // +0x30
    NSString * _threadIdentifier; // +0x38
    NSNumber * _badge; // +0x40
    NSDictionary * _userInfo; // +0x48
    NSDate * _date; // +0x50
    NSString * _fromUser; // +0x58
    UIImage * _customHeadImage; // +0x60
    NSString * _identifier; // +0x68
}
- (id)initWithIdentifier:(id)arg1;
- (id)category;
- (void)setCategory:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)body;
- (void)setBody:(id)arg1;
- (id)foot;
- (void)setFoot:(id)arg1;
- (id)soundName;
- (void)setSoundName:(id)arg1;
- (id)threadIdentifier;
- (void)setThreadIdentifier:(id)arg1;
- (id)badge;
- (void)setBadge:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)date;
- (void)setDate:(id)arg1;
- (id)fromUser;
- (void)setFromUser:(id)arg1;
- (BOOL)showHeadImage;
- (void)setShowHeadImage:(BOOL)arg1;
- (id)customHeadImage;
- (void)setCustomHeadImage:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void).cxx_destruct;
@end
