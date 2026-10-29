@interface MultiTalkScreenSharingAudienceContentView : UIView
{
    WCVideoRender * _render; // +0x8
    CContact * _contact; // +0x10
    UIView * _renderView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateRender:(id)arg1;
- (void)layoutSubviews;
- (BOOL)isTouchInsideWithPoint:(CGPoint)arg1;
- (void)setFrame:(CGRect)arg1;
- (id)render;
- (void)setRender:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (void).cxx_destruct;
@end
