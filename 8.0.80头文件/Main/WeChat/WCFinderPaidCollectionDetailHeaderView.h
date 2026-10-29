@interface WCFinderPaidCollectionDetailHeaderView : UIView <WCFinderFeedContentTextClickActionDelegate, MMWebImageViewDelegate>
{
    id <WCFinderPaidCollectionDetailHeaderDelegate> _delegate; // +0x8
    MMWebImageView * _coverImgView; // +0x10
    UIView * _infoContainer; // +0x18
    UILabel * _titleLabel; // +0x20
    MMUIButton * _moreBtn; // +0x28
    UILabel * _episodeLabel; // +0x30
    UILabel * _orderCountLabel; // +0x38
    UILabel * _descTitleLabel; // +0x40
    WCFinderFeedContentTextView * _descTextView; // +0x48
    UILabel * _collectionTitleLabel; // +0x50
    FinderPaidCollectionInfo * _paidCollection; // +0x58
    double _layoutWidth; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)setupPaidCollectionInfoContainer;
- (void)updateWithPaidCollection:(id)arg1;
- (void)updateInfoContainer;
- (void)layoutSubviews;
- (void)layoutUI;
- (BOOL)isHalfScreen;
- (BOOL)isAuthorScene;
- (id)currentContact;
- (id)descContentConfig;
- (id)collectionTitle;
- (double)descMarginLeft;
- (double)contentHPadding;
- (void)onMoreButtonClicked:(id)arg1;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)coverImgView;
- (void)setCoverImgView:(id)arg1;
- (id)infoContainer;
- (void)setInfoContainer:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)moreBtn;
- (void)setMoreBtn:(id)arg1;
- (id)episodeLabel;
- (void)setEpisodeLabel:(id)arg1;
- (id)orderCountLabel;
- (void)setOrderCountLabel:(id)arg1;
- (id)descTitleLabel;
- (void)setDescTitleLabel:(id)arg1;
- (id)descTextView;
- (void)setDescTextView:(id)arg1;
- (id)collectionTitleLabel;
- (void)setCollectionTitleLabel:(id)arg1;
- (id)paidCollection;
- (void)setPaidCollection:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
