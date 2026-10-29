@interface SettingPageMapper : NSObject <IMMLanguageMgrExt>
{
    SettingPageItem * _rootItem; // +0x8
}
+ (id)sharedMapper;
- (id)init;
- (void)setupMapping;
- (void)setupNewMapping;
- (id)viewControllerForPaths:(id)arg1;
- (void)reset;
- (void)onLanguageChange;
- (id)rootItem;
- (void)setRootItem:(id)arg1;
- (void).cxx_destruct;
@end
