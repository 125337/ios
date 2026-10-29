@interface MMFinderLiveGiftResourceRequestBaseObject : NSObject
{
    BOOL _isPreload; // +0x8
    unsigned int _retryCount; // +0xc
    NSURL * _targetURL; // +0x10
    long long _expectedContentLength; // +0x18
    NSString * _contentType; // +0x20
    unsigned long long _beginTimeStamp; // +0x28
    NSString * _productID; // +0x30
    long long _resType; // +0x38
    long long _subResType; // +0x40
    NSString * _fileMD5; // +0x48
    unsigned long long _memoryCacheOptions; // +0x50
    NSString * _observerSubscriptionKey; // +0x58
    MMFinderLiveGiftResourceExtraInfo * _extraInfo; // +0x60
}
- (id)targetURL;
- (void)setTargetURL:(id)arg1;
- (long long)expectedContentLength;
- (void)setExpectedContentLength:(long long)arg1;
- (id)contentType;
- (void)setContentType:(id)arg1;
- (unsigned long long)beginTimeStamp;
- (void)setBeginTimeStamp:(unsigned long long)arg1;
- (id)productID;
- (void)setProductID:(id)arg1;
- (long long)resType;
- (void)setResType:(long long)arg1;
- (long long)subResType;
- (void)setSubResType:(long long)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (unsigned long long)memoryCacheOptions;
- (void)setMemoryCacheOptions:(unsigned long long)arg1;
- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg1;
- (id)observerSubscriptionKey;
- (void)setObserverSubscriptionKey:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end

