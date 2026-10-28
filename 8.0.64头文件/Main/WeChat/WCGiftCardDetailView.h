@interface WCGiftCardDetailView : MMUIView <UIScrollViewDelegate, WCMultiGiftDelegate, CAAnimationDelegate>
{
    BOOL _isFirstOpen; // +0x8
    BOOL _isOpened; // +0x9
    WCGiftCardData * _giftCardData; // +0x10
    double _viewWidth; // +0x18
    id <WCGiftCardDetailViewDelegate> _delegate; // +0x20
    WCFitLayoutView * _descriptView; // +0x28
    UILabel * _desLabel; // +0x30
    UILabel * _cardTitleLabel; // +0x38
    UILabel * _priceLabel; // +0x40
    MMWebImageView * _cardPic; // +0x48
    UIView * _cardBackShadowPic; // +0x50
    UIView * _topBarView; // +0x58
    UIScrollView * _scrollView; // +0x60
    UIView * _giftHeadView; // +0x68
    UIImageView * _leftBackGround; // +0x70
    UIImageView * _rightBackGround; // +0x78
    UILabel * _toUserLaebl; // +0x80
    WCGiftCardLetterView * _letterView; // +0x88
    MMWebImageView * _headImageView; // +0x90
    UILabel * _fromUserLabel; // +0x98
    UIButton * _jumpButton; // +0xa0
    UIButton * _operationButton; // +0xa8
    UIView * _divideLine; // +0xb0
    UIView * _edgeLine; // +0xb8
    UIView * _operationLine; // +0xc0
    UIButton * _centerJumpBtn; // +0xc8
    UILabel * _headerTitleLabel; // +0xd0
    WCMultiGiftView * _multiGiftView; // +0xd8
    WCMultiGiftPersonView * _multiGiftPersonView; // +0xe0
    UIView * _maskbackView; // +0xe8
    CGSize _topSize; // +0xf0
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createOutOfCardView;
- (void)createReceiveView;
- (void)createSendView;
- (void)createLetterView:(double)arg1;
- (void)createMultiGiftPersonView:(double)arg1;
- (void)createMaskBackView:(double)arg1;
- (void)createFooter:(double)arg1;
- (id)descriptView;
- (id)maskbackView;
- (id)multiGiftPersonView;
- (id)multiGiftView;
- (id)leftBackGround;
- (id)rightBackGround;
- (id)desLabel;
- (id)cardTitleLabel;
- (id)priceLabel;
- (id)cardPic;
- (id)cardBackShadowPic;
- (id)scrollView;
- (id)giftHeadView;
- (id)toUserLaebl;
- (id)letterView;
- (id)headImageView;
- (id)fromUserLabel;
- (id)jumpButton;
- (id)operationButton;
- (id)divideLine;
- (id)edgeLine;
- (id)operationLine;
- (id)topBarView;
- (id)headerTitleLabel;
- (id)centerJumpBtn;
- (void)setGiftCardData:(id)arg1;
- (void)backGroundDidClikced:(id)arg1;
- (void)doGiftOpening;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)doRefresh;
- (void)centerJumpBtnClick;
- (id)giftCardData;
- (double)viewWidth;
- (void)setViewWidth:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGSize)topSize;
- (void)setTopSize:(CGSize)arg1;
- (BOOL)isFirstOpen;
- (void)setIsFirstOpen:(BOOL)arg1;
- (BOOL)isOpened;
- (void)setIsOpened:(BOOL)arg1;
- (void)setDescriptView:(id)arg1;
- (void)setDesLabel:(id)arg1;
- (void)setCardTitleLabel:(id)arg1;
- (void)setPriceLabel:(id)arg1;
- (void)setCardPic:(id)arg1;
- (void)setCardBackShadowPic:(id)arg1;
- (void)setTopBarView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setGiftHeadView:(id)arg1;
- (void)setLeftBackGround:(id)arg1;
- (void)setRightBackGround:(id)arg1;
- (void)setToUserLaebl:(id)arg1;
- (void)setLetterView:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setFromUserLabel:(id)arg1;
- (void)setJumpButton:(id)arg1;
- (void)setOperationButton:(id)arg1;
- (void)setDivideLine:(id)arg1;
- (void)setEdgeLine:(id)arg1;
- (void)setOperationLine:(id)arg1;
- (void)setCenterJumpBtn:(id)arg1;
- (void)setHeaderTitleLabel:(id)arg1;
- (void)setMultiGiftView:(id)arg1;
- (void)setMultiGiftPersonView:(id)arg1;
- (void)setMaskbackView:(id)arg1;
- (void).cxx_destruct;
@end
