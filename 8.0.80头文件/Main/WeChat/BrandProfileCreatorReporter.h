@interface BrandProfileCreatorReporter : NSObject
{
    BOOL _placeholderDescExposed; // +0x8
    unsigned int _bizUin; // +0xc
    CContact * _brandContact; // +0x10
    BizProfileV2Resp * _cacheItem; // +0x18
}
+ (unsigned int)convertPublishStatus:(unsigned long long)arg1;
- (id)initWithBizUin:(id)arg1;
- (unsigned int)serviceType;
- (void)reportCreatorProfileOperation:(unsigned int)arg1 viewModel:(id)arg2;
- (void)reportCreatorProfileOperation:(unsigned int)arg1 viewModel:(id)arg2 fromTab:(unsigned int)arg3;
- (void)reportCreatorProfileOperation:(unsigned int)arg1 msgId:(unsigned int)arg2 idx:(unsigned int)arg3 publishStatus:(unsigned int)arg4 fromTab:(unsigned int)arg5;
- (BOOL)shouldReport:(unsigned int)arg1;
- (unsigned int)bizUin;
- (void)setBizUin:(unsigned int)arg1;
- (id)brandContact;
- (void)setBrandContact:(id)arg1;
- (id)cacheItem;
- (void)setCacheItem:(id)arg1;
- (BOOL)placeholderDescExposed;
- (void)setPlaceholderDescExposed:(BOOL)arg1;
- (void).cxx_destruct;
@end
