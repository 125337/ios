@interface WCShareCardGeneralHeaderViewV2 : WCShareCardBaseHeaderView <WCShareCardJumpToFinderButtonDelegate>
{
    BOOL _bIsGiftFromUserHeaderView; // +0x8
    int _cardType; // +0xc
    id <WCShareCardGeneralCardHeaderV2Delegate> _delegate; // +0x10
    MMUIView * _contentView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    double _viewWidth; // +0x28
    UIImageView * _cardQRImgView; // +0x30
    NSMutableArray * _textLabelArray; // +0x38
    NSMutableArray * _textArray; // +0x40
    MMUILabel * _detailLabel; // +0x48
    MMUIView * _headerTopHorizontalUIView; // +0x50
    MMUILabel * _subTitleLabel; // +0x58
    MMWebImageView * _headImageView; // +0x60
    MMWebImageView * _certifiedIconImageView; // +0x68
    WCShareCardJumpToFinderView * _jumpToFinderView; // +0x70
    MMUIView * _lineView; // +0x78
    MMUIButton * _shareCardImageUIView; // +0x80
    MMWebImageView * _shareCardImageView; // +0x88
    MMWebImageView * _shareCardPlayVideoImageView; // +0x90
    MMUIView * _conditionView; // +0x98
    MMUIView * _backView; // +0xa0
    CALayer * _maskLayer; // +0xa8
    UIImage * _disableBgImg; // +0xb0
    MMUILabel * _displaySubTitleLabel; // +0xb8
    MMUILabel * _displayAuxTitleLabel; // +0xc0
}
- (id)initWithViewWidth:(double)arg1 withCardSourceData:(id)arg2 isGiftFromUserHeaderView:(BOOL)arg3 isShareCard:(BOOL)arg4 cardStatus:(int)arg5 isNeedHideAccecptBtn:(BOOL)arg6 delegate:(id)arg7;
- (void)confiUIByData;
- (void)layoutSubviews;
- (double)viewHeight;
- (void)updateHeaderTopHorizontalUIView;
- (void)setAccessibilityLabelToView:(id)arg1 fieldItem:(id)arg2;
- (void)onWCShareCardJumpToFinderButtonClick;
- (id)textArray;
- (id)shareCardImageUIView;
- (void)onCardImgBtnClick:(id)arg1;
- (id)jumpToFinderView;
- (id)contentView;
- (id)detailLabel;
- (id)titleLabel;
- (id)subTitleLabel;
- (id)headImageView;
- (id)certifiedIconImageView;
- (id)headerTopHorizontalUIView;
- (id)lineView;
- (id)shareCardImageView;
- (id)shareCardPlayVideoImageView;
- (id)backView;
- (id)maskLayer;
- (BOOL)shouldShowConditionView;
- (double)calcUsedConditionHeight;
- (id)conditionView;
- (id)displaySubTitleLabel;
- (id)displayAuxTitleLabel;
- (void)singleSureButtonDidSelected;
- (id)getSubTitleName;
- (id)getTitleName;
- (BOOL)hasFeedField;
- (BOOL)hasCertifiedIcon;
- (BOOL)hasHeadImage;
- (BOOL)hasJumpToFinder;
- (id)getVailDateStr;
- (double)headImgLen;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (double)viewWidth;
- (void)setViewWidth:(double)arg1;
- (id)cardQRImgView;
- (void)setCardQRImgView:(id)arg1;
- (id)textLabelArray;
- (void)setTextLabelArray:(id)arg1;
- (void)setTextArray:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setHeaderTopHorizontalUIView:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setCertifiedIconImageView:(id)arg1;
- (void)setJumpToFinderView:(id)arg1;
- (void)setLineView:(id)arg1;
- (void)setShareCardImageUIView:(id)arg1;
- (void)setShareCardImageView:(id)arg1;
- (void)setShareCardPlayVideoImageView:(id)arg1;
- (void)setConditionView:(id)arg1;
- (void)setBackView:(id)arg1;
- (void)setMaskLayer:(id)arg1;
- (int)cardType;
- (void)setCardType:(int)arg1;
- (BOOL)bIsGiftFromUserHeaderView;
- (void)setBIsGiftFromUserHeaderView:(BOOL)arg1;
- (id)disableBgImg;
- (void)setDisableBgImg:(id)arg1;
- (void)setDisplaySubTitleLabel:(id)arg1;
- (void)setDisplayAuxTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

