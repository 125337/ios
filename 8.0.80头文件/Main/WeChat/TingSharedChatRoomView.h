@interface TingSharedChatRoomView : UIView
{
    unsigned long long _type; // +0x8
    double _availableCardWidth; // +0x10
    UIView * _contentView; // +0x18
    MMWebImageView * _bgView; // +0x20
    UIImageView * _maskLayerView; // +0x28
    UIImageView * _iconView; // +0x30
    MMUILabel * _logoLabel; // +0x38
    MMWebImageView * _headImgView; // +0x40
    MMUILabel * _titleLabel; // +0x48
    MMUILabel * _authorNameLabel; // +0x50
    MMListenCategoryItem * _categoryItem; // +0x58
    MMWebImageView * _coverImageView; // +0x60
    UIView * _seperatorLine; // +0x68
    MMUILabel * _chatroomLabel; // +0x70
    UIView * _logoLabelBgView; // +0x78
    double _textMarginTop; // +0x80
    NSString * _headImgUrl; // +0x88
}
+ (double)cardHeight;
+ (double)cardWidthForChatWithContainerWidth:(double)arg1;
+ (double)cardWidthForMomentWithContainerWidth:(double)arg1;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)arg1;
- (double)cardWidth;
- (void)setAvailableCardWidth:(double)arg1;
- (id)contentView;
- (id)iconView;
- (id)maskLayerView;
- (id)bgView;
- (id)headImgView;
- (int)fontModule;
- (id)titleFont;
- (id)authorNameFont;
- (id)logoFont;
- (id)chatroomLabelFont;
- (id)titleLabel;
- (id)logoLabel;
- (id)logoLabelBgView;
- (id)authorNameLabel;
- (id)coverImageView;
- (id)seperatorLine;
- (id)chatroomLabel;
- (id)initWithFrame:(CGRect)arg1;
- (void)configureLayout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)updateDisplayWithCategoryItem:(id)arg1 andListenItem:(id)arg2 closedState:(long long)arg3;
- (void)setHighlighted:(BOOL)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (double)availableCardWidth;
- (void)setContentView:(id)arg1;
- (void)setBgView:(id)arg1;
- (void)setMaskLayerView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setLogoLabel:(id)arg1;
- (void)setHeadImgView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setAuthorNameLabel:(id)arg1;
- (id)categoryItem;
- (void)setCategoryItem:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setSeperatorLine:(id)arg1;
- (void)setChatroomLabel:(id)arg1;
- (void)setLogoLabelBgView:(id)arg1;
- (double)textMarginTop;
- (void)setTextMarginTop:(double)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (void).cxx_destruct;
@end
