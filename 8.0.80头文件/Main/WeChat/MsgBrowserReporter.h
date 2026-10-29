@interface MsgBrowserReporter : NSObject
{
    NSString * _sessionId; // +0x8
    unsigned long long _enterSource; // +0x10
    unsigned long long _previousTab; // +0x18
    unsigned long long _currentTab; // +0x20
}
+ (unsigned long long)reportTabForCategoryType:(long long)arg1;
+ (id)viewIdForMenuAction:(unsigned long long)arg1;
+ (id)viewIdForFooterAction:(unsigned long long)arg1;
+ (id)viewIdForSaveAction:(unsigned long long)arg1;
- (void)onEnter:(unsigned long long)arg1 targetTab:(unsigned long long)arg2;
- (void)onLeave;
- (BOOL)reportEnabled;
- (id)baseParams;
- (id)baseParamsWithTab;
- (void)fillMediaCountParams:(id)arg1 messages:(id)arg2;
- (void)doReport:(id)arg1 params:(id)arg2;
- (void)reportTypePageExposure:(unsigned long long)arg1;
- (void)reportPinchShrink;
- (void)reportShrinkRestore;
- (void)reportDragRightSlider;
- (void)reportLongPressMenuExposure;
- (void)reportLongPressMenuAction:(unsigned long long)arg1;
- (void)reportTopRightSelectBtnClick;
- (void)reportTopTitleFilterClick;
- (void)reportTabBtnClick:(unsigned long long)arg1;
- (void)reportFooterAction:(unsigned long long)arg1 messages:(id)arg2;
- (void)reportSaveAction:(unsigned long long)arg1 messages:(id)arg2 isOriginalMedia:(BOOL)arg3;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)enterSource;
- (void)setEnterSource:(unsigned long long)arg1;
- (unsigned long long)previousTab;
- (void)setPreviousTab:(unsigned long long)arg1;
- (unsigned long long)currentTab;
- (void)setCurrentTab:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
