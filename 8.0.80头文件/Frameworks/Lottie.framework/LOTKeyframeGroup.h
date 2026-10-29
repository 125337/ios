@interface LOTKeyframeGroup : NSObject
{
    NSArray * _keyframes; // +0x8
}
- (id)initWithData:(id)arg1;
- (void)buildKeyframesFromData:(id)arg1;
- (void)remapKeyframesWithBlock:(id /* block */)arg1;
- (id)keyframes;
- (void).cxx_destruct;
@end
