@interface TextTranslateCgi : NSObject <PBMessageObserverDelegate>
{
    int _scene; // +0x8
    unsigned int _requestID; // +0xc
    NSString * _originText; // +0x10
    id /* block */ _completeBlock; // +0x18
}
- (id)initWithText:(id)arg1;
- (void)startTranslate:(id /* block */)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)originText;
- (void)setOriginText:(id)arg1;
- (unsigned int)requestID;
- (void)setRequestID:(unsigned int)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

