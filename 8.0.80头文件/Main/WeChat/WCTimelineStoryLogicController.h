@interface WCTimelineStoryLogicController : NSObject <IWCStoryEntranceVMExt, WCStoryTimelineEntranceTableViewCellDelegate, WCStoryFriendsCollectionViewControllerDelegate, WCTimelineLogicControllerImplProtocol>
{
    BOOL _storyEntranceIsVisiable; // +0x8
    WCStoryTimelineEntranceTableViewCell * _storyCell; // +0x10
    id <WCTimelineLogicControllerDelegate> _delegate; // +0x18
    MMUIButton * _storyHeaderButton; // +0x20
    MMUIImageView * _arrowImageView; // +0x28
    MMUILabel * _countLabel; // +0x30
    MMUILabel * _unreadTotalCountLabel; // +0x38
    WCStoryEntranceVM * _entranceVM; // +0x40
    NSMutableArray * _storyHeadImageViewArray; // +0x48
    NSNumber * _storyEntranceSwitch; // +0x50
    unsigned long long _unreadRelatedCommentCount; // +0x58
    WCStoryReportUtil * _storyReportUtil; // +0x60
}
- (id)initWithDelegate:(id)arg1;
- (void)Reset;
- (void)Register;
- (unsigned int)headerSectionCntInMainController;
- (BOOL)shouldShowStoryCell;
- (id)storyEntranceSwitch;
- (void)setupStoryHeaderView;
- (id)countLabel;
- (id)unreadTotalCountLabel;
- (id)storyHeaderButton;
- (void)openStoryNewEntrance;
- (void)updateUnreadTotalCommentCountLabel;
- (id)genHeadImageDataFromUnreadStoryData:(id)arg1;
- (void)updateUnreadStoryHeadImageView:(id)arg1;
- (id)entranceVM;
- (void)reloadStoryConfigure;
- (void)reloadContactHasUnreadStory;
- (void)reloadStoryVMData;
- (void)updateUnreadStoryCountLabel:(id)arg1;
- (void)reloadStoryCell;
- (void)bindStoryCell:(id)arg1;
- (BOOL)friendVisitSwitchOn;
- (void)storyEntranceNeedReload;
- (void)StoryTimelineEntranceTableViewCellDidClickTopButton;
- (void)StoryTimelineEntranceTableViewCellDidClickClearButton;
- (void)clearStoryFriendsVideo;
- (void)recordStoryEntranceInfo;
- (BOOL)isStoryEntranceVisiable;
- (id)storyReportUtil;
- (void)reportStoryVideoCleanExposeData;
- (void)reportStoryEntrance:(id)arg1 unreadCount:(unsigned int)arg2 unreadRelatedCommentCount:(unsigned int)arg3;
- (void)recordExposure;
- (void)resetVisiableState;
- (void)reloadConfigAndSetupEntranceView;
- (void)resetContentInset;
- (void)scrollToTopIfNeeded:(unsigned long long)arg1;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)showMultiContactPreviewViewController:(id)arg1 dismissVC:(id)arg2;
- (BOOL)shouldUseBlackStatusBar:(id)arg1;
- (id)storyCell;
- (void)setStoryCell:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setStoryHeaderButton:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void)setCountLabel:(id)arg1;
- (void)setUnreadTotalCountLabel:(id)arg1;
- (void)setEntranceVM:(id)arg1;
- (id)storyHeadImageViewArray;
- (void)setStoryHeadImageViewArray:(id)arg1;
- (BOOL)storyEntranceIsVisiable;
- (void)setStoryEntranceIsVisiable:(BOOL)arg1;
- (void)setStoryEntranceSwitch:(id)arg1;
- (unsigned long long)unreadRelatedCommentCount;
- (void)setUnreadRelatedCommentCount:(unsigned long long)arg1;
- (void)setStoryReportUtil:(id)arg1;
- (void).cxx_destruct;
@end
