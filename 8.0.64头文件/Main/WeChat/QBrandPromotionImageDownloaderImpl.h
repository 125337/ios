@interface QBrandPromotionImageDownloaderImpl : NSObject <QMapLRUCacheDelegate, QBrandPromotionImageDownloader>
{
    NSMutableDictionary * _imageTaskDict; // +0x8
    QMapLRUCache * _imageCache; // +0x10
    NSLock * _lock; // +0x18
}
- (id)init;
- (void)requestLogoImageWithViewItem:(id)arg1;
- (void)cancelRequestWithViewItem:(id)arg1;
- (void)handleResponseData:(id)arg1 urlString:(id)arg2;
- (void)handleResponseError:(id)arg1 urlString:(id)arg2;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)imageTaskDict;
- (void)setImageTaskDict:(id)arg1;
- (id)imageCache;
- (void)setImageCache:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
