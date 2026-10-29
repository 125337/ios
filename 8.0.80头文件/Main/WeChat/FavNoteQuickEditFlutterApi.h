@interface FavNoteQuickEditFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)setMaxHeightHeight:(double)arg1 completion:(id /* block */)arg2;
- (void)clearTextWithCompletion:(id /* block */)arg1;
- (void)checkStopRecordWithCompletion:(id /* block */)arg1;
- (void)getCurrentTextWithCompletion:(id /* block */)arg1;
- (void)dismissKeyboardWithCompletion:(id /* block */)arg1;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
