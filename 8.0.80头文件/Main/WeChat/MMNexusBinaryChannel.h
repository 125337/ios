@interface MMNexusBinaryChannel : NSObject
{
    BOOL _handlerRegistered; // +0x8
}
+ (id)sharedInstance;
+ (id)_imgResponseFrom:(id)arg1 error:(id)arg2 url:(id)arg3;
+ (id)_sniffImageMime:(id)arg1;
- (id)attachForGuest:(id)arg1;
- (void)detachForGuest:(id)arg1;
- (void)_applyCorsHeaders:(id)arg1;
- (void)_registerHandlerIfNeeded;
- (void)_handleDispatchRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)_dispatchAckWithOk:(BOOL)arg1 error:(id)arg2;
- (void)_handleImageRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleCgiRequest:(id)arg1 completion:(id /* block */)arg2;
@end
