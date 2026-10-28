@interface MsgImgFullScreenExpireView : UIView <FullScreenGestureDelegate>
{
    BOOL _draging; // +0x8
    id <MsgImgFullScreenExpireViewDelegate> _delegate; // +0x10
    CMessageWrap * _msgWrap; // +0x18
    WXFullScreenGestureRecognizer * _fullScreenGestureRecognizer; // +0x20
    UIView * _contentView; // +0x28
    SightIconView * _iconView; // +0x30
    UILabel * _tipsLabel; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 msgWrap:(id)arg2;
- (void)layoutSubviews;
- (void)initUI;
- (void)layoutUI;
- (id)contentView;
- (id)iconView;
- (id)tipsLabel;
- (void)showUI;
- (void)hideUI;
- (void)onFullScreenSingleTap;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenClose;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)fullScreenGestureRecognizer;
- (void)setFullScreenGestureRecognizer:(id)arg1;
- (BOOL)draging;
- (void)setDraging:(BOOL)arg1;
- (void)setContentView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
