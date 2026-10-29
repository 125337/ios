@interface MMEmoticonView : UIView
{
    double m_imageScale; // +0x8
    UIImageView * m_animatedImageView; // +0x10
    BOOL _forceAdjustViewSize; // +0x18
    BOOL _asyncLoadFirstFrame; // +0x19
    BOOL _shouldCheckWxamValid; // +0x1a
    CEmoticonWrap * m_emoticonWrap; // +0x20
    double _maxSize; // +0x28
    double _minSize; // +0x30
    double _imageScale; // +0x38
    CGSize _noImageSize; // +0x40
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)adjustSettingForPreview;
- (void)adjustSettingForMessage;
- (void)adjustSettingForFinderComment;
- (void)adjustSettingForFitWidth:(double)arg1;
- (CGSize)calSizeForSize:(CGSize)arg1;
- (CGSize)contentImageSizeForOriginSize:(CGSize)arg1 scale:(double)arg2;
- (CGSize)contentImageSizeForOriginSize:(CGSize)arg1 emoticonWrap:(id)arg2;
- (id)getFirstFrameImage;
- (BOOL)formImageView:(id)arg1;
- (BOOL)formImageView:(id)arg1 newSize:(CGSize)arg2;
- (BOOL)formGifView:(BOOL)arg1;
- (BOOL)checkWxamValidWithDecoder:(id)arg1;
- (void)setImageHidden:(BOOL)arg1;
- (BOOL)setEmoticonWrap:(id)arg1 PlayGif:(BOOL)arg2;
- (BOOL)canBecomeFirstResponder;
- (double)imageScale;
- (id)emoticonWrap;
- (double)maxSize;
- (void)setMaxSize:(double)arg1;
- (double)minSize;
- (void)setMinSize:(double)arg1;
- (void)setImageScale:(double)arg1;
- (CGSize)noImageSize;
- (void)setNoImageSize:(CGSize)arg1;
- (BOOL)forceAdjustViewSize;
- (void)setForceAdjustViewSize:(BOOL)arg1;
- (BOOL)asyncLoadFirstFrame;
- (void)setAsyncLoadFirstFrame:(BOOL)arg1;
- (BOOL)shouldCheckWxamValid;
- (void)setShouldCheckWxamValid:(BOOL)arg1;
- (void).cxx_destruct;
@end

