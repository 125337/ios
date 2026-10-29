@interface ReaderMessageViewModel : BaseMessageViewModel <RichTextLayoutDelegate, BrandPaySubcribeMgrExt, MMWebImageViewDelegate>
{
    CGSize m_titleViewSize; // +0x60
    NSMutableArray * m_titleStyles; // +0x70
    CGSize m_digestViewSize; // +0x78
    NSMutableArray * m_digestStyles; // +0x88
    NSArray * m_arrBtnList; // +0x90
    double m_messageViewWidth; // +0x98
    double m_digestViewMaxHeight; // +0xa0
    BOOL m_isPaySubcribeOpen; // +0xa8
    BOOL m_bIsPaid; // +0xa9
    NSString * m_pageIdentifier; // +0xb0
    BOOL _forceHideComplaintButton; // +0xb8
    BOOL _hasExposure; // +0xb9
    unsigned long long _viewScale; // +0xc0
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (id)makeHighlightedLabel:(id)arg1 previewInfo:(id)arg2;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)accessibilityDescription;
- (BOOL)isDisableEditMode;
- (BOOL)isReaderWrapWeappJumpType;
- (void)initPaidStateIfNeed;
- (id)readerWraps;
- (id)nodeBtnList;
- (BOOL)isShowReadAll;
- (BOOL)isShowHeadImageAndNickname;
- (BOOL)isForbidForward;
- (id)brandContact;
- (double)messageNodeViewWidth;
- (void)resetTextSize;
- (double)messageNodeViewHeight;
- (double)insideWidth;
- (id)titleText;
- (CGSize)titleViewSize;
- (id)titleStyles;
- (CGSize)calculateTitleViewSize;
- (BOOL)hasTitleTag;
- (CGSize)titleTagImageSize;
- (CGSize)digestViewSize;
- (id)digestStyles;
- (CGSize)calculateDigestViewSize;
- (id)coverImageURL;
- (double)coverImageHeight;
- (id)getSmallVideoImage;
- (id)getBigVideoImage;
- (id)getTitleString:(id)arg1 bBig:(BOOL)arg2 bGray:(BOOL)arg3;
- (id)timeToStr:(id)arg1;
- (double)digestViewMaxHeight;
- (BOOL)shouldShowFooterView;
- (BOOL)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (double)limitTitleWidth;
- (unsigned long long)limitLineNumber;
- (BOOL)isPayContent;
- (BOOL)isPaid;
- (CGSize)payTagSize;
- (id)paySubcribeTagImage;
- (void)onUpdateMPPagePaySubcribeHasPaidWithPageIdentifier:(id)arg1 fullUrl:(id)arg2;
- (void)updatePayStatus:(BOOL)arg1;
- (void)updateTitle;
- (double)collapsedScale;
- (double)collapsedAlpha;
- (id)makeSearchPreview:(id)arg1;
- (id)rightCoverImageViewWithUrl:(id)arg1 size:(CGSize)arg2;
- (id)tingItem;
- (unsigned long long)viewScale;
- (void)setViewScale:(unsigned long long)arg1;
- (BOOL)forceHideComplaintButton;
- (void)setForceHideComplaintButton:(BOOL)arg1;
- (BOOL)hasExposure;
- (void)setHasExposure:(BOOL)arg1;
- (void).cxx_destruct;
@end
