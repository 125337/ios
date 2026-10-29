@interface CBTCoopV2ChatEmojiViewModel : CBTCoopV2AsstBoardViewModel <IStoreEmotionSingleDownloadMgrExt>
{
    BOOL _hasRegisteredDownloadExt; // +0x8
    unsigned int _gameType; // +0xc
    unsigned int _gameContent; // +0x10
    NSString * _md5; // +0x18
    unsigned long long _state; // +0x20
    NSString * _imagePath; // +0x28
    id <CBTCoopV2ChatEmojiImageDelegate> _imageDelegate; // +0x30
}
+ (XmlReaderNode_t *)findMsgNodeFromRoot:(XmlReaderNode_t *)arg1;
+ (id)stringForAttribute:(const char *)arg1 node:(XmlReaderNode_t *)arg2;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (BOOL)canRenderChatEmojiCard;
- (CGSize)displaySize;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (void)ensureImageDownload;
- (void)retryImageDownload;
- (void)notifyStateChanged;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imagePath:(id)arg2;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)updateFromXML:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (unsigned int)gameType;
- (void)setGameType:(unsigned int)arg1;
- (unsigned int)gameContent;
- (void)setGameContent:(unsigned int)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (id)imageDelegate;
- (void)setImageDelegate:(id)arg1;
- (BOOL)hasRegisteredDownloadExt;
- (void)setHasRegisteredDownloadExt:(BOOL)arg1;
- (void).cxx_destruct;
@end
