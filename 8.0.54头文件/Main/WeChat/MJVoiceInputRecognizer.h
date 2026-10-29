@interface MJVoiceInputRecognizer : NSObject
{
    BOOL _isRecognitionEnded; // +0x8
    BOOL _isEndRequestSent; // +0x9
    BOOL _isEndResponseReceived; // +0xa
    id <MJVoiceInputRecognizerDelegate> _delegate; // +0x10
    NSString * _identifier; // +0x18
    unsigned long long _state; // +0x20
    unsigned long long _numRequests; // +0x28
    unsigned long long _numResponses; // +0x30
    NSMutableArray * _captionItems; // +0x38
    NSMutableDictionary * _requestStatesByIndex; // +0x40
}
+ (BOOL)isResponseStable:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)dealloc;
- (unsigned long long)updateRecognizerState;
- (void)updateRequestAtIndex:(unsigned int)arg1 toState:(unsigned long long)arg2;
- (void)appendRecognitionDataSlice:(id)arg1 index:(unsigned int)arg2 isEnd:(BOOL)arg3;
- (void)requestSpeechResultFromData:(id)arg1 sliceIndex:(unsigned int)arg2 isEnd:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (long long)requestSpeechRecognitionByILinkWithAudioData:(id)arg1 sliceIndex:(long long)arg2 isEnd:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (BOOL)isRecognitionEnded;
- (void)setIsRecognitionEnded:(BOOL)arg1;
- (BOOL)isEndRequestSent;
- (void)setIsEndRequestSent:(BOOL)arg1;
- (BOOL)isEndResponseReceived;
- (void)setIsEndResponseReceived:(BOOL)arg1;
- (unsigned long long)numRequests;
- (void)setNumRequests:(unsigned long long)arg1;
- (unsigned long long)numResponses;
- (void)setNumResponses:(unsigned long long)arg1;
- (id)captionItems;
- (void)setCaptionItems:(id)arg1;
- (id)requestStatesByIndex;
- (void)setRequestStatesByIndex:(id)arg1;
- (void).cxx_destruct;
@end

