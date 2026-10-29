@interface WCFinderLiveTopicTemplatePageManager : NSObject <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewMonitorDelegate, WCFinderFeedFlowViewLayoutDelegate, MMLiveMorphDismissTarget, WCFinderLiveHomePageNormalCellDelegate, WCFinderLiveTopicTemplateLargeCellDelegate>
{
    BOOL _fromSceneIsTilingSwitch; // +0x8
    BOOL _isRequesting; // +0x9
    id <WCFinderLiveTopicTemplatePageManagerDelegate> _delegate; // +0x10
    WCFinderFeedFlowView * _feedFlowView; // +0x18
    unsigned long long _pageIndex; // +0x20
    NSString * _topicId; // +0x28
    NSString * _topicTitle; // +0x30
    NSString * _themeTagId; // +0x38
    WCFinderLiveStreamContainerModel * _containerModel; // +0x40
    NSMutableSet * _playingIndexPaths; // +0x48
    NSMutableArray * _feedVMs; // +0x50
    FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions * _hotSellingOptions; // +0x58
    NSString * _contentVMSessionExtraKey; // +0x60
}
- (id)initWithContainerModel:(id)arg1 feedFlowView:(id)arg2 contentVMSessionExtraKey:(id)arg3;
- (void)initDataIfNeeded;
- (void)stopPlayingLive;
- (void)autoPlayLiveIfCan;
- (id)getVisibleStreamElementModels;
- (BOOL)canHandleProductShowcase;
- (void)handleProductShowcaseUpdated:(id)arg1 objectId:(unsigned long long)arg2;
- (void)updateHotSellingOptions:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowViewDidEndScrolling:(id)arg1;
- (BOOL)liveStreamStartPlayWithIndexPath:(id)arg1;
- (BOOL)doPlayCell:(id)arg1 indexPath:(id)arg2;
- (void)liveStreamStopWithIndexPath:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(CGSize)arg2;
- (void)onClickCoverContact:(id)arg1 feedVM:(id)arg2;
- (void)onPlayStateChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)topicTemplateCell:(id)arg1 didClickContact:(id)arg2 feedVM:(id)arg3;
- (void)topicTemplateCell:(id)arg1 didClickProduct:(id)arg2 feedVM:(id)arg3;
- (id)hotSalePAGFileForTopicTemplateCell:(id)arg1;
- (id)playingIndexPaths;
- (int)getCommentScene;
- (void)gotoLiveRoomWithFeedVM:(id)arg1 product:(id)arg2;
- (void)updateWatchContext;
- (id)defaultStyleInfo;
- (int)getContainerType;
- (void)recreateFeedVMArray;
- (id)createFeedVMFromElementModel:(id)arg1;
- (void)pushToProfileWithContact:(id)arg1 feedVM:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (id)containerReadIds;
- (void)setupCellExposeReportLogic:(id)arg1 indexPath:(id)arg2 feedVM:(id)arg3;
- (void)reportValidExposeChanged:(id)arg1 isExpose:(BOOL)arg2 index:(unsigned long long)arg3;
- (void)reportAutoPlayStateChange:(id)arg1 isPlaying:(BOOL)arg2;
- (void)reportProductExposeIfNeeded:(id)arg1;
- (void)reportProductClick:(id)arg1 feedVM:(id)arg2;
- (id)getCommentSceneStr;
- (id)getReportChannelExtraMutableDictWithFeedVM:(id)arg1;
- (id)getReportChannelExtraStringWithFeedVM:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (unsigned long long)pageIndex;
- (void)setPageIndex:(unsigned long long)arg1;
- (id)topicId;
- (void)setTopicId:(id)arg1;
- (id)topicTitle;
- (void)setTopicTitle:(id)arg1;
- (id)themeTagId;
- (void)setThemeTagId:(id)arg1;
- (id)containerModel;
- (void)setContainerModel:(id)arg1;
- (BOOL)fromSceneIsTilingSwitch;
- (void)setFromSceneIsTilingSwitch:(BOOL)arg1;
- (void)setPlayingIndexPaths:(id)arg1;
- (id)feedVMs;
- (void)setFeedVMs:(id)arg1;
- (BOOL)isRequesting;
- (void)setIsRequesting:(BOOL)arg1;
- (id)hotSellingOptions;
- (void)setHotSellingOptions:(id)arg1;
- (id)contentVMSessionExtraKey;
- (void)setContentVMSessionExtraKey:(id)arg1;
- (void).cxx_destruct;
@end
