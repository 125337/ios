@interface YYTextAsyncLayerDisplayTask : NSObject
{
    id /* block */ _willDisplay; // +0x8
    id /* block */ _display; // +0x10
    id /* block */ _didDisplay; // +0x18
}
- (id /* block */)willDisplay;
- (void)setWillDisplay:(id /* block */)arg1;
- (id /* block */)display;
- (void)setDisplay:(id /* block */)arg1;
- (id /* block */)didDisplay;
- (void)setDidDisplay:(id /* block */)arg1;
- (void).cxx_destruct;
@end

