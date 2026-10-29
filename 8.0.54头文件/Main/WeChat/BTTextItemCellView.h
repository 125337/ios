@interface BTTextItemCellView : BTReaderItemCellView <ILinkEventExt>
{
    UrlController * m_urlController; // +0x38
    MMUILabel * m_foldLabel; // +0x40
    WAAppIdToUsernameTransfer * m_appIdTransfer; // +0x48
    MMUILabel * _detailLabel; // +0x50
}
- (void)initTopReaderItem;
- (void)onUpdateViewModel;
- (void)initTitleView;
- (id)getTitleViewColor:(BOOL)arg1;
- (void)initFoldLabel;
- (void)layoutSubviewsTopItem;
- (void)refreshFoldLabelText;
- (void)updateFriendRelatedInfo;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onFullTextBtnClick;
- (id)accessibilityLabel;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (void).cxx_destruct;
@end

