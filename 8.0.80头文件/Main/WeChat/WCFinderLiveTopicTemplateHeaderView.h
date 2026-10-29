@interface WCFinderLiveTopicTemplateHeaderView : UIView <RichTextLayoutDelegate, ILinkEventExt>
{
    BOOL _expandSubtitle; // +0x8
    id /* block */ _onClickSubtitleDetail; // +0x10
    double _bottomPadding; // +0x18
    MMLiveColorfulLabel * _titleLabel; // +0x20
    RichTextView * _subtitleTextView; // +0x28
    MMUIButton * _detailButton; // +0x30
}
- (id)init;
- (double)getTitleSpaceToBottom;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)configWithAppearance:(id)arg1;
- (void)didClickSubtitle;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (id /* block */)onClickSubtitleDetail;
- (void)setOnClickSubtitleDetail:(id /* block */)arg1;
- (BOOL)expandSubtitle;
- (void)setExpandSubtitle:(BOOL)arg1;
- (double)bottomPadding;
- (void)setBottomPadding:(double)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleTextView;
- (void)setSubtitleTextView:(id)arg1;
- (id)detailButton;
- (void)setDetailButton:(id)arg1;
- (void).cxx_destruct;
@end
