@interface SpeakTextResourceLoader : NSObject <SpeakTextLoadingRequestDelegate>
{
    BOOL m_ignoreCache; // +0x8
    unsigned int _requestedIndex; // +0xc
    id <SpeakTextResourceLoaderDelegate> _delegate; // +0x10
    SpeakTextReporter * _reporter; // +0x18
    NSArray * _extInfos; // +0x20
    NSString * _originText; // +0x28
    NSMutableArray * _currentPieces; // +0x30
    SpeakTextLoadingRequest * _loadingRequest; // +0x38
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
- (id)originText;
- (void)setOriginText:(id)arg1;
- (void)setCurrentPieces:(id)arg1;
- (id)loadingRequest;
- (void)setLoadingRequest:(id)arg1;
- (unsigned int)requestedIndex;
- (void)setRequestedIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end

