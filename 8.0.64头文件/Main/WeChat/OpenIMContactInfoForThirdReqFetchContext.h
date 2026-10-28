@interface OpenIMContactInfoForThirdReqFetchContext : NSObject
{
    unsigned int _scene; // +0x8
    id /* block */ _completeBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    NSString * _dataUrl; // +0x20
    MMUIViewController * _viewController; // +0x28
    NSString * _multiUserQRCode; // +0x30
}
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)dataUrl;
- (void)setDataUrl:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)multiUserQRCode;
- (void)setMultiUserQRCode:(id)arg1;
- (void).cxx_destruct;
@end
