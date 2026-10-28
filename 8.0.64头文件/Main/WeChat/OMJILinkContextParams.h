@interface OMJILinkContextParams : NSObject
{
    OMJILinkContextParamsSelfManaged * _paramsSelfManaged; // +0x8
    OMJILinkContextParamsExternalManaged * _paramsExternalManaged; // +0x10
}
- (id)initWithParamsSelfManaged:(id)arg1;
- (id)initWithParamsExternalManaged:(id)arg1;
- (id)paramsSelfManaged;
- (id)paramsExternalManaged;
- (void).cxx_destruct;
@end
