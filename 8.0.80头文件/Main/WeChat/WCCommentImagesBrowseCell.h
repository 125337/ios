@interface WCCommentImagesBrowseCell : UICollectionViewCell <MMImageLoaderObserver, ExpandableTextViewDelegate>
{
    long long _index; // +0x8
    WCUserComment * _commentUserInfo; // +0x10
    WCDataItem * _dataItem; // +0x18
    WCMomentsPageContext * _pageContext; // +0x20
    NSString * _snsSessionId; // +0x28
    long long _snsScene; // +0x30
    id <WCCommentImagesBrowseCellDelegate> _delegate; // +0x38
    WCImageFullScreenViewContainer * _imageContainer; // +0x40
    ExpandableTextView * _commentContentTextView; // +0x48
    UIView * _bottomView; // +0x50
    UIView * _tapGestureView; // +0x58
    MMUILabel * _nameLabel; // +0x60
    MMUILabel * _replyLabel; // +0x68
    MMUILabel * _refNameLabel; // +0x70
    MMHeadImageView * _headImageView; // +0x78
    MMUILabel * _timeLabel; // +0x80
    CAGradientLayer * _gradientLayer; // +0x88
}
+ (id)cellID;
+ (id)generateImageContainerWithComment:(id)arg1 dataItem:(id)arg2 startFrame:(CGRect)arg3;
+ (id)generateMediaWrapWithMediaItem:(id)arg1 dataItem:(id)arg2 index:(unsigned int)arg3;
+ (id)getDisplayName:(id)arg1 nickname:(id)arg2;
- (void)configWithComment:(id)arg1 dataItem:(id)arg2 imgContainer:(id)arg3;
- (void)initViews;
- (void)checkAndTryAddContainerViewIfNeeded;
- (id)tapGestureView;
- (id)commentContentTextView;
- (void)onNameClicked;
- (void)onRefNameClicked;
- (void)onHeadImageClicked;
- (id)headImageView;
- (id)nameLabel;
- (id)getDisplayName:(id)arg1;
- (id)refNameLabel;
- (id)replyLabel;
- (id)getDisplayCommentContent:(id)arg1 dataItem:(id)arg2 pageContext:(id)arg3;
- (BOOL)isAdPreferInfo;
- (id)timeLabel;
- (unsigned int)getCommentCreateTime;
- (id)bottomView;
- (void)setupTapGesture;
- (void)handleTap:(id)arg1;
- (void)addTopToBottomGradientMaskToView:(id)arg1 startLocation:(double)arg2 endLocation:(double)arg3;
- (void)layoutBottomSubviews;
- (void)layoutSubviews;
- (void)tryDownloadImage;
- (void)resetCellData;
- (void)resetCellViews;
- (void)prepareForReuse;
- (void)setBottomViewHidden:(BOOL)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (BOOL)isDownloadUrlForAdPreferHead:(id)arg1;
- (void)onExpandableTextViewExpand:(BOOL)arg1;
- (void)reportCmtBigPicExpandEven:(BOOL)arg1;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (id)commentUserInfo;
- (void)setCommentUserInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (id)snsSessionId;
- (void)setSnsSessionId:(id)arg1;
- (long long)snsScene;
- (void)setSnsScene:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)imageContainer;
- (void)setImageContainer:(id)arg1;
- (void)setCommentContentTextView:(id)arg1;
- (void)setBottomView:(id)arg1;
- (void)setTapGestureView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setReplyLabel:(id)arg1;
- (void)setRefNameLabel:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end
