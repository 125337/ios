@interface TranslateLinkCacheWrap : MMObject <PBCoding>
{
    TranslateLinkReq * _req; // +0x8
    TranslateLinkResp * _resp; // +0x10
}
+ (void)PBArrayAdd_req;
+ (void)PBArrayAdd_resp;
+ (void)initialize;
+ (id)cacheWrapWithReq:(id)arg1 andResp:(id)arg2;
- (id)getPBPropertyTable;
- (id)req;
- (void)setReq:(id)arg1;
- (id)resp;
- (void)setResp:(id)arg1;
- (void).cxx_destruct;
@end
