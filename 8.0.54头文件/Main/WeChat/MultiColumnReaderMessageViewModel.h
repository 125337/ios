@interface MultiColumnReaderMessageViewModel : ReaderMessageViewModel
{
    BOOL _footerLabelHasClicked; // +0x90
    BOOL _isMuted; // +0x91
    BOOL _forceHideRightCoverImage; // +0x92
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (id)getMessageFTSText:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (double)measureScheduleContentViewHeight:(id)arg1 originY:(double)arg2;
- (BOOL)isShowReadAll;
- (BOOL)isReaderWrapWeappJumpType;
- (BOOL)isReaderWrapInvalidUrlJumpType;
- (BOOL)isReaderWrapScheduleJumpType;
- (BOOL)isNewPaymsgType;
- (double)readerViewInsideWidth;
- (double)readerViewWidth;
- (double)itemInsideWidth;
- (double)itemKeyLabelMaxWidth;
- (BOOL)canShowRightCoverImage;
- (double)rightCoverImageWidth;
- (double)rightCoverImageHeight;
- (double)readerItemLMargin;
- (double)readerLineLMargin;
- (CGSize)headerMenuSize;
- (BOOL)isShowHeadAndNicknameArea;
- (BOOL)isShowHeadImageAndNickname;
- (BOOL)getNewMsgRecvSwitch;
- (BOOL)shouldShowFooterView;
- (id)footerContentString;
- (id)footerLabelFont;
- (id)headerMenuImage;
- (id)muteSloganStr;
- (id)muteSloganFont;
- (CGSize)muteSloganSize;
- (BOOL)hasMoneyUnit:(id)arg1;
- (double)messageNodeViewWidth;
- (double)messageNodeViewHeight;
- (id)makeSearchPreview:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (BOOL)isEcsKfCard;
- (BOOL)footerLabelHasClicked;
- (void)setFooterLabelHasClicked:(BOOL)arg1;
- (BOOL)isMuted;
- (void)setIsMuted:(BOOL)arg1;
- (BOOL)forceHideRightCoverImage;
- (void)setForceHideRightCoverImage:(BOOL)arg1;
@end

