@interface WAJSEventHandler_openWeComUserProfile : WAJSEventHandler_BaseEvent
{
    NSDictionary * _reqDic; // +0x8
    unsigned long long _scene; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (void)showOpenIMContactInfoForThirdAppViewControllerWithDataUrl:(id)arg1 targetContact:(id)arg2 spamWording:(id)arg3;
- (id)reqDic;
- (void)setReqDic:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

