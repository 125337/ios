@interface WCTimeLineCommentCellView : MMUIView <IWCMyStoryUserStateUtilExt, ILinkEventExt, WCActionSheetDelegate, WCCommentViewFBDelegate>
{
    long long _iSection; // +0x8
    long long _iRow; // +0x10
    WCDataItem * _mainDataItem; // +0x18
    id <WCTimeLineCommentCellViewDelegate> m_delegate; // +0x20
    id <ILinkEventExt> m_urlDelegate; // +0x28
    UIView * m_likeContainer; // +0x30
    UIView * m_lineView; // +0x38
    WCCommentViewFB * m_commentView; // +0x40
    BOOL m_bHaveActionSheet; // +0x48
    BOOL m_isFoldCommentclk; // +0x49
    BOOL _needTopRoundCorner; // +0x4a
    BOOL _needBottomRoundCorner; // +0x4b
    NSMutableArray * _hasNewStoryArray; // +0x50
    UIView * _accessibilityView; // +0x58
}
+ (id)getNickNameForDataItem:(id)arg1;
+ (double)getCellHeightForDataItem:(id)arg1 RowIndex:(long long)arg2;
+ (long long)getCommentIndexForDataItem:(id)arg1 RowIndex:(long long)arg2;
+ (BOOL)isLastComment:(id)arg1 RowIndex:(long long)arg2;
+ (double)getCommentViewWidth;
+ (double)getCommentViewLeftMarginCurOri;
+ (unsigned long long)getCommentViewCountForDataItem:(id)arg1;
+ (BOOL)GetIsCommentCellRow:(id)arg1 RowIndex:(long long)arg2;
+ (BOOL)GetIsLastCommentOrLikeCell:(id)arg1 RowIndex:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithUrlDelegate:(id)arg1;
- (BOOL)isShowLikeCell;
- (id)getShowComment;
- (void)reportCommentFoldClk;
- (void)initLikeContainer;
- (void)checkAdSocialLikeIcon:(id)arg1;
- (void)initHasNewStoryArray;
- (void)initLineView;
- (void)initAdFireworkCheerPaddingView;
- (void)setMainDataItem:(id)arg1;
- (void)initView;
- (void)initAccessibilityViewWithAccessibilityLabel:(id)arg1;
- (void)setRoundCorner;
- (void)deleteComment:(unsigned long long)arg1;
- (void)showCommentDeleteOption:(id)arg1;
- (void)showCommentClickOption:(id)arg1;
- (void)showDeleteSelfCommentOption:(id)arg1 userInfo:(id)arg2 index:(long long)arg3;
- (void)showDeleteFriendsCommentOption:(id)arg1 userInfo:(id)arg2 index:(long long)arg3;
- (void)showReplyCommentOption:(id)arg1 userInfo:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onCommentViewDelete:(id)arg1;
- (void)onCommentViewClicked:(id)arg1;
- (void)onReloadCommentCellView:(id)arg1;
- (void)onRestoreCommentCellView:(id)arg1;
- (void)onFulltextBtnClick:(id)arg1;
- (void)onCommentViewEmotionViewSingleClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onCommentViewTopicTagClicked:(id)arg1 query:(id)arg2;
- (void)onCommentViewChangeTranslateLanguage:(id)arg1 commentUserInfo:(id)arg2;
- (void)onSetUnreadStoryMarkWithUserName:(id)arg1;
- (void)onClearUnreadStoryMarkWithUserName:(id)arg1;
- (long long)iSection;
- (void)setISection:(long long)arg1;
- (long long)iRow;
- (void)setIRow:(long long)arg1;
- (id)mainDataItem;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_urlDelegate;
- (void)setM_urlDelegate:(id)arg1;
- (id)hasNewStoryArray;
- (void)setHasNewStoryArray:(id)arg1;
- (BOOL)needTopRoundCorner;
- (void)setNeedTopRoundCorner:(BOOL)arg1;
- (BOOL)needBottomRoundCorner;
- (void)setNeedBottomRoundCorner:(BOOL)arg1;
- (id)accessibilityView;
- (void)setAccessibilityView:(id)arg1;
- (void).cxx_destruct;
@end

