@interface QGPReturn : QGPBaseModel
{
    NSString * _status; // +0x8
}
+ (id)successWithoutReturn;
- (id)init;
- (id)status;
- (void)setStatus:(id)arg1;
- (void).cxx_destruct;
@end

