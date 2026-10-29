@interface GCMsgSheetCardCell : GCChatBaseCell
{
    MMWebImageView * _cardBgView; // +0x8
    MMWebImageView * _rightImgView; // +0x10
    UILabel * _headLabel; // +0x18
    NSMutableArray * _labelViewArray; // +0x20
}
+ (void)onCalculatLayoutInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)shouldBubbleViewClipsToBounds;
- (void)layoutSubviews;
- (void)configureWithCellModel:(id)arg1;
- (id)bindMsgSheetCardCellModel;
- (id)cardBgView;
- (void)setCardBgView:(id)arg1;
- (id)rightImgView;
- (void)setRightImgView:(id)arg1;
- (id)headLabel;
- (void)setHeadLabel:(id)arg1;
- (id)labelViewArray;
- (void)setLabelViewArray:(id)arg1;
- (void).cxx_destruct;
@end

