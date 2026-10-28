@interface TingMusicBottomSheetUtils : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)showAlbumPageFromMusicItemWithCompletion:(id /* block */)arg1;
- (void)minimizeWithCompletion:(id /* block */)arg1;
- (void)dislikeWithCompletion:(id /* block */)arg1;
- (void)complaintWithCompletion:(id /* block */)arg1;
- (void)editAlbumWithCompletion:(id /* block */)arg1;
- (void)deleteAlbumWithCompletion:(id /* block */)arg1;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
