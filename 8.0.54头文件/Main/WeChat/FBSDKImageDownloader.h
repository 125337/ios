@interface FBSDKImageDownloader : NSObject
{
    NSURLCache * _urlCache; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)removeAll;
- (void)downloadImageWithURL:(id)arg1 ttl:(double)arg2 completion:(id /* block */)arg3;
- (void).cxx_destruct;
@end

