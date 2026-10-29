@interface WAShareAppMessageThumbImagePool : NSObject
{
    id <WAShareAppMessageThumbImagePoolDelegate> _delegate; // +0x8
    NSMutableDictionary * _thumbImageDictionary; // +0x10
}
+ (id)generateKey;
+ (double)getCompressRatioWithImage:(id)arg1;
- (void)registerSnapImageForKey:(id)arg1 shouldCrop:(BOOL)arg2 cropSize:(CGSize)arg3;
- (void)registerLocalImageData:(id)arg1 forKey:(id)arg2 shouldCrop:(BOOL)arg3 cropSize:(CGSize)arg4;
- (void)registerWebImageURLString:(id)arg1 forKey:(id)arg2 shouldCrop:(BOOL)arg3 cropSize:(CGSize)arg4;
- (void)registerOriginImageData:(id)arg1 forKey:(id)arg2;
- (void)popImageDataForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)popImageDataForKey:(id)arg1 snapFromTop:(BOOL)arg2 completion:(id /* block */)arg3;
- (unsigned long long)typeForKey:(id)arg1;
- (void)forceUseOriginImageForKey:(id)arg1;
- (void)_handleWebImageWithURLString:(id)arg1 shouldCrop:(BOOL)arg2 cropSize:(CGSize)arg3 useOriginImage:(BOOL)arg4 completion:(id /* block */)arg5;
- (id)thumbImageDictionary;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setThumbImageDictionary:(id)arg1;
- (void).cxx_destruct;
@end
