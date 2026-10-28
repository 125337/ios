@interface _TtC9WeAppCore15WASiderbarLogic : MMObject
{
     currentWebView; // +0x8
     enterScene; // +0x10
     enterTimeMs; // +0x18
     sessionId; // +0x20
     siderbarView; // +0x30
     arrCommonUsedItem; // +0x38
     arrRecentlyItem; // +0x40
     commuseConfig; // +0x48
     contact; // +0x50
     isLoading; // +0x58
}
+ (BOOL)useNewSiderbar;
+ (BOOL)isExptB;
+ (BOOL)isExptC;
+ (BOOL)isExptD;
+ (long long)swipeLeftFastVelocity;
+ (long long)swipeLeftTriggerThreshold;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)initWithContact:(id)arg1 webview:(id)arg2 enterScene:(long long)arg3;
- (void)setupDataBeforeShow;
- (void)onAppEnterBackground;
- (BOOL)hasRecentlyUsedSection;
- (void)onWeappEnterBackground:(long long)arg1;
- (id)init;
- (void).cxx_destruct;
@end
