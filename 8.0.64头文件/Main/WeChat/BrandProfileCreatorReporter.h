@interface BrandProfileCreatorReporter : NSObject
{
    BOOL _placeholderDescExposed; // +0x8
    unsigned int _bizUin; // +0xc
}
+ (unsigned int)convertPublishStatus:(unsigned long long)arg1;
- (id)initWithBizUin:(id)arg1;
- (void)reportCreatorProfileOperation:(unsigned int)arg1 viewModel:(id)arg2;
- (void)reportCreatorProfileOperation:(unsigned int)arg1 msgId:(unsigned int)arg2 idx:(unsigned int)arg3 publishStatus:(unsigned int)arg4;
- (BOOL)shouldReport:(unsigned int)arg1;
- (unsigned int)bizUin;
- (void)setBizUin:(unsigned int)arg1;
- (BOOL)placeholderDescExposed;
- (void)setPlaceholderDescExposed:(BOOL)arg1;
@end
