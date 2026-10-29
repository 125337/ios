@interface WCAdRandomPickCardView : MMUIView <WCAdRandomPickCardItemsViewDelegate, WCAdRandomPickCardDescriptionViewDelegate>
{
    BOOL _isRandomPickCardViewActive; // +0x8
    BOOL _shouldResumeCardItemsView; // +0x9
    BOOL _shouldResumeBackgroundPagPlaying; // +0xa
    id <WCAdRandomPickCardViewDelegate> _delegate; // +0x10
    WCAdRandomPickCardInfo * _randomPickCardInfo; // +0x18
    WCDataItem * _dataItem; // +0x20
    unsigned long long _contentItemScene; // +0x28
    WCAdRandomPickCardDescriptionView * _descriptionView; // +0x30
    WCAdRandomPickCardItemsView * _cardItemsView; // +0x38
    PAGView * _backgroundPagView; // +0x40
}
+ (CGSize)calcViewSizeForPickCardInfo:(id)arg1 maxWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1 randomPickCardInfo:(id)arg2 dataItem:(id)arg3 scene:(unsigned long long)arg4;
- (void)dealloc;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)cardItemsView;
- (id)descriptionView;
- (id)backgroundPagView;
- (void)resetCardItemsView;
- (void)makeCardItemsViewPrepare;
- (void)showIntroduceAnimation;
- (void)showRandomAnimation;
- (void)showAllPickedAnimation;
- (id)pageId;
- (double)fetchContentMaxWidth;
- (void)playBackgroundPagForStatus:(long long)arg1;
- (void)setCardItemsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setRandomPickCardViewActive:(BOOL)arg1;
- (void)setBackgroundPagViewActive:(BOOL)arg1;
- (void)setCardItemsViewActive:(BOOL)arg1;
- (id)pickCardLogic;
- (id)onRandomPickCardItemsFetchCanvasPageId;
- (id)onRandomPickCardItemsFetchPickCardLogic;
- (void)onRandomPickCardItemsItemViewDidClick:(id)arg1 index:(unsigned long long)arg2;
- (void)onRandomPickCardItemsUpdateContainerViewStatus:(long long)arg1;
- (void)onRandomPickCardItemsPlayBackgroundAnimationWithStatus:(long long)arg1;
- (id)onRandomPickCardDescriptionFetchCanvasPageId;
- (id)onRandomPickCardDescriptionFetchPickCardLogic;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)randomPickCardInfo;
- (void)setRandomPickCardInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (void)setDescriptionView:(id)arg1;
- (void)setCardItemsView:(id)arg1;
- (BOOL)isRandomPickCardViewActive;
- (void)setIsRandomPickCardViewActive:(BOOL)arg1;
- (BOOL)shouldResumeCardItemsView;
- (void)setShouldResumeCardItemsView:(BOOL)arg1;
- (void)setBackgroundPagView:(id)arg1;
- (BOOL)shouldResumeBackgroundPagPlaying;
- (void)setShouldResumeBackgroundPagPlaying:(BOOL)arg1;
- (void).cxx_destruct;
@end

