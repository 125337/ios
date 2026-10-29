@interface CBTCoopV3EmoticonStoreDownloader : NSObject <IStoreEmotionSingleDownloadMgrExt>
{
    NSString * _md5; // +0x8
    CBTCoopV3EmoticonService * _handler; // +0x10
}
+ (void)setSharedHandler:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imagePath:(id)arg2;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)handler;
- (void)setHandler:(id)arg1;
- (void).cxx_destruct;
@end
