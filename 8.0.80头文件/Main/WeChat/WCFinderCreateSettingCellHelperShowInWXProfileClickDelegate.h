@interface WCFinderCreateSettingCellHelperShowInWXProfileClickDelegate : NSObject <ILinkEventExt>
{
    UINavigationController * _navVC; // +0x8
}
+ (id)instanceWithNavVC:(id)arg1;
+ (id)jumpWXProfileHref;
- (void)attachtoObject:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)openSelfContactInfo;
- (id)navVC;
- (void)setNavVC:(id)arg1;
- (void).cxx_destruct;
@end
