@interface WCMomentsClickContext : NSObject
{
    int _contactScene; // +0x8
    WCMomentsClickOptions * _clickOptions; // +0x10
    NSString * _username; // +0x18
    CContact * _contact; // +0x20
    NSMutableDictionary * _urlExtraInfo; // +0x28
}
+ (id)clickContextFromClickOptions:(id)arg1;
- (id)clickOptions;
- (void)setClickOptions:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (int)contactScene;
- (void)setContactScene:(int)arg1;
- (id)urlExtraInfo;
- (void)setUrlExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end
