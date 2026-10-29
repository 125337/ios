@interface ReaderMessageCellView : BaseMessageCellView <MMWebImageViewDelegate, ReaderReporterExt, ILinkEventExt>
{
    NSArray * m_arrBtnList; // +0x28
    BTRichTextTagView * m_titleView; // +0x30
    MMWebImageView * m_coverImgView; // +0x38
    UIView * m_highlightMaskView; // +0x40
    RichTextView * m_digestView; // +0x48
    CALayer * m_coverMaskLayer; // +0x50
    BOOL _isItemForFolder; // +0x58
    id <ReaderMessageFolderCellViewDelegate> _folderCellViewDelegate; // +0x60
    NSMutableArray * _cardCopyLines; // +0x68
    unsigned long long _containerType; // +0x70
    UIView * _footerView; // +0x78
}
+ (id)itemValueLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (id)init;
- (void)dealloc;
- (void)setViewModel:(id)arg1;
- (BOOL)canBeReused;
- (void)layoutContentView;
- (id)footerView;
- (id)generateFooterLabel:(double)arg1;
- (void)onLinkClicked:(id)arg1 linkRect:(CGRect)arg2;
- (void)initHighlightMaskView;
- (void)addCornerToContentView;
- (void)setHighlighted:(BOOL)arg1;
- (void)onAppear;
- (void)rebindDrViewParamsToContentView;
- (void)onTableViewDidScrollDown;
- (BOOL)bShouldReportShowInfo;
- (BOOL)isWeGameContact;
- (void)onLoadImageOK:(id)arg1;
- (id)operationMenuItems;
- (void)onForward:(id)arg1;
- (void)onFavorite:(id)arg1;
- (void)onTouchUpInside;
- (BOOL)autoHighlight;
- (void)clickNodeViewBtn:(id)arg1;
- (id)richTextWithFont:(id)arg1 width:(double)arg2;
- (id)itemLabelWithFont:(id)arg1 width:(double)arg2;
- (id)imageViewWithFrame:(CGRect)arg1;
- (id)itemLabelWithTitle:(id)arg1 width:(double)arg2 font:(id)arg3;
- (id)itemLabelWithText:(id)arg1 width:(double)arg2 font:(id)arg3 numberOfLines:(unsigned long long)arg4;
- (void)onCopy:(id)arg1;
- (void)initCustomMenuButtonStyle:(id)arg1 position:(int)arg2;
- (void)ShowReader:(id)arg1 viewModel:(id)arg2 uiReaderIndex:(unsigned int)arg3;
- (void)showWebViewController:(id)arg1;
- (id)webViewExtraInfoWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
- (void)reportClickReaderItem:(id)arg1 clickTime:(unsigned int)arg2;
- (unsigned int)getSessionId;
- (long long)getEnterScene;
- (unsigned int)getSubscene;
- (id)getWebViewController:(id)arg1 url:(id)arg2 forPeek:(BOOL)arg3;
- (id)getReaderUrlWithUrl:(id)arg1;
- (void)updateContentViewBgColor:(id)arg1;
- (void)onClicked;
- (void)jumpWeappOpWrap:(id)arg1;
- (void)jumpLiteAppOpWrap:(id)arg1;
- (void)jumpWCCoinHomePage;
- (void)jumpFinderMemberCenter:(id)arg1;
- (void)jumpWebSearch:(id)arg1;
- (void)jumpTingCategory:(id)arg1;
- (BOOL)shouldGoToEmoticonDetail:(id)arg1;
- (void)forwardMessage;
- (void)addFavorite;
- (id)headImageUrlOfChatContact;
- (BOOL)canPeek;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (CGRect)previewingSourceRectForLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (BOOL)canCellShowOperationMenu;
- (void)report11608:(unsigned long long)arg1;
- (void)report29695:(int)arg1 bizContent:(id)arg2;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (BOOL)isItemForFolder;
- (void)setIsItemForFolder:(BOOL)arg1;
- (id)folderCellViewDelegate;
- (void)setFolderCellViewDelegate:(id)arg1;
- (id)cardCopyLines;
- (void)setCardCopyLines:(id)arg1;
- (unsigned long long)containerType;
- (void)setContainerType:(unsigned long long)arg1;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end

