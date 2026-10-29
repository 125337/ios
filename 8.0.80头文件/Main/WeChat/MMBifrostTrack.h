@interface MMBifrostTrack : NSObject
{
    NSString * _protocolName; // +0x8
    NSString * _selectorName; // +0x10
    id /* block */ _clearCallback; // +0x18
    NSMutableDictionary * _sourceToTargetsDict; // +0x20
}
- (id)init;
- (id)initWithProtocolName:(id)arg1 selectorName:(id)arg2;
- (void)cacheTargets:(id)arg1 forSource:(id)arg2;
- (id)cacheTargetsForSource:(id)arg1;
- (id)protocolName;
- (void)setProtocolName:(id)arg1;
- (id)selectorName;
- (void)setSelectorName:(id)arg1;
- (id /* block */)clearCallback;
- (void)setClearCallback:(id /* block */)arg1;
- (id)sourceToTargetsDict;
- (void)setSourceToTargetsDict:(id)arg1;
- (void).cxx_destruct;
@end
