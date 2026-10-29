@interface WCFinderMemberShipZoneIntroduceHeader : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderMemberShipMoreCollectionViewCellDelegate, WCFinderMemberShipZoneIntroduceHeaderDataDelegate, ILinkEventExt, WCFinderProfileCardContainerExposeDelegate, UITableViewDelegate, WCFinderMeberShipActivityEvent, WCFinderFeedContentTextClickActionDelegate, WCFinderFeedContentTextViewLayoutDelegate>
{
    BOOL _descContentLabelIsExpand; // +0x8
    WCFinderMemberShipZoneIntroduceHeaderData * _data; // +0x10
    id <WCFinderMemberShipZoneIntroduceHeaderDelegate> _delegate; // +0x18
    WCFinderMemberShipIntroduceReporter * _reporter; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _descTitleLabel; // +0x30
    WCFinderFeedContentTextView * _descContentLabel; // +0x38
    UILabel * _exclusiveLiveTitleLabel; // +0x40
    WCFinderProfileCardContainer * _cardContainer; // +0x48
    UILabel * _exclusiveFeedTitleLabel; // +0x50
    UILabel * _exclusiveCollectionTitleLabel; // +0x58
    UILabel * _exclusivePlaybackTitleLabel; // +0x60
    UILabel * _exclusiveActivityTitleLabel; // +0x68
    UICollectionView * _feedCollectionView; // +0x70
    UICollectionView * _collectionCollectionView; // +0x78
    UICollectionView * _playbackCollectionView; // +0x80
    UITableView * _activityTableView; // +0x88
    UILabel * _payNoticeTitleLabel; // +0x90
    RichTextView * _payNoticeContent1; // +0x98
    RichTextView * _payNoticeContent2; // +0xa0
    RichTextView * _payNoticeContent3; // +0xa8
    UIImageView * _dotView1; // +0xb0
    UIImageView * _dotView2; // +0xb8
    UIImageView * _dotView3; // +0xc0
    WCFinderStreamFooterView * _footerView; // +0xc8
    WCFinderStreamFooterView * _noMoreView; // +0xd0
    WCFinderNoMoreView * _activityNoMoreView; // +0xd8
    UITableViewDiffableDataSource * _dataSource; // +0xe0
    WCFinderReuseQueue * _reuseQueue; // +0xe8
    WCFinderEventDelegate * _eventDelegate; // +0xf0
    WCFinderDetailTimeStringConfig * _timeStringConfig; // +0xf8
    UIView * _topSeparatorLine; // +0x100
    UIView * _bottomSeparatorLine; // +0x108
    UIButton * _moreButton; // +0x110
    WCFinderMSInteractionView * _interactionView; // +0x118
}
- (id)initWithFrame:(CGRect)arg1;
- (id)genTableView;
- (id)updateSnapshot;
- (void)reloadTableViewData;
- (id)genTitleLabel;
- (id)genRichTextView;
- (id)genContentTextView;
- (id)genCollectionView;
- (id)genFooterView;
- (id)genDotView;
- (id)genSeparatorLine;
- (id)genMoreButton;
- (void)setData:(id)arg1;
- (void)update;
- (double)getZoneTitleHeight;
- (void)onSectionHeaderClickAll:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)mediaSizeForItem;
- (CGSize)sizeForItem;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 indexPath:(id)arg2 cellForItemIdentifier:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onMemberShipZoneIntroduceHeaderDataChanged;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onCardView:(id)arg1 expose:(long long *)arg2 exposeCount:(long long)arg3 unExpose:(long long *)arg4 unExposeCount:(long long)arg5;
- (void)onActivityFeed:(id)arg1 clickPhoto:(id)arg2 photoIndex:(long long)arg3 originViewArr:(id)arg4;
- (void)onActivityFeed:(id)arg1 clickVideo:(id)arg2 originRect:(CGRect)arg3 originView:(id)arg4;
- (void)onActivityFeed:(id)arg1 notifyHeightChanged:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2;
- (BOOL)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)onFeedContentTextView:(id)arg1 clickText:(id)arg2 withRect:(CGRect)arg3;
- (id)data;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descTitleLabel;
- (void)setDescTitleLabel:(id)arg1;
- (id)descContentLabel;
- (void)setDescContentLabel:(id)arg1;
- (id)exclusiveLiveTitleLabel;
- (void)setExclusiveLiveTitleLabel:(id)arg1;
- (id)cardContainer;
- (void)setCardContainer:(id)arg1;
- (id)exclusiveFeedTitleLabel;
- (void)setExclusiveFeedTitleLabel:(id)arg1;
- (id)exclusiveCollectionTitleLabel;
- (void)setExclusiveCollectionTitleLabel:(id)arg1;
- (id)exclusivePlaybackTitleLabel;
- (void)setExclusivePlaybackTitleLabel:(id)arg1;
- (id)exclusiveActivityTitleLabel;
- (void)setExclusiveActivityTitleLabel:(id)arg1;
- (id)feedCollectionView;
- (void)setFeedCollectionView:(id)arg1;
- (id)collectionCollectionView;
- (void)setCollectionCollectionView:(id)arg1;
- (id)playbackCollectionView;
- (void)setPlaybackCollectionView:(id)arg1;
- (id)activityTableView;
- (void)setActivityTableView:(id)arg1;
- (id)payNoticeTitleLabel;
- (void)setPayNoticeTitleLabel:(id)arg1;
- (id)payNoticeContent1;
- (void)setPayNoticeContent1:(id)arg1;
- (id)payNoticeContent2;
- (void)setPayNoticeContent2:(id)arg1;
- (id)payNoticeContent3;
- (void)setPayNoticeContent3:(id)arg1;
- (id)dotView1;
- (void)setDotView1:(id)arg1;
- (id)dotView2;
- (void)setDotView2:(id)arg1;
- (id)dotView3;
- (void)setDotView3:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)noMoreView;
- (void)setNoMoreView:(id)arg1;
- (id)activityNoMoreView;
- (void)setActivityNoMoreView:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)reuseQueue;
- (void)setReuseQueue:(id)arg1;
- (id)eventDelegate;
- (void)setEventDelegate:(id)arg1;
- (BOOL)descContentLabelIsExpand;
- (void)setDescContentLabelIsExpand:(BOOL)arg1;
- (id)timeStringConfig;
- (void)setTimeStringConfig:(id)arg1;
- (id)topSeparatorLine;
- (void)setTopSeparatorLine:(id)arg1;
- (id)bottomSeparatorLine;
- (void)setBottomSeparatorLine:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (id)interactionView;
- (void)setInteractionView:(id)arg1;
- (void).cxx_destruct;
@end
