@interface MMFinderLiveNewStartView : UIView <MMFinderLiveMgrExt, UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _bottomNoticeEnableClick; // +0x8
    id <MMFinderLiveNewStartViewDelegate> _delegate; // +0x10
    NSString * _topicString; // +0x18
    WCFinderHeadImageView * _coverImageView; // +0x20
    MMUIButton * _startLiveButton; // +0x28
    MMLiveTaskId * _taskId; // +0x30
    NSString * _topicPlaceHolder; // +0x38
    NSArray * _controlItems; // +0x40
    NSString * _bottomNoticeText; // +0x48
    UIView * _gradientView; // +0x50
    CAGradientLayer * _topGradientLayer; // +0x58
    MMUIButton * _closeButton; // +0x60
    UIView * _topicContainer; // +0x68
    UILabel * _topicLabel; // +0x70
    UILabel * _changeTopicLabel; // +0x78
    CAGradientLayer * _bottomGradientLayer; // +0x80
    UICollectionView * _controlButtonPanel; // +0x88
    MMLiveNoticeSelectButton * _noticeSelectButton; // +0x90
}
- (id)initWithTaskId:(id)arg1;
- (void)layoutSubviews;
- (void)updateTopicLabelWithBulletinInfo:(id)arg1 placeHolder:(id)arg2;
- (void)updateControlPanelWithItems:(id)arg1;
- (void)updateBottomNoticeText:(id)arg1 enableClick:(BOOL)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)layoutUI;
- (void)layoutGradientLayer;
- (void)layoutTopArea;
- (void)layoutTopicLabel;
- (void)layoutBottomArea;
- (void)layoutStartArea;
- (BOOL)canShowNoticeBtn;
- (id)gradientView;
- (id)topGradientLayer;
- (id)bottomGradientLayer;
- (id)closeButton;
- (id)startLiveButton;
- (id)coverImageView;
- (id)topicContainer;
- (id)topicLabel;
- (id)changeTopicLabel;
- (id)controlButtonPanel;
- (id)noticeSelectButton;
- (id)liveTask;
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
- (void)setTopGradientLayer:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setTopicContainer:(id)arg1;
- (void)setTopicLabel:(id)arg1;
- (void)setChangeTopicLabel:(id)arg1;
- (void)setBottomGradientLayer:(id)arg1;
- (void)setControlButtonPanel:(id)arg1;
- (void)setNoticeSelectButton:(id)arg1;
- (void).cxx_destruct;
@end
