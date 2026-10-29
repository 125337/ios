@interface OpenProfileHandler : MMObject
{
    OpenApiParameter * _parameter; // +0x8
}
- (void)startHandleOpenProfile:(id)arg1;
- (void)createWechatOpenProfile;
- (void)cancelOpenProfile;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (void).cxx_destruct;
@end

