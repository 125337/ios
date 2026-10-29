@interface WAJSEventHandler_operateWxappCGI : WAJSEventHandler_BaseEvent
{
    unsigned int _curCgi; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (unsigned int)curCgi;
- (void)setCurCgi:(unsigned int)arg1;
@end

