@interface YYImage : UIImage
{
    id /* block */ m_getBlock; // +0x8
    BOOL m_isDecodingInBackground; // +0x10
    NSObject<OS_dispatch_semaphore> * m_lock; // +0x18
    YYSentinel * m_sentinel; // +0x20
    BOOL _isDynamicImg; // +0x28
    UIImage * m_originImage; // +0x30
    id <YYImageDelegate> _delegate; // +0x38
    UIImage * _decodeImageLM; // +0x40
    UIImage * _decodeImageDM; // +0x48
    CGSize _prefertSize; // +0x50
}
+ (id)imageWithBlock:(id /* block */)arg1;
+ (id)imageWithUIImage:(id)arg1;
+ (id)imageWithBlock:(id /* block */)arg1 prefertSize:(CGSize)arg2;
+ (id)imageWithUIImage:(id)arg1 prefertSize:(CGSize)arg2;
- (id)initWithBlock:(id /* block */)arg1 prefertSize:(CGSize)arg2;
- (void)dealloc;
- (void)setIsDynamicImg:(BOOL)arg1;
- (BOOL)isDarkMode;
- (id)image;
- (id)originImage;
- (id)decodeImage;
- (void)asyncLoad;
- (void)_cancelAsyncLoad;
- (void)_loadInBackground;
- (id)_fourceDecodeImage:(id)arg1 prefertSize:(CGSize)arg2 isCancelled:(id /* block */)arg3;
- (void)setOriginImage:(id)arg1;
- (CGSize)prefertSize;
- (void)setPrefertSize:(CGSize)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)decodeImageLM;
- (void)setDecodeImageLM:(id)arg1;
- (id)decodeImageDM;
- (void)setDecodeImageDM:(id)arg1;
- (BOOL)isDynamicImg;
- (void).cxx_destruct;
@end
