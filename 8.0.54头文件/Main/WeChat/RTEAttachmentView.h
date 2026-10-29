@interface RTEAttachmentView : UIView
{
    BOOL _bNeedLayout; // +0x8
    unsigned int _attachmentType; // +0xc
    unsigned int _colorType; // +0x10
    RTETextAttachment * _attachment; // +0x18
    id <RTEAttachmentViewDelegate> _providerDelegate; // +0x20
}
- (id)initWithAttachment:(id)arg1;
- (void)removeFromSuperview;
- (void)layoutView;
- (void)onClickObject;
- (void)didAddToSuperview;
- (unsigned int)attachmentType;
- (void)setAttachmentType:(unsigned int)arg1;
- (id)attachment;
- (void)setAttachment:(id)arg1;
- (BOOL)bNeedLayout;
- (void)setBNeedLayout:(BOOL)arg1;
- (id)providerDelegate;
- (void)setProviderDelegate:(id)arg1;
- (unsigned int)colorType;
- (void)setColorType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

