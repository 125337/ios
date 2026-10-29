@interface QQMsgHelperContactInfoAssist : BrandBasedPluginContactInfoAssist
{
    BOOL _isChange; // +0x64
}
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (void)viewDidAppear;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)reloadInstalledTableViewData;
- (void)installPlugin;
- (id)getPluginIntro;
- (void)onModifyContact:(id)arg1;
- (void)dealloc;
- (BOOL)isChange;
- (void)setIsChange:(BOOL)arg1;
@end
