@interface OpenApiRootHolderMgr : MMRootService <MMServiceProtocol>
{
    OpenApiParameter * _openApiParameter; // +0x8
    WapPayParameter * _wapPayParameter; // +0x10
}
- (void)storeOpenApiParameter:(id)arg1;
- (void)clearOpenApiParameter;
- (void)storeWapPayParameter:(id)arg1;
- (void)clearWapPayParameter;
- (void)dealloc;
- (id)openApiParameter;
- (void)setOpenApiParameter:(id)arg1;
- (id)wapPayParameter;
- (void)setWapPayParameter:(id)arg1;
- (void).cxx_destruct;
@end

