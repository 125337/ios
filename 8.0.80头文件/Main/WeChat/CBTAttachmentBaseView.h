@interface CBTAttachmentBaseView : UIView
{
    BOOL _bNeedLayout; // +0x8
    unsigned int _type; // +0xc
    id <CBTAttachmentBaseViewDelegate> _delegate; // +0x10
    CBTTextAttachment * _attachment; // +0x18
}
- (id)initWithAttachment:(id)arg1;
- (void)layoutView;
- (BOOL)isLocationInGestureResponderView:(CGPoint)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)attachment;
- (void)setAttachment:(id)arg1;
- (BOOL)bNeedLayout;
- (void)setBNeedLayout:(BOOL)arg1;
- (void).cxx_destruct;
@end
