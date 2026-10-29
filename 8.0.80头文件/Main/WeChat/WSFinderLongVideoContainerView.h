@interface WSFinderLongVideoContainerView : WSContainerBaseView
{
    BOOL _isCurWSWebView; // +0x8
    BOOL _hasAddView; // +0x9
    BOOL _selectedBefore; // +0xa
    BOOL _appearBySelectTab; // +0xb
    BOOL _channelSelected; // +0xc
    NSString * _finderTabContextID; // +0x10
    UIViewController * _vc; // +0x18
    WSLocalTemplateConfig * _config; // +0x20
    NSString * _curContextId; // +0x28
    unsigned long long _enterTime; // +0x30
    NSString * _channelTabContextId; // +0x38
    long long _channelSelectedEnterType; // +0x40
    unsigned long long _appearType; // +0x48
}
- (id)initWithConfig:(id)arg1;
- (void)dealloc;
- (void)_onRedDotTriggerTopRefresh;
- (void)_disposeMentionRedDotOnEnterIfNeeded;
- (void)_clearContent;
- (void)initViewIfNeed;
- (void)onSwitchToOtherView:(id)arg1;
- (void)onSwitchToThisView:(id)arg1;
- (void)onEnterWSWebView:(BOOL)arg1;
- (void)onDidEnterWSWebView:(BOOL)arg1;
- (void)onQuitWSWebView:(BOOL)arg1;
- (void)onQuitWSWebView:(BOOL)arg1 exitReason:(long long)arg2;
- (void)onContainerAppear;
- (void)onContainerDidDisappear;
- (void)checkAddView;
- (void)updateContextId;
- (void)restoreContextId;
- (void)restoreFinderTabContextID;
- (int)commentScene;
- (void)reportEnter:(unsigned long long)arg1;
- (void)reportEventCode:(long long)arg1;
- (void)reportTabExpose:(unsigned long long)arg1;
- (void)reportTabUnExpose:(BOOL)arg1 isExit:(BOOL)arg2;
- (id)enterQueryDict;
- (void)reportVCExpose:(unsigned long long)arg1;
- (void)reportVCUnexpose:(BOOL)arg1 isExit:(BOOL)arg2;
- (void)onTabSelectStateChangeWithWSExit:(long long)arg1;
- (void)onTabSelectStateChange:(BOOL)arg1 enterType:(long long)arg2;
- (void)_notifyChannelSelection:(BOOL)arg1 enterType:(long long)arg2;
- (id)finderTabContextID;
- (void)setFinderTabContextID:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (BOOL)isCurWSWebView;
- (void)setIsCurWSWebView:(BOOL)arg1;
- (id)curContextId;
- (void)setCurContextId:(id)arg1;
- (BOOL)hasAddView;
- (void)setHasAddView:(BOOL)arg1;
- (BOOL)selectedBefore;
- (void)setSelectedBefore:(BOOL)arg1;
- (BOOL)appearBySelectTab;
- (void)setAppearBySelectTab:(BOOL)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (BOOL)channelSelected;
- (void)setChannelSelected:(BOOL)arg1;
- (id)channelTabContextId;
- (void)setChannelTabContextId:(id)arg1;
- (long long)channelSelectedEnterType;
- (void)setChannelSelectedEnterType:(long long)arg1;
- (unsigned long long)appearType;
- (void)setAppearType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
