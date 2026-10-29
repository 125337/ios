@interface MMFinderLiveNewStartView : UIView <MMFinderLiveMgrExt, UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, ClickStatSwizzleExt>
{
    BOOL _bottomNoticeEnableClick; // +0x8
    id <MMFinderLiveNewStartViewDelegate> _delegate; // +0x10
    NSString * _topicString; // +0x18
    WCFinderHeadImageView * _coverImageView; // +0x20
    MMUIButton * _startLiveButton; // +0x28
    MMLiveSyndicateModel * _syndicateModel; // +0x30
    MMLiveTaskId * _taskId; // +0x38
    NSString * _topicPlaceHolder; // +0x40
    NSArray * _controlItems; // +0x48
    NSString * _bottomNoticeText; // +0x50
    UIView * _gradientView; // +0x58
    UIPinchGestureRecognizer * _pinchGesture; // +0x60
    UITapGestureRecognizer * _tapGesture; // +0x68
    CAGradientLayer * _topGradientLayer; // +0x70
    MMUIButton * _closeButton; // +0x78
    UIView * _topicContainer; // +0x80
    UILabel * _topicLabel; // +0x88
    UILabel * _changeTopicLabel; // +0x90
    MMFinderLivePreparePageAnnouncementBarView * _announcementBarView; // +0x98
    CAGradientLayer * _bottomGradientLayer; // +0xa0
    UICollectionView * _controlButtonPanel; // +0xa8
    MMLiveNoticeSelectButton * _noticeSelectButton; // +0xb0
    MMLiveEditMicTopicButton * _editMicTopicButton; // +0xb8
    MMLiveSyndicateManagementEntryView * _syndicateManagementEntryView; // +0xc0
    MMFinderLiveGuidePubbleTipView * _startTestLiveGuideView; // +0xc8
    MMFinderLiveGuidePubbleTipView * _coverEnhanceGuideView; // +0xd0
}
- (id)initWithTaskId:(id)arg1;
- (void)layoutSubviews;
- (void)initGesture;
- (void)handleTapGesture;
- (void)handlePinchGesture;
- (void)updateTopicLabelWithBulletinInfo:(id)arg1 placeHolder:(id)arg2;
- (void)updateControlPanelWithItems:(id)arg1;
- (void)updateBottomNoticeText:(id)arg1 enableClick:(BOOL)arg2;
- (void)dismissRedDotForItem:(id)arg1;
- (void)handleMicTopicUpdated;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setSyndicateModel:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onSendEvent:(id)arg1;
- (void)layoutUI;
- (void)layoutGradientLayer;
- (void)layoutTopArea;
- (void)layoutAnnouncementBar;
- (void)layoutTopicLabel;
- (void)layoutBottomArea;
- (void)layoutStartArea;
- (BOOL)canShowNoticeBtn;
- (id)getControlButtonViewByItem:(id)arg1;
- (BOOL)showStartTestLiveGuideViewAboveItem:(id)arg1 animated:(BOOL)arg2 clickGuideBlock:(id /* block */)arg3;
- (void)dismissStartTestLiveGuideViewAnimated:(BOOL)arg1;
- (BOOL)showCoverEnhanceGuideViewAnimated:(BOOL)arg1 clickGuideBlock:(id /* block */)arg2 clickOutsideBlock:(id /* block */)arg3;
- (void)dismissCoverEnhanceGuideViewAnimated:(BOOL)arg1;
- (void)updateStartButtonTitleForTestLiveMode:(BOOL)arg1;
- (void)dismissCommonGuideView:(id)arg1 animated:(BOOL)arg2;
- (id)gradientView;
- (id)topGradientLayer;
- (id)bottomGradientLayer;
- (id)closeButton;
- (id)announcementBarView;
- (BOOL)updateAnnouncementBarWithInfo:(id)arg1;
- (id)startLiveButton;
- (id)coverImageView;
- (id)topicContainer;
- (id)topicLabel;
- (id)changeTopicLabel;
- (id)controlButtonPanel;
- (id)noticeSelectButton;
- (id)syndicateManagementEntryView;
- (void)onSyndicateManagementEntryTapped;
- (id)startTestLiveGuideView;
- (id)coverEnhanceGuideView;
- (id)liveTask;
- (BOOL)usePortraitLayoutInAllOrientations;
- (BOOL)isPortrait;
- (CGRect)mainVideoFrame;
- (double)startAreaTop;
- (double)controlPanelItemPadding;
- (CGSize)controlPanelSize;
- (double)getBottomControlAreaTop;
- (double)getAudioRoomInfoViewTop;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)topicString;
- (void)setTopicString:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setStartLiveButton:(id)arg1;
- (id)syndicateModel;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)topicPlaceHolder;
- (void)setTopicPlaceHolder:(id)arg1;
- (id)controlItems;
- (void)setControlItems:(id)arg1;
- (id)bottomNoticeText;
- (void)setBottomNoticeText:(id)arg1;
- (BOOL)bottomNoticeEnableClick;
- (void)setBottomNoticeEnableClick:(BOOL)arg1;
- (void)setGradientView:(id)arg1;
- (id)pinchGesture;
- (void)setPinchGesture:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void)setTopGradientLayer:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setTopicContainer:(id)arg1;
- (void)setTopicLabel:(id)arg1;
- (void)setChangeTopicLabel:(id)arg1;
- (void)setAnnouncementBarView:(id)arg1;
- (void)setBottomGradientLayer:(id)arg1;
- (void)setControlButtonPanel:(id)arg1;
- (void)setNoticeSelectButton:(id)arg1;
- (id)editMicTopicButton;
- (void)setEditMicTopicButton:(id)arg1;
- (void)setSyndicateManagementEntryView:(id)arg1;
- (void)setStartTestLiveGuideView:(id)arg1;
- (void)setCoverEnhanceGuideView:(id)arg1;
- (void).cxx_destruct;
@end
