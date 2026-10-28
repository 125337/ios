@interface ReaderItemView : UIButton <RichTextLayoutDelegate, MMWebImageViewDelegate, ReaderReporterExt>
{
    int type; // +0x8
    unsigned int itemShowType; // +0xc
    unsigned int m_uiReaderIndex; // +0x10
    BOOL m_bHasBottomBtn; // +0x14
    BOOL m_isSelected; // +0x15
    BTRichTextTagView * m_titleView; // +0x18
    NSString * m_nsTitle; // +0x20
    NSString * m_nsCover; // +0x28
    NSString * m_nsDigest; // +0x30
    unsigned int m_uiDelFlag; // +0x38
    unsigned int m_itemShowType; // +0x3c
    NSString * m_nsContentUrl; // +0x40
    CGSize m_titleSize; // +0x48
    CGSize m_digestSize; // +0x58
    double m_labelMaxWidth; // +0x68
    unsigned long long m_limitLineNumber; // +0x70
    NSMutableArray * m_titleStyles; // +0x78
    NSMutableArray * m_digestStyles; // +0x80
    UIImageView * m_headImageBk; // +0x88
    UIView * m_highlightMaskView; // +0x90
    MMWebImageView * m_coverImage; // +0x98
    id <ReaderItemViewDelegate> m_delegate; // +0xa0
    RichTextView * m_digestView; // +0xa8
    CAGradientLayer * m_gradientLayer; // +0xb0
    CALayer * m_coverMaskLayer; // +0xb8
    BOOL _canShowImageIcon; // +0xc0
    BOOL _isPayContent; // +0xc1
    BOOL _isPaid; // +0xc2
    BOOL _isBrandLiveContent; // +0xc3
    BOOL _isBrandLive; // +0xc4
    unsigned long long _m_imageCount; // +0xc8
    UIImage * _paySubcribeTagImage; // +0xd0
    NSString * _brandLiveStatusWording; // +0xd8
    CGSize _payTagSize; // +0xe0
    CGSize _brandLiveSize; // +0xf0
}
- (id)init;
- (void)drawRect:(CGRect)arg1;
- (void)onTableViewDidScrollDown;
- (void)startInitView;
- (void)setHighlighted:(BOOL)arg1;
- (void)forceSetHighlighted:(BOOL)arg1;
- (void)topView;
- (void)normalView;
- (void)initTopTitleView;
- (void)initNormalTitleView;
- (void)initTag;
- (id)getWebImageViewWithFrame:(CGRect)arg1;
- (id)itemLabelWithFont:(double)arg1 size:(CGSize)arg2;
- (id)richTextWithFont:(id)arg1 width:(double)arg2;
- (id)timeText:(unsigned long long)arg1;
- (void)initCoverImageView;
- (void)initHighlightMaskView;
- (id)getCoverImageView;
- (void)initTopViewCoverLayer;
- (void)setTopViewLoading:(BOOL)arg1;
- (double)appendNodeViewHeightIfIndex;
- (void)onLoadImageOK:(id)arg1;
- (void)onBeginTouch;
- (void)onClicked;
- (void)NotifyItemClicked;
- (void)onTouchRepeat;
- (void)handleLongPressEx:(id)arg1;
- (id)accessibilityLabel;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned int)m_uiReaderIndex;
- (void)setM_uiReaderIndex:(unsigned int)arg1;
- (BOOL)m_bHasBottomBtn;
- (void)setM_bHasBottomBtn:(BOOL)arg1;
- (id)m_nsTitle;
- (void)setM_nsTitle:(id)arg1;
- (id)m_nsCover;
- (void)setM_nsCover:(id)arg1;
- (id)m_nsDigest;
- (void)setM_nsDigest:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_uiDelFlag;
- (void)setM_uiDelFlag:(unsigned int)arg1;
- (id)m_headImageBk;
- (void)setM_headImageBk:(id)arg1;
- (CGSize)m_titleSize;
- (void)setM_titleSize:(CGSize)arg1;
- (CGSize)m_digestSize;
- (void)setM_digestSize:(CGSize)arg1;
- (double)m_labelMaxWidth;
- (void)setM_labelMaxWidth:(double)arg1;
- (unsigned long long)m_limitLineNumber;
- (void)setM_limitLineNumber:(unsigned long long)arg1;
- (unsigned int)m_itemShowType;
- (void)setM_itemShowType:(unsigned int)arg1;
- (id)m_nsContentUrl;
- (void)setM_nsContentUrl:(id)arg1;
- (id)m_titleStyles;
- (void)setM_titleStyles:(id)arg1;
- (id)m_digestStyles;
- (void)setM_digestStyles:(id)arg1;
- (unsigned long long)m_imageCount;
- (void)setM_imageCount:(unsigned long long)arg1;
- (BOOL)canShowImageIcon;
- (void)setCanShowImageIcon:(BOOL)arg1;
- (BOOL)isPayContent;
- (void)setIsPayContent:(BOOL)arg1;
- (BOOL)isPaid;
- (void)setIsPaid:(BOOL)arg1;
- (CGSize)payTagSize;
- (void)setPayTagSize:(CGSize)arg1;
- (id)paySubcribeTagImage;
- (void)setPaySubcribeTagImage:(id)arg1;
- (BOOL)isBrandLiveContent;
- (void)setIsBrandLiveContent:(BOOL)arg1;
- (BOOL)isBrandLive;
- (void)setIsBrandLive:(BOOL)arg1;
- (CGSize)brandLiveSize;
- (void)setBrandLiveSize:(CGSize)arg1;
- (id)brandLiveStatusWording;
- (void)setBrandLiveStatusWording:(id)arg1;
- (void).cxx_destruct;
@end
