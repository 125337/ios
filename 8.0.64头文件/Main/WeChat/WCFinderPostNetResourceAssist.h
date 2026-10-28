@interface WCFinderPostNetResourceAssist : NSObject
{
    NSString * _tid; // +0x8
    id /* block */ _resolver; // +0x10
}
+ (id)resolveHttpURL:(id)arg1 format:(id)arg2;
+ (id)netImageExistedPath:(id)arg1 downloadView:(id)arg2 downloadOptions:(long long)arg3;
+ (id)netVideoFetchPromise:(id)arg1 cancelToken:(id)arg2;
+ (id)getPostApplyLocalVideoUrlByMediaInfo:(id)arg1;
- (id)initWithDataItemTid:(id)arg1 resolver:(id /* block */)arg2;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id /* block */)resolver;
- (void)setResolver:(id /* block */)arg1;
- (void).cxx_destruct;
@end
