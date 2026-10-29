@interface WebviewJSEventHandler_publishTextState : WebviewJSEventHandlerBase <TextStatePublishViewControllerDelegate, MMImageLoaderObserver>
{
    TextStatePublishSourceInfo * _sourceInfo; // +0x8
    TextStatePublishConfiguration * _configuration; // +0x10
    NSString * _imageURLString; // +0x18
    NSDictionary * _attachInfo; // +0x20
}
+ (unsigned int)dataTypeForString:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (BOOL)checkPublishSourceInfo:(id)arg1 event:(id)arg2 resultDict:(id)arg3;
- (void)jumpToPublishStatusVC:(id)arg1 event:(id)arg2 params:(id)arg3 resultDict:(id)arg4;
- (void)jumpToTextStatePublishViewController;
- (id)jumpLiteAppInfoFromDictionary:(id)arg1;
- (id)dataItemsFromJSON:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)onTextStatePublishedWithIconId:(id)arg1 iconDescription:(id)arg2;
- (void)onTextStatePublishCancelled;
- (id)sourceInfo;
- (void)setSourceInfo:(id)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (id)imageURLString;
- (void)setImageURLString:(id)arg1;
- (id)attachInfo;
- (void)setAttachInfo:(id)arg1;
- (void).cxx_destruct;
@end

