@interface MMShareSessionItem : NSObject <PBCoding>
{
    BOOL _showSuffixIcon; // +0x8
    NSString * _username; // +0x10
    NSString * _nickname; // +0x18
    NSString * _dispalyName; // +0x20
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_dispalyName;
+ (void)PBArrayAdd_showSuffixIcon;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)dispalyName;
- (void)setDispalyName:(id)arg1;
- (BOOL)showSuffixIcon;
- (void)setShowSuffixIcon:(BOOL)arg1;
- (void).cxx_destruct;
@end

