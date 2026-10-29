@interface WCFinderPreviewContainer : UIView
{
    UIView * _previewView; // +0x8
    UIView * _contentView; // +0x10
    CGSize _previewSize; // +0x18
    CGSize _contentSize; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setPreviewView:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)onViewFrameChange;
- (id)snapshot;
- (id)fallbackSnapshot;
- (id)previewView;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (CGSize)previewSize;
- (void)setPreviewSize:(CGSize)arg1;
- (CGSize)contentSize;
- (void)setContentSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
