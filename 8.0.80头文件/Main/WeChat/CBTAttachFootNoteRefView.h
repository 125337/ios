@interface CBTAttachFootNoteRefView : CBTAttachmentBaseView
{
    MMUIButton * _iconButton; // +0x8
}
- (id)initWithAttachment:(id)arg1;
- (void)setupViews;
- (void)layoutView;
- (BOOL)isLocationInGestureResponderView:(CGPoint)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)handleTap;
- (id)iconButton;
- (void)setIconButton:(id)arg1;
- (void).cxx_destruct;
@end
