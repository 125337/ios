@interface WCMomentsVisibilityCombinedConfig : NSObject
{
    NSString * _navigationTitle; // +0x8
    NSString * _tagTabTitle; // +0x10
    NSString * _contactTabTitle; // +0x18
    long long _initialTabIndex; // +0x20
    WCMomentsVisibilityCombinedTagOptions * _tagOptions; // +0x28
    WCMomentsVisibilityCombinedContactOptions * _contactOptions; // +0x30
}
+ (id)defaultConfig;
- (id)init;
- (id)navigationTitle;
- (void)setNavigationTitle:(id)arg1;
- (id)tagTabTitle;
- (void)setTagTabTitle:(id)arg1;
- (id)contactTabTitle;
- (void)setContactTabTitle:(id)arg1;
- (long long)initialTabIndex;
- (void)setInitialTabIndex:(long long)arg1;
- (id)tagOptions;
- (void)setTagOptions:(id)arg1;
- (id)contactOptions;
- (void)setContactOptions:(id)arg1;
- (void).cxx_destruct;
@end
