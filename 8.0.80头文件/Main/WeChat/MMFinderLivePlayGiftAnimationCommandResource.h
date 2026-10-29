@interface MMFinderLivePlayGiftAnimationCommandResource : NSObject
{
    NSString * _uri; // +0x8
    NSString * _md5; // +0x10
    NSArray * _animationTextReplaceItems; // +0x18
    NSArray * _animationImageReplaceItems; // +0x20
    NSMutableDictionary * _mutableDownloadedImagesByLayerId; // +0x28
    MMLiveStorageCleanupPinningToken * _pinningToken; // +0x30
}
+ (id)resourceWithPagUri:(id)arg1 md5:(id)arg2 textReplacements:(id)arg3 imageReplacements:(id)arg4;
+ (id)resourceWithPagUri:(id)arg1 md5:(id)arg2 textReplacements:(id)arg3;
+ (id)resourceWithUri:(id)arg1 md5:(id)arg2;
+ (id)resourceWithBackendModel:(id)arg1;
- (id)downloadedImagesByLayerId;
- (void)setDownloadedImage:(id)arg1 forLayerId:(id)arg2;
- (void)applyImageReplacementsToPagFile:(id)arg1;
- (void)applyImageReplacementsToRfxPagFile:(id)arg1;
- (id)uri;
- (void)setUri:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)animationTextReplaceItems;
- (void)setAnimationTextReplaceItems:(id)arg1;
- (id)animationImageReplaceItems;
- (void)setAnimationImageReplaceItems:(id)arg1;
- (id)mutableDownloadedImagesByLayerId;
- (void)setMutableDownloadedImagesByLayerId:(id)arg1;
- (id)pinningToken;
- (void)setPinningToken:(id)arg1;
- (void).cxx_destruct;
@end
