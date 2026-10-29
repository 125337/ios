@interface WCSpecialEnteranceRepoter : NSObject <WCSessionFlowMonitorExt, SessionFinderTabSwitchExt, SessionFinderTopicListExt, SessionNearbyTabSwitchExt, SessionFinderPOISwitchExt, SessionFinderPageExt, WCAccountSwitchProtocol>
{
    unsigned long long _nearbyTabType; // +0x8
    unsigned long long _nearbySubTabType; // +0x10
    NSString * _finderTabSessionID; // +0x18
    NSString * _finderContextID; // +0x20
    NSMutableDictionary * _specialSessionDatas; // +0x28
    NSMutableDictionary * _specialPageDatas; // +0x30
    NSMutableArray * _specialSessionConfig; // +0x38
    NSMutableArray * _specialPageConfig; // +0x40
    BOOL m_isReplenishPopEvent; // +0x48
    NSMutableSet * _finderPhotoWallConfig; // +0x50
    NSString * _cacheAppearPageName; // +0x58
    unsigned long long _cacheAppearHashCode; // +0x60
}
- (void)onInit;
- (void)onClearData;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)onEnterPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onQuitPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onAppearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onDisappearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onSpecialSessionEnter:(id)arg1 withHashCode:(unsigned long long)arg2;
- (void)onSpecialSessionQuit:(id)arg1 withHashCode:(unsigned long long)arg2;
- (BOOL)onSpecialPageAppear:(id)arg1;
- (void)onSpecialPageDisappear:(id)arg1;
- (BOOL)checkTopViewControllerIsHalfPage:(id)arg1;
- (BOOL)isHalfFinderPoiDetailVC:(id)arg1;
- (BOOL)checkIsFinderInPhotoWall:(id)arg1;
- (BOOL)checkIsNeedFixFinderEventByPhotoWall:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)reportSpecialPageData:(id)arg1;
- (void)reportSpecialPageData:(id)arg1 reportType:(unsigned int)arg2 extraInfo:(id)arg3;
- (void)reportSpecialSessionData:(id)arg1;
- (void)initSpecialSessionConfigs;
- (void)initSpecialPageConfigs;
- (id)getSpecialSessionConfig:(id)arg1;
- (id)getSpecialPageConfig:(id)arg1;
- (BOOL)isSepecialSessionReportConflict;
- (void)onFinderPageAppear:(id)arg1 logID:(unsigned long long)arg2;
- (void)onFinderPageAppear:(id)arg1 logID:(unsigned long long)arg2 pageInType:(unsigned long long)arg3;
- (void)onFinderPageDisappear:(id)arg1 logID:(unsigned long long)arg2;
- (void)onFinderPageQuit:(id)arg1 vc:(id)arg2;
- (void)onFinderPageEnter:(id)arg1 vc:(id)arg2;
- (void)onFinderPageEnter:(id)arg1 vc:(id)arg2 tabContextID:(id)arg3;
- (void)onFinderTabDuration:(id)arg1 enterTimeMs:(unsigned long long)arg2 exitTimeMs:(unsigned long long)arg3 stayTimeMs:(unsigned long long)arg4 contextID:(id)arg5 tabContextID:(id)arg6 extraInfo:(id)arg7;
- (void)onFinderTabAppear:(long long)arg1;
- (void)onFinderTabDisappear:(long long)arg1;
- (void)onNearbyTabAppear:(unsigned long long)arg1;
- (void)onNearbyTabDisappear:(unsigned long long)arg1;
- (void)onNearbyLiveSubTabAppear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onNearbyLiveSubTabDisappear:(unsigned long long)arg1 withScene:(unsigned long long)arg2;
- (void)onNearbyLifeSubTabAppear:(unsigned long long)arg1;
- (void)onNearbyLifeSubTabDisappear:(unsigned long long)arg1;
- (void)onFinderTopicListEnter:(unsigned long long)arg1 withHashCode:(unsigned long long)arg2;
- (void)onFinderTopicListQuit:(unsigned long long)arg1 withHashCode:(unsigned long long)arg2;
- (void)onFinderTopicListAppear:(unsigned long long)arg1;
- (void)onFinderTopicListDisappear:(unsigned long long)arg1;
- (void)onFinderPOIPush:(id)arg1;
- (void)onFinderPOIPop:(id)arg1;
- (void)onFinderPOIAppear:(id)arg1;
- (void)onFinderPOIDisappear:(id)arg1;
- (void).cxx_destruct;
@end
