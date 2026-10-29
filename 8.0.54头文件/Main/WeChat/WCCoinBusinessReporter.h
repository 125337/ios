@interface WCCoinBusinessReporter : NSObject <IWCCoinBusinessReporterCallback, WCSessionFlowMonitorExt>
{
    BOOL m_isInCoinDetail; // +0x8
    BOOL m_isInComplete; // +0x9
    WCFinderLiveCoinReporter * m_coinReporter; // +0x10
    WCFinderLiveEncashReporter * m_encashReporter; // +0x18
    WCFinderLiveBeanReporter * m_beanReporter; // +0x20
    long long m_rechargeScene; // +0x28
}
+ (void)bindCoinViewInfo:(id)arg1 priceInfo:(id)arg2;
- (id)init;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onEnterPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onQuitPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onAppearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onDisappearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onViewOperation:(id)arg1 withViewId:(id)arg2;
- (void)onCoinDeatilLinkClick;
- (void)onFetchMoneyLinkClick;
- (void)onStartBuyCoinLogic:(long long)arg1;
- (void)onGesture:(id)arg1 withTarget:(id)arg2 withAction:(id)arg3;
- (void)onSendEvent:(id)arg1;
- (long long)getCoinScene;
- (BOOL)needMonitorConrtol;
- (void).cxx_destruct;
@end

