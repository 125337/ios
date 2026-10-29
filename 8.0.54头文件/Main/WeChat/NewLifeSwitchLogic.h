@interface NewLifeSwitchLogic : NSObject <IExptServiceExt>
{
    BOOL _mainSwitch; // +0x8
    long long _contentReddotStrategy; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)initFixedXLabSwitch;
- (void)initFlexibleXLabSwitch;
- (BOOL)checkMainSwitchValueChanged;
- (BOOL)mainSwitchRealTimeResult;
- (BOOL)enableTopRecommendContentReddotInFind;
- (BOOL)enablePostToNewLifeFromSns;
- (BOOL)enablePostGuideByTimelineStream;
- (BOOL)enablePostGuideByTimelineDetail;
- (BOOL)enablePostGuideByTimelineActionSheet;
- (long long)imageDisplayType;
- (BOOL)enableFinderLike;
- (BOOL)enablePostAssist;
- (void)onExptItemListChange;
- (void)onNewLifeSwitchChanged:(BOOL)arg1;
- (BOOL)mainSwitch;
- (void)setMainSwitch:(BOOL)arg1;
- (long long)contentReddotStrategy;
- (void)setContentReddotStrategy:(long long)arg1;
@end

