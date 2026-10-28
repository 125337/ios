@interface TextStateRedDotLogic : NSObject
{
    id <TextStateRedDotLogicDelegate> _delegate; // +0x8
    NSMutableDictionary * _redDotToHandlerDict; // +0x10
}
- (id)init;
- (BOOL)shouldShowRedDot:(unsigned int)arg1;
- (void)disposeRedDot:(unsigned int)arg1;
- (id)handlerForRedDot:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)redDotToHandlerDict;
- (void)setRedDotToHandlerDict:(id)arg1;
- (void).cxx_destruct;
@end
