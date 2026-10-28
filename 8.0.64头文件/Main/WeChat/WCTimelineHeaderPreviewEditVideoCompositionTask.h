@interface WCTimelineHeaderPreviewEditVideoCompositionTask : WCSightVideoCompositeTask
{
    CGSize _previewThumbSize; // +0x8
}
- (id)initWithTaskId:(id)arg1 srcPHAsset:(id)arg2 editVideoAttr:(id)arg3 compositionAttr:(id)arg4 previewThumbImageSize:(CGSize)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getThumbImageForEditVideoFromPath:(id)arg1;
- (CGSize)previewThumbSize;
- (void)setPreviewThumbSize:(CGSize)arg1;
@end
