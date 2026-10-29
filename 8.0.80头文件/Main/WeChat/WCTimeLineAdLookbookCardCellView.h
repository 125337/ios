@interface WCTimeLineAdLookbookCardCellView : UICollectionViewCell
{
    unsigned long long _index; // +0x8
    WCAdLookbookCardItem * _cardItem; // +0x10
    id <WCTimeLineAdLookbookCardCellViewDelegate> _delegate; // +0x18
    MMUILabel * _title; // +0x20
    UIImageView * _iconView; // +0x28
    MMUIButton * _coverButton; // +0x30
    MMUIView * _mediaHolderView; // +0x38
    WCTimeLineAdLookbookCardMediaView * _mediaView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateItemWithIndex:(unsigned long long)arg1 cardItem:(id)arg2 iconWidth:(double)arg3 delegate:(id)arg4;
- (void)layoutSubviews;
- (void)layoutTitleArea;
- (id)title;
- (id)iconView;
- (id)coverButton;
- (id)mediaHolderView;
- (id)mediaView;
- (CGSize)mediaSize;
- (void)onCoverButtonClicked:(id)arg1;
- (void)setVideoWithPlayState:(BOOL)arg1;
- (void)updateVideoPauseIconState:(BOOL)arg1;
- (void)setVideoControlViewHidden:(BOOL)arg1;
- (void)setVideoToStandby:(BOOL)arg1;
- (BOOL)shouldHideItemTitle;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (id)cardItem;
- (void)setCardItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setCoverButton:(id)arg1;
- (void)setMediaHolderView:(id)arg1;
- (void)setMediaView:(id)arg1;
- (void).cxx_destruct;
@end
