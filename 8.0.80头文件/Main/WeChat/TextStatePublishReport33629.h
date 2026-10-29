@interface TextStatePublishReport33629 : NSObject
{
    long long _enterScene; // +0x8
    NSString * _sessionId; // +0x10
    long long _publish2ndScene; // +0x18
    id /* block */ _isEditPostBlock; // +0x20
    id /* block */ _privacyBlock; // +0x28
    id /* block */ _hasPositionBlock; // +0x30
    id /* block */ _hasWordBlock; // +0x38
    id /* block */ _customWordBlock; // +0x40
    id /* block */ _currentIconBlock; // +0x48
}
- (long long)mappedIsEditPost;
- (long long)mappedVisibleRange;
- (long long)mappedIconType:(id)arg1;
- (id)baseParamsForEditPage;
- (id)baseParamsForIconSelectPage;
- (void)reportPageIn:(unsigned long long)arg1 params:(id)arg2;
- (void)reportViewClk:(id)arg1 params:(id)arg2;
- (void)reportEditPageIn;
- (void)reportIconSelectPageIn;
- (void)reportAddBackgroundClk;
- (void)reportPositionClk;
- (void)reportVisibleRangeClk;
- (void)reportIconClk:(id)arg1;
- (void)reportIconSelectClk;
- (void)reportCustomStatusFinishClkWithWord:(id)arg1 iconId:(id)arg2;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (long long)publish2ndScene;
- (void)setPublish2ndScene:(long long)arg1;
- (id /* block */)isEditPostBlock;
- (void)setIsEditPostBlock:(id /* block */)arg1;
- (id /* block */)privacyBlock;
- (void)setPrivacyBlock:(id /* block */)arg1;
- (id /* block */)hasPositionBlock;
- (void)setHasPositionBlock:(id /* block */)arg1;
- (id /* block */)hasWordBlock;
- (void)setHasWordBlock:(id /* block */)arg1;
- (id /* block */)customWordBlock;
- (void)setCustomWordBlock:(id /* block */)arg1;
- (id /* block */)currentIconBlock;
- (void)setCurrentIconBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
