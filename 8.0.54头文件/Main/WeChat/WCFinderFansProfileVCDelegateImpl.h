@interface WCFinderFansProfileVCDelegateImpl : NSObject <WCFinderFansProfileViewControllerDelegate>
+ (id)sharedInstance;
+ (id)currentWxUsername:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)fansProfileViewController:(id)arg1 clickControlWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)handleFinderPrivateMsgWithFansVC:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3;
@end

