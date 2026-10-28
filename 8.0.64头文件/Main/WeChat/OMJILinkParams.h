@interface OMJILinkParams : NSObject
{
    OMJILinkContextParams * _contextParams; // +0x8
    OMJILinkAppClientParams * _appClientParams; // +0x10
}
- (id)initWithContextParams:(id)arg1 appClientParams:(id)arg2;
- (id)contextParams;
- (id)appClientParams;
- (void).cxx_destruct;
@end
