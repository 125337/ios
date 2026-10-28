@interface TextStateBrandLogic : NSObject
{
    unsigned int _getA8KeyScene; // +0x8
    unsigned int _action; // +0xc
    NSDictionary * _attachInfo; // +0x10
    id <TextStateBrandLogicDelegate> _delegate; // +0x18
    NSString * _URLString; // +0x20
    TextStateBrandBaseSignature * _signature; // +0x28
    TextStatusBrandInfo * _brandInfo; // +0x30
    TextStatePublishSourceInfo * _sourceInfo; // +0x38
}
- (id)initWithURLString:(id)arg1;
- (id)initWithSignature:(id)arg1;
- (void)exchangeBrandInfoWithCompletionBlock:(id /* block */)arg1;
- (void)performActionWithViewController:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getSourceInfoFromExtInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)publishTextStateFromViewController:(id)arg1;
- (void)onOpenWebWithURL:(id)arg1 viewController:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)onNoActionAvailableWithViewController:(id)arg1 completionBlock:(id /* block */)arg2;
- (unsigned int)getA8KeyScene;
- (void)setGetA8KeyScene:(unsigned int)arg1;
- (id)attachInfo;
- (void)setAttachInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)URLString;
- (void)setURLString:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)brandInfo;
- (void)setBrandInfo:(id)arg1;
- (unsigned int)action;
- (void)setAction:(unsigned int)arg1;
- (id)sourceInfo;
- (void)setSourceInfo:(id)arg1;
- (void).cxx_destruct;
@end
