@interface VideoSendReportInfo : NSObject
{
    int _compressType; // +0x8
    int _encodeType; // +0xc
    int _unCompressReason; // +0x10
    int _videoHitCacheType; // +0x14
    int _rawVideoHitCacheType; // +0x18
    AVAsset * _asset; // +0x20
    NSURL * _videoURL; // +0x28
    unsigned long long _originSize; // +0x30
    NSString * _codecTagName; // +0x38
    unsigned long long _compressVideoCostMs; // +0x40
    unsigned long long _uploadCompressDataCostMs; // +0x48
    unsigned long long _uploadRawDataCostMs; // +0x50
    unsigned long long _totalCostMs; // +0x58
    CMessageWrap * _msgWrap; // +0x60
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (id)initWithMsgWrap:(id)arg1;
- (unsigned long long)originSize;
- (id)getReportJson;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)videoURL;
- (void)setVideoURL:(id)arg1;
- (void)setOriginSize:(unsigned long long)arg1;
- (id)codecTagName;
- (void)setCodecTagName:(id)arg1;
- (int)compressType;
- (void)setCompressType:(int)arg1;
- (int)encodeType;
- (void)setEncodeType:(int)arg1;
- (int)unCompressReason;
- (void)setUnCompressReason:(int)arg1;
- (unsigned long long)compressVideoCostMs;
- (void)setCompressVideoCostMs:(unsigned long long)arg1;
- (unsigned long long)uploadCompressDataCostMs;
- (void)setUploadCompressDataCostMs:(unsigned long long)arg1;
- (int)videoHitCacheType;
- (void)setVideoHitCacheType:(int)arg1;
- (int)rawVideoHitCacheType;
- (void)setRawVideoHitCacheType:(int)arg1;
- (unsigned long long)uploadRawDataCostMs;
- (void)setUploadRawDataCostMs:(unsigned long long)arg1;
- (unsigned long long)totalCostMs;
- (void)setTotalCostMs:(unsigned long long)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (void).cxx_destruct;
@end
