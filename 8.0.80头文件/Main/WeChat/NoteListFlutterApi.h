@interface NoteListFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)onNoteListBatchReadyItems:(id)arg1 completion:(id /* block */)arg2;
- (void)onNoteListLoadFinishedHasMore:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)onNoteItemUpdatedItem:(id)arg1 completion:(id /* block */)arg2;
- (void)onNativeMultiSelectCancelWithCompletion:(id /* block */)arg1;
- (void)scrollToFirstNonPinTopNoteWithCompletion:(id /* block */)arg1;
- (void)onWriteNoteButtonTappedWithCompletion:(id /* block */)arg1;
- (void)syncWriteNoteButtonFrameX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 completion:(id /* block */)arg5;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
