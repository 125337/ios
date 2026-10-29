@interface WCFinderLongVideoService : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _compressWatch; // +0x8
    NSObject<OS_dispatch_queue> * _ioQueue; // +0x10
    NSMutableArray * _preloadArray; // +0x18
}
+ (id)encodingOutputPath:(id)arg1;
+ (id)assetForUrl:(id)arg1;
+ (id)encodeLongWithoutShortVideoPostSession:(id)arg1 config:(id)arg2;
+ (BOOL)dataItemIsEnableToEncode:(id)arg1;
+ (id)encodeLongWithPostSession:(id)arg1;
+ (BOOL)hadExistLongEncoding;
+ (void)encodeFullFor:(id)arg1;
+ (BOOL)checkLongVideoResourceValid:(id)arg1;
+ (void)encodeSummaryWith:(id)arg1 offsetY:(id)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)encodeSummaryFor:(id)arg1 offsetY:(id)arg2 completion:(id /* block */)arg3;
+ (void)stopEncodeForDataItem:(id)arg1;
+ (void)registerCompressCallback:(id /* block */)arg1 forPostSession:(id)arg2 saveToLocal:(BOOL)arg3;
+ (void)ensureLongVideoCompress:(id /* block */)arg1 forPostSession:(id)arg2;
+ (void)updateLongVideoPath:(id)arg1 forItem:(id)arg2;
+ (void)updateShortVideoPath:(id)arg1 forItem:(id)arg2;
+ (BOOL)checkHadEncodingForDataItem:(id)arg1;
+ (id)playInfoForVideo:(id)arg1 playRate:(double)arg2 commentScene:(int)arg3;
+ (id)playInfoForLocalVideoInfo:(id)arg1;
+ (void)preloadVideos:(id)arg1;
+ (void)stopAllPreloadVideos;
+ (id)encodeTagPath:(id)arg1;
+ (void)saveItemLocal:(id)arg1;
+ (void)deleteItemLocal:(id)arg1;
- (void)onServiceInit;
- (void)checkExistedItems;
- (id)compressWatch;
- (void)setCompressWatch:(id)arg1;
- (id)ioQueue;
- (void)setIoQueue:(id)arg1;
- (id)preloadArray;
- (void)setPreloadArray:(id)arg1;
- (void).cxx_destruct;
@end

