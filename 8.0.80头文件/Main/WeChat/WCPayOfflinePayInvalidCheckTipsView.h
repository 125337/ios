@interface WCPayOfflinePayInvalidCheckTipsView : MMUIView <ILinkEventExt>
{
    BOOL _bIsInitFromScreenCapturing; // +0x8
    id <WCPayOfflinePayInvalidCheckTipsViewDelegate> _delegate; // +0x10
    UIImageView * _iconImgView; // +0x18
    MMUILabel * _tipsLabel; // +0x20
    RichTextView * _richTextView; // +0x28
    UIButton * _confirmBtn; // +0x30
}
- (id)initInvalidTipsViewWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)setupContentView;
- (void)confirmBtnPress:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconImgView;
- (void)setIconImgView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (BOOL)bIsInitFromScreenCapturing;
- (void)setBIsInitFromScreenCapturing:(BOOL)arg1;
- (void).cxx_destruct;
@end
