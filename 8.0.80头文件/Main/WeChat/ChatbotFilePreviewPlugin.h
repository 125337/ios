@interface ChatbotFilePreviewPlugin : NSObject <MMFlutterPlugin>
{
    FlutterMethodChannel * _channel; // +0x8
    CBTAsstBoardFileViewModel * _previewingFileViewModel; // +0x10
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)handlePreviewLocalFile:(id)arg1 result:(id /* block */)arg2;
- (void)_presentPreviewWithFilePath:(id)arg1;
- (id)_stringFromArgs:(id)arg1 key:(id)arg2;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)previewingFileViewModel;
- (void)setPreviewingFileViewModel:(id)arg1;
- (void).cxx_destruct;
@end
