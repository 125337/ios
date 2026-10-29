@interface C2CVideoDownloadTaskInfo : NSObject
{
    BOOL _isPlaying; // +0x8
    BOOL _isRunning; // +0x9
    BOOL _isSlient; // +0xa
    BOOL _isSaveAlbum; // +0xb
    NSString * _chatName; // +0x10
    CMessageWrap * _msgWrap; // +0x18
    WCDownloadArgsWrap * _downloadArgsWrap; // +0x20
}
+ (void)onVideoProgressUpdate:(id)arg1 progressInfo:(id)arg2;
+ (void)onVideoComplete:(id)arg1 argsWrap:(id)arg2 isSaveAlbum:(BOOL)arg3;
- (BOOL)isRawTask;
- (id)key;
- (id)initWithDownloadArgsWrap:(id)arg1 isSaveAlbum:(BOOL)arg2 isSlient:(BOOL)arg3;
- (void)dealloc;
- (void)setIsSaveAlbum:(BOOL)arg1;
- (void)configCallback;
- (void)configRawVideoCallback;
- (BOOL)checkIfBlockTaskBeforeStart;
- (id)description;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (BOOL)isSlient;
- (void)setIsSlient:(BOOL)arg1;
- (BOOL)isSaveAlbum;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)downloadArgsWrap;
- (void)setDownloadArgsWrap:(id)arg1;
- (void).cxx_destruct;
@end
