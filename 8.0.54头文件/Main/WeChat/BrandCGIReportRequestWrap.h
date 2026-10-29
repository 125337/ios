@interface BrandCGIReportRequestWrap : NSObject
{
    unsigned int _eventID; // +0x8
    ClickCommandRequest * _request; // +0x10
    id /* block */ _completionBlock; // +0x18
}
+ (id)requestWrapWithEventID:(unsigned int)arg1 request:(id)arg2 completionBlock:(id /* block */)arg3;
- (unsigned int)eventID;
- (void)setEventID:(unsigned int)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

