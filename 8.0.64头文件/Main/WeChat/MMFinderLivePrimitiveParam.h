@interface MMFinderLivePrimitiveParam : NSObject
{
    BOOL _isInMainScene; // +0x8
    BOOL _useAnchoredBypass; // +0x9
    BOOL _disableHistoryLives; // +0xa
    BOOL _isVideoSceneMode; // +0xb
    BOOL _targetHasBottomView; // +0xc
    int _commentScene; // +0x10
    NSArray * _contentVMs; // +0x18
    long long _selectedIndex; // +0x20
    long long _tabType; // +0x28
    MMFinderLiveRelatedLiveParams * _relatedLiveParams; // +0x30
    CGSize _mediaSize; // +0x38
}
- (id)contentVMs;
- (void)setContentVMs:(id)arg1;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (BOOL)isInMainScene;
- (void)setIsInMainScene:(BOOL)arg1;
- (long long)tabType;
- (void)setTabType:(long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)relatedLiveParams;
- (void)setRelatedLiveParams:(id)arg1;
- (BOOL)useAnchoredBypass;
- (void)setUseAnchoredBypass:(BOOL)arg1;
- (BOOL)disableHistoryLives;
- (void)setDisableHistoryLives:(BOOL)arg1;
- (CGSize)mediaSize;
- (void)setMediaSize:(CGSize)arg1;
- (BOOL)isVideoSceneMode;
- (void)setIsVideoSceneMode:(BOOL)arg1;
- (BOOL)targetHasBottomView;
- (void)setTargetHasBottomView:(BOOL)arg1;
- (void).cxx_destruct;
@end
