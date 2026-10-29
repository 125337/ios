@interface WCFInderGetDetailDataItemCGI : WCFinderBaseCgi
{
    int _scene; // +0x8
    id /* block */ _preloadInfoUpdateBlock; // +0x10
    NSString * _objectId; // +0x18
    NSString * _encryptedID; // +0x20
    NSString * _finderUsername; // +0x28
    NSString * _nonceID; // +0x30
    NSString * _uxinfo; // +0x38
    id /* block */ _success; // +0x40
    id /* block */ _failure; // +0x48
    unsigned long long _pullScene; // +0x50
    WCFinderGetCommentDetailDataItemCGIParams * _paramsModel; // +0x58
}
- (id)initWithObjectId:(id)arg1 encryptedID:(id)arg2 nonceID:(id)arg3 finderUsername:(id)arg4 scene:(int)arg5 pullScene:(unsigned long long)arg6 paramsModel:(id)arg7 success:(id /* block */)arg8 failure:(id /* block */)arg9;
- (void)createRequest;
- (id)customSuccessfulRetCodeArray;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)reportCGIStart;
- (void)reportCGIFinish;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (id)prefetchExtraData;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (BOOL)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (id /* block */)preloadInfoUpdateBlock;
- (void)setPreloadInfoUpdateBlock:(id /* block */)arg1;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)encryptedID;
- (void)setEncryptedID:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)uxinfo;
- (void)setUxinfo:(id)arg1;
- (id /* block */)success;
- (void)setSuccess:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)pullScene;
- (void)setPullScene:(unsigned long long)arg1;
- (id)paramsModel;
- (void)setParamsModel:(id)arg1;
- (void).cxx_destruct;
@end

