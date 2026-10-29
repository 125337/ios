@interface WCFinderAdBannerView : WCFinderJumpInfoView <WCFinderJumpInfoIconViewDelegate>
{
    WCFinderJumpInfoIconView * _iconView; // +0x8
    RichTextView * _textView; // +0x10
    UIImageView * _arrowImageView; // +0x18
    UIView * _bottomLineView; // +0x20
    UILabel * _adLabel; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 jumpInfo:(id)arg2 enableClick:(BOOL)arg3 disableIconColor:(id)arg4 disableTextColor:(id)arg5 iconSize:(CGSize)arg6 textFont:(id)arg7 delegate:(id)arg8 textNormalColor:(id)arg9 adLabelColor:(id)arg10;
- (void)dealloc;
- (id)bottomLineView;
- (id)arrowImageView;
- (id)fetchRecommendForJumpInfo:(id)arg1;
- (id)getLocalDefaultPagResPath:(id)arg1;
- (id)localIconFormJumpInfo:(id)arg1 iconSize:(CGSize)arg2 iconColor:(id)arg3 enable:(BOOL)arg4;
- (id)textView;
- (id)iconView;
- (id)adLabel;
- (void)onClickAction;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateUIInfo;
- (void)layoutViewByPosition;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (BOOL)videoPauseState;
- (id)videoTid;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)setIconView:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setBottomLineView:(id)arg1;
- (void)setAdLabel:(id)arg1;
- (void).cxx_destruct;
@end
