@interface CBTAsstBoardFilePreviewHelper : NSObject <ViewAppMsgControllerDelegate>
{
    UIViewController * _fromViewController; // +0x8
    ViewAppMsgController * _appMsgController; // +0x10
    CGRect _originFrame; // +0x18
}
- (id)initWithFromViewController:(id)arg1;
- (void)prepareForMessageWrap:(id)arg1 originFrame:(CGRect)arg2;
- (void)previewMessageWrap:(id)arg1 originFrame:(CGRect)arg2;
- (void)previewImage:(id)arg1 originFrame:(CGRect)arg2;
- (id)fromViewController;
- (void)setFromViewController:(id)arg1;
- (id)appMsgController;
- (void)setAppMsgController:(id)arg1;
- (CGRect)originFrame;
- (void)setOriginFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
