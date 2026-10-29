@interface MessageTipsCellView : BaseChatCellView <ChatBackgroundExt>
{
    MMUIActivityIndicatorView * _loadingView; // +0x10
    UILabel * _tipsLabel; // +0x18
    UIView * _bgImageView; // +0x20
}
- (id)initWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (BOOL)canBeReused;
- (void)layoutInternal;
- (void)onAppear;
- (id)tipsLabel;
- (id)bgImageView;
- (void)layoutLineText;
- (void)layoutLoading;
- (id)lineViewOfWidth:(double)arg1;
- (double)maxLabelWidth;
- (void)onChatBackgroundChanged:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setBgImageView:(id)arg1;
- (void).cxx_destruct;
@end
