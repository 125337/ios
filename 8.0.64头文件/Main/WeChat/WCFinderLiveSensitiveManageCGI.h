@interface WCFinderLiveSensitiveManageCGI : WCFinderLiveBaseCgi
{
    int _opType; // +0x8
    NSArray * _operateSensitiveDataItemList; // +0x10
    id /* block */ _completionBlock; // +0x18
}
+ (id)createSensitiveAddCGIWithFinderTaskId:(id)arg1 opSensitiveItems:(id)arg2 completion:(id /* block */)arg3;
+ (id)createSensitiveDeleteCGIWithFinderTaskId:(id)arg1 opSensitiveItems:(id)arg2 completion:(id /* block */)arg3;
+ (id)createSensitiveGetCGIWithFinderTaskId:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithFinderTaskId:(id)arg1 opType:(int)arg2 opSensitiveItems:(id)arg3 completion:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)convertSenstiveDataItemListFromResponse:(id)arg1;
- (BOOL)isSensitiveWordCanTrust:(int)arg1;
- (id)operateSensitiveDataItemList;
- (void)setOperateSensitiveDataItemList:(id)arg1;
- (int)opType;
- (void)setOpType:(int)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
