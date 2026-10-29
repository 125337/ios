@interface MMMusicMVClipUploader : NSObject <WCFinderPostDataItemExt>
{
    NSMutableDictionary * _dictUploadingClip; // +0x8
    id <MMMusicMVClipUploaderDelegate> _delegate; // +0x10
    NSObject<OS_dispatch_queue> * _serialQueue; // +0x18
}
- (id)init;
- (void)uploadClipItem:(id)arg1;
- (void)fillMoreVideoInformationFrom:(id)arg1 toFinderDataItem:(id)arg2;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)serialQueue;
- (void)setSerialQueue:(id)arg1;
- (void).cxx_destruct;
@end

