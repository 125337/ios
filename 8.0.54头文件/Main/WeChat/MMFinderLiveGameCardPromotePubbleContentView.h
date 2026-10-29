@interface MMFinderLiveGameCardPromotePubbleContentView : MMFinderLivePromotePubbleContentView <MagicLiveCardServiceExt>
{
    MMUIView * _dynamicCardContainer; // +0x8
    GameDynamicBubbleContent * _gamePlayTogetherDynamicContent; // +0x10
    NSString * _dynamicCardRootId; // +0x18
    MagicSclFrameSetView * _frameSetView; // +0x20
}
- (void)setupDynamicCardEnv;
- (void)convertPromoteMsgInfo:(id)arg1;
- (void)layoutUI;
- (void)refreshData;
- (void)onDismissed;
- (BOOL)isCurrentPromoteItem:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (id)currentPromoteItem;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatepromoteBuffer:(id)arg1;
- (BOOL)disableTapGesture;
- (void)layoutDynamicCardContainer;
- (void)layoutDynamicCard;
- (void)onClosePlayTogetherActionSheet:(id)arg1;
- (void)onFirstFrameRendered:(id)arg1;
- (id)dynamicCardContainer;
- (void)setDynamicCardContainer:(id)arg1;
- (id)gamePlayTogetherDynamicContent;
- (void)setGamePlayTogetherDynamicContent:(id)arg1;
- (id)dynamicCardRootId;
- (void)setDynamicCardRootId:(id)arg1;
- (id)frameSetView;
- (void)setFrameSetView:(id)arg1;
- (void).cxx_destruct;
@end

