@interface WCFinderHeadImageView : UIView <WCFinderContactExt, WCFinderHeadImageViewLoadExtension>
{
    BOOL _useInnerEdgeStyle; // +0x8
    BOOL _autoUpdateImage; // +0x9
    BOOL _isDefaultImageDisabled; // +0xa
    BOOL _loadImageSuccessful; // +0xb
    UIImageView * _headImageView; // +0x10
    id <WCFinderHeadImageViewDelegate> _delegate; // +0x18
    unsigned long long _displayStyle; // +0x20
    NSString * _finderKey; // +0x28
    NSString * _currentImageURL; // +0x30
    NSString * _currentDownloadKey; // +0x38
    UIImage * _headerDefaultImage; // +0x40
    NSString * _rawImageURL; // +0x48
    unsigned long long _targetSize; // +0x50
}
+ (BOOL)isCacheImageWithContact:(id)arg1;
+ (BOOL)isCacheImageWithURLString:(id)arg1;
+ (id)getLocalImageWithURLString:(id)arg1;
+ (void)saveImageData:(id)arg1 URLString:(id)arg2;
+ (id)getDefaultImage:(CGSize)arg1;
+ (void)setMediumAvatar:(id)arg1 toImageView:(id)arg2;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)setDefaultImage:(id)arg1;
- (id)headerDefaultImage;
- (id)initWithAutoUpdateImage:(BOOL)arg1;
- (id)initWithAutoUpdateImage:(BOOL)arg1 isDefaultImageDisabled:(BOOL)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setupUI;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (void)updateRadius;
- (void)updateImageWithContact:(id)arg1;
- (void)updateImageWithHeadURLString:(id)arg1;
- (void)updateImageWith:(id)arg1;
- (id)getCurImage;
- (void)resetDefaultImage;
- (void)prepareForReuse;
- (id)getCurrentDisplayImageURL;
- (id)getCurrentDisplayImageRawURL;
- (void)updateImageWithContact:(id)arg1 targetSize:(unsigned long long)arg2;
- (void)updateImageWithHeadURLString:(id)arg1 targetSize:(unsigned long long)arg2;
- (void)updateImageWithHeadURLString:(id)arg1 targetSize:(unsigned long long)arg2 compleBlock:(id /* block */)arg3;
- (void)headImageViewDidClick;
- (void)setDelegate:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)finderHeadImageLoadSuccessfulWithImage:(id)arg1 targetSize:(unsigned long long)arg2;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)delegate;
- (BOOL)useInnerEdgeStyle;
- (void)setUseInnerEdgeStyle:(BOOL)arg1;
- (unsigned long long)displayStyle;
- (id)finderKey;
- (void)setFinderKey:(id)arg1;
- (BOOL)isAutoUpdateImage;
- (void)setAutoUpdateImage:(BOOL)arg1;
- (BOOL)isDefaultImageDisabled;
- (void)setIsDefaultImageDisabled:(BOOL)arg1;
- (id)currentImageURL;
- (void)setCurrentImageURL:(id)arg1;
- (id)currentDownloadKey;
- (void)setCurrentDownloadKey:(id)arg1;
- (void)setHeaderDefaultImage:(id)arg1;
- (id)rawImageURL;
- (void)setRawImageURL:(id)arg1;
- (BOOL)loadImageSuccessful;
- (void)setLoadImageSuccessful:(BOOL)arg1;
- (unsigned long long)targetSize;
- (void)setTargetSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
