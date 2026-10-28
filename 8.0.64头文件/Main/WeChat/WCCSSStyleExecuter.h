@interface WCCSSStyleExecuter : NSObject
{
    NSMutableDictionary * _dicStyleRule; // +0x8
}
- (id)init;
- (void)executeWithTarget:(id)arg1 cssStyles:(id)arg2;
- (void)applyRuleWithTarget:(id)arg1 value:(id)arg2 PropertySetter:(id /* block */)arg3;
- (id)dicStyleRule;
- (void)setDicStyleRule:(id)arg1;
- (void).cxx_destruct;
@end
