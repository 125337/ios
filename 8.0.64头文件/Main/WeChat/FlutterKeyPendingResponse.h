@interface FlutterKeyPendingResponse : NSObject
{
    FlutterEmbedderKeyResponder * _responder; // +0x8
    unsigned long long _responseId; // +0x10
}
- (id)initWithHandler:(id)arg1 responseId:(unsigned long long)arg2;
- (id)responder;
- (unsigned long long)responseId;
- (void)setResponseId:(unsigned long long)arg1;
@end
