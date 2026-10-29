@interface MPHeroTransitionContext : NSObject
{
    UIView * _sourceView; // +0x8
    CGRect _coverFrameInSource; // +0x10
    double _x1; // +0x30
    double _y1; // +0x38
    double _x2; // +0x40
    double _y2; // +0x48
    BOOL _hasFirstImageInfo; // +0x50
    BOOL _isFallbackToThumb; // +0x51
    id /* block */ _sourceViewProvider; // +0x58
    UIImage * _sourceSnapshotImage; // +0x60
    double _sourceCornerRadius; // +0x68
    double _coverCornerRadius; // +0x70
    UIImage * _fullOriginImage; // +0x78
    double _originAspect; // +0x80
    CGRect _sourceFrameInWindow; // +0x88
    CGRect _coverFrameInWindow; // +0xa8
    CGRect _cropRect; // +0xc8
}
- (id)initWithSourceView:(id)arg1 cornerRadius:(double)arg2 coverFrameInSource:(CGRect)arg3 coverCornerRadius:(double)arg4 firstImageInfo:(id)arg5;
- (id)currentHeroSourceCellView;
- (id)currentHeroSourceView;
- (id)containingViewOfViewControllerForView:(id)arg1;
- (BOOL)sourceViewStillVisible;
- (CGRect)currentSourceFrameInWindow;
- (CGRect)currentCoverFrameInWindow;
- (void)updateOriginAspectWithFallbackThumbWidth:(double)arg1 height:(double)arg2;
- (double)boxRatio;
- (CGRect)calibratedCropRect;
- (CGRect)expandedCropRect;
- (CGRect)finalCoverRectForScreenSize:(CGSize)arg1;
- (void)generateSnapshotImage;
- (id /* block */)sourceViewProvider;
- (void)setSourceViewProvider:(id /* block */)arg1;
- (id)sourceSnapshotImage;
- (CGRect)sourceFrameInWindow;
- (double)sourceCornerRadius;
- (CGRect)coverFrameInWindow;
- (double)coverCornerRadius;
- (id)fullOriginImage;
- (void)setFullOriginImage:(id)arg1;
- (double)originAspect;
- (CGRect)cropRect;
- (BOOL)isFallbackToThumb;
- (void)setIsFallbackToThumb:(BOOL)arg1;
- (void).cxx_destruct;
@end
