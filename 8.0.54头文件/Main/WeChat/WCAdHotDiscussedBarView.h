@interface WCAdHotDiscussedBarView : WCAdBaseBarView
{
    WCDataItem * _dataItem; // +0x8
    WCAdHotDiscussedBarInfo * _barInfo; // +0x10
    unsigned long long _itemScene; // +0x18
    MMUILabel * _labelTextView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUIView * _headImagesContainer; // +0x30
    MMUIImageView * _rightArrow; // +0x38
    MMUILabel * _discussedNumberLabel; // +0x40
    MMUIButton * _clickActionButton; // +0x48
}
+ (double)topMargin;
+ (double)bottomMargin;
+ (double)viewHeight;
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3 delegate:(id)arg4;
- (void)initSubviews;
- (void)adjustSubviews;
- (id)labelTextView;
- (id)rightArrow;
- (id)titleLabel;
- (id)discussedNumberLabel;
- (id)headImagesContainer;
- (id)clickActionButton;
- (void)onActionButtonClicked;
- (void)genHeadImagesContainer;
- (long long)maxHeadImageNumber;
- (id)genRoundHeadImageViewWithIndex:(long long)arg1;
- (double)headImagesContainerMaxWidth;
- (double)maxTitleWidth;
- (double)maxLabelTextWidth;
- (void)updateDataItem:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)barInfo;
- (void)setBarInfo:(id)arg1;
- (unsigned long long)itemScene;
- (void)setItemScene:(unsigned long long)arg1;
- (void)setLabelTextView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setHeadImagesContainer:(id)arg1;
- (void)setRightArrow:(id)arg1;
- (void)setDiscussedNumberLabel:(id)arg1;
- (void)setClickActionButton:(id)arg1;
- (void).cxx_destruct;
@end

