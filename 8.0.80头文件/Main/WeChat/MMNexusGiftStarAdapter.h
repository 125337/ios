@interface MMNexusGiftStarAdapter : NSObject
{
    id <MMFinderLiveGiftStarActionDelegate> _actionDelegate; // +0x8
    MMNexusInstance * _instance; // +0x10
}
+ (void)registerPageIfNeeded;
+ (BOOL)isNexusEnabled;
+ (id)localDevEntryPath;
+ (BOOL)lightAllSkipLimit;
+ (id)giftInfoFromBase64:(id)arg1 giftId:(id)arg2;
+ (void)syncGiftInfo:(id)arg1 giftId:(id)arg2;
+ (id)beanIconDataUrl;
+ (id)priceMap;
+ (id)currentLang;
- (BOOL)showFromNav:(id)arg1 liveTask:(id)arg2 onFailToShow:(id /* block */)arg3;
- (void)dismiss;
- (id /* block */)dismissCurrentInstanceBlock;
- (void)notifyRefresh;
- (id)initialDataWithLiveTask:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)instance;
- (void)setInstance:(id)arg1;
- (void).cxx_destruct;
@end
