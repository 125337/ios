@interface WSContainerViewReporter : NSObject <WCSessionFlowMonitorExt, WSContainerView>
{
    BOOL _isInCurrTab; // +0x8
    unsigned int _haveTipsBubble; // +0xc
    NSNumber * _categoryId; // +0x10
    unsigned long long _pageId; // +0x18
    unsigned long long _enterTimeMs; // +0x20
    NSString * _inTabReddotInfo; // +0x28
    NSNumber * _fromCategoryId; // +0x30
    NSNumber * _toCategoryId; // +0x38
    NSMutableDictionary * _eventIdDict; // +0x40
    id <IWSContainerReportDelegate> _delegate; // +0x48
}
- (id)init;
- (void)setCategoryId:(id)arg1 andPageId:(unsigned long long)arg2;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)initViewIfNeed;
- (void)setReportDelegate:(id)arg1;
- (id)onPreReport:(id)arg1;
- (void)initDefaultEventIdDict;
- (void)resetEventIdDict:(id)arg1;
- (id)checkToReturnInParams;
- (id)checkToReturnOutParams;
- (void)onEnterWSWebView:(BOOL)arg1;
- (void)onQuitWSWebView:(BOOL)arg1;
- (void)onSwitchToThisView:(id)arg1;
- (void)onSwitchToOtherView:(id)arg1;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (unsigned long long)genStayTimeMs;
- (void)noteInTabReddotInfo:(id)arg1;
- (void)noteHaveTipsBubble;
- (id)categoryId;
- (void)setCategoryId:(id)arg1;
- (unsigned long long)pageId;
- (void)setPageId:(unsigned long long)arg1;
- (unsigned long long)enterTimeMs;
- (void)setEnterTimeMs:(unsigned long long)arg1;
- (BOOL)isInCurrTab;
- (void)setIsInCurrTab:(BOOL)arg1;
- (id)inTabReddotInfo;
- (void)setInTabReddotInfo:(id)arg1;
- (unsigned int)haveTipsBubble;
- (void)setHaveTipsBubble:(unsigned int)arg1;
- (id)fromCategoryId;
- (void)setFromCategoryId:(id)arg1;
- (id)toCategoryId;
- (void)setToCategoryId:(id)arg1;
- (id)eventIdDict;
- (void)setEventIdDict:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

