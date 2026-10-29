@interface SpeakTextResourceLoader : NSObject <SpeakTextLoadingRequestDelegate>
{
    BOOL m_ignoreCache; // +0x8
    BOOL _useNewTTS; // +0x9
    int _scene; // +0xc
    unsigned int _requestedIndex; // +0x10
    id <SpeakTextResourceLoaderDelegate> _delegate; // +0x18
    SpeakTextReporter * _reporter; // +0x20
    NSArray * _extInfos; // +0x28
    NSString * _language; // +0x30
    NSString * _originText; // +0x38
    NSMutableArray * _currentPieces; // +0x40
    SpeakTextLoadingRequest * _loadingRequest; // +0x48
}
- (id)initWithText:(id)arg1;
- (id)currentPieces;
- (id)extInfos;
- (id)getPieceAtIndex:(unsigned int)arg1;
- (void)startLoadingRequestIfNeed;
- (void)onLoadingRequest:(id)arg1 receiveData:(id)arg2 voiceFormat:(unsigned int)arg3 reachEnd:(BOOL)arg4 extInfos:(id)arg5;
- (void)onLoadingRequestFail:(id)arg1;
- (id)getPBFilePath:(id)arg1;
- (void)loadPiecesFromLocal;
- (void)savePiecesToLocal;
- (void)loadExtInfosFromLocal;
- (void)saveExtInfosToLocal;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void)setExtInfos:(id)arg1;
- (BOOL)useNewTTS;
- (void)setUseNewTTS:(BOOL)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)originText;
- (void)setOriginText:(id)arg1;
- (void)setCurrentPieces:(id)arg1;
- (id)loadingRequest;
- (void)setLoadingRequest:(id)arg1;
- (unsigned int)requestedIndex;
- (void)setRequestedIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end
