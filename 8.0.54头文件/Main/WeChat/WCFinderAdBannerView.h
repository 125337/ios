@interface WCFinderAdBannerView : UIView <WCFinderJumpInfoIconViewDelegate, WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id <WCFinderAdBannerViewDelegate> _delegate; // +0x10
    WCFinderJumpInfoIconView * _iconView; // +0x18
    RichTextView * _textView; // +0x20
    WCFinderJumpInfo * _jumpInfo; // +0x28
    FinderJumpInfo_Style * _style; // +0x30
    UIImageView * _arrowImageView; // +0x38
    UIView * _bottomLineView; // +0x40
    UILabel * _adLabel; // +0x48
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
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateUIInfo;
- (void)layoutViewByPosition;
- (id)jumpInfo;
- (int)showPosition;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (BOOL)videoPauseState;
- (id)videoTid;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setJumpInfo:(id)arg1;
- (void)setShowPosition:(int)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setBottomLineView:(id)arg1;
- (void)setAdLabel:(id)arg1;
- (void).cxx_destruct;
@end

