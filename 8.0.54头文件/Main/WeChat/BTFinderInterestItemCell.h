@interface BTFinderInterestItemCell : UICollectionViewCell <WCFinderShareAbstractCell>
{
    id /* block */ _onClickCoverAreaBlock; // +0x8
    id /* block */ _onLongClickCoverAreaBlock; // +0x10
    BTFinderInterestCellContainerView * _containerView; // +0x18
    WCFinderFeedImageCDNView * _topCoverView; // +0x20
    WCFinderFeedImageCDNView * _middleCoverView; // +0x28
    UIView * _middleCoverBgView; // +0x30
    WCFinderFeedImageCDNView * _bottomCoverView; // +0x38
    BTRichTextTagView * _textView; // +0x40
    MMUILabel * _recommendLabel; // +0x48
    WCFinderMPInterestData * _interestData; // +0x50
}
+ (id)cellIdentifier;
+ (double)cellHeight;
+ (double)cellWidth;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithInterestData:(id)arg1;
- (void)setContentAreaHighlight:(BOOL)arg1;
- (void)setupSubviews;
- (void)loadData;
- (void)updateCoverView:(id)arg1 withDataItem:(id)arg2;
- (void)onClickContentArea;
- (void)onLongClickContentArea;
- (id)containerView;
- (id)topCoverView;
- (id)middleCoverView;
- (id)middleCoverBgView;
- (id)bottomCoverView;
- (id)textView;
- (id)textViewStylesWithText:(id)arg1;
- (id)recommendLabel;
- (id)transitionStartImage;
- (CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(BOOL)arg2;
- (void)doShareAnimation;
- (id /* block */)onClickCoverAreaBlock;
- (void)setOnClickCoverAreaBlock:(id /* block */)arg1;
- (id /* block */)onLongClickCoverAreaBlock;
- (void)setOnLongClickCoverAreaBlock:(id /* block */)arg1;
- (void)setContainerView:(id)arg1;
- (void)setTopCoverView:(id)arg1;
- (void)setMiddleCoverView:(id)arg1;
- (void)setMiddleCoverBgView:(id)arg1;
- (void)setBottomCoverView:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setRecommendLabel:(id)arg1;
- (id)interestData;
- (void)setInterestData:(id)arg1;
- (void).cxx_destruct;
@end

