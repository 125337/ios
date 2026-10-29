@interface OpenglRenderView : UIView <VoipOpenglesContextDelegate>
{
    CGSize _dataContentSize; // +0x8
}
+ (Class)layerClass;
- (id)renderView;
- (void)updateViewFrameWithContentSize:(CGSize)arg1;
- (void)updateViewFrame;
- (CGSize)dataContentSize;
- (void)setDataContentSize:(CGSize)arg1;
@end

