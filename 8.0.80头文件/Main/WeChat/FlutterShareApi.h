@interface FlutterShareApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)triggerDownloadItem:(id)arg1 completion:(id /* block */)arg2;
- (void)onTranslationSuccessMediaId:(id)arg1 translateImagePath:(id)arg2 completion:(id /* block */)arg3;
- (void)onTranslationCanceledMediaId:(id)arg1 completion:(id /* block */)arg2;
- (void)openPartialTranslationSheetText:(id)arg1 completion:(id /* block */)arg2;
- (void)onSnsImageFavoriteClickMediaId:(id)arg1 completion:(id /* block */)arg2;
- (void)onSnsVideoFavoriteClickMediaId:(id)arg1 completion:(id /* block */)arg2;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
