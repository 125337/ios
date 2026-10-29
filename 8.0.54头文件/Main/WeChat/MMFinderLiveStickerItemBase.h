@interface MMFinderLiveStickerItemBase : NSObject <NSCopying>
{
    BOOL _isStub; // +0x8
    BOOL _imageArchived; // +0x9
    NSString * _instanceId; // +0x10
    unsigned long long _stickerType; // +0x18
    UIImage * _stickerImage; // +0x20
    long long _actionSceneOrientation; // +0x28
    MMLiveStorageCleanupPinningToken * _archiveImagePinningToken; // +0x30
    CGSize _canvasSize; // +0x38
    CGSize _nativeSize; // +0x48
    CGSize _normalizedSize; // +0x58
    CGPoint _normalizedCenter; // +0x68
    CGPoint _normalizedAnchorPoint; // +0x78
    CGAffineTransform _transform; // +0x88
    CGAffineTransformComponents _normalizedTransformComponents; // +0xb8
}
- (id)initWithInstanceId:(id)arg1;
- (id)init;
- (id)submissionId;
- (id)stickerAccessibilityDescriptor;
- (BOOL)isContentEqualTo:(id)arg1;
- (id)createReviewSubmissionItem;
- (void)archiveImage;
- (void)loadImageFromArchive;
- (id)copyAsUniqueInstance;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)imageArchiveFilename;
- (id)imageArchivePath;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (unsigned long long)stickerType;
- (BOOL)isStub;
- (BOOL)imageArchived;
- (void)setImageArchived:(BOOL)arg1;
- (id)stickerImage;
- (void)setStickerImage:(id)arg1;
- (CGSize)canvasSize;
- (void)setCanvasSize:(CGSize)arg1;
- (CGSize)nativeSize;
- (void)setNativeSize:(CGSize)arg1;
- (CGAffineTransform)transform;
- (void)setTransform:(CGAffineTransform)arg1;
- (CGSize)normalizedSize;
- (void)setNormalizedSize:(CGSize)arg1;
- (CGPoint)normalizedCenter;
- (void)setNormalizedCenter:(CGPoint)arg1;
- (CGPoint)normalizedAnchorPoint;
- (void)setNormalizedAnchorPoint:(CGPoint)arg1;
- (CGAffineTransformComponents)normalizedTransformComponents;
- (void)setNormalizedTransformComponents:(CGAffineTransformComponents)arg1;
- (long long)actionSceneOrientation;
- (void)setActionSceneOrientation:(long long)arg1;
- (id)archiveImagePinningToken;
- (void)setArchiveImagePinningToken:(id)arg1;
- (void).cxx_destruct;
@end

