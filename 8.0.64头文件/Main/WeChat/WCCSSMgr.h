@interface WCCSSMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _dicCssClass; // +0x8
    WCCSSStyleExecuter * _styleExecuter; // +0x10
    MMRuleSetList * _ruleSetList; // +0x18
    NSHashTable * _hashTable; // +0x20
}
- (void)onServiceInit;
- (id)getStylesWithClass:(id)arg1;
- (id)getStylesDicWithClass:(id)arg1;
- (void)applyRules:(id)arg1 ToTarget:(id)arg2;
- (void)addHotReloaderTarger:(id)arg1;
- (void)parseNewStyleCss;
- (void)reloadAllViewCssStyle;
- (void)onFileChange:(id)arg1;
- (id)dicCssClass;
- (void)setDicCssClass:(id)arg1;
- (id)styleExecuter;
- (void)setStyleExecuter:(id)arg1;
- (id)ruleSetList;
- (void)setRuleSetList:(id)arg1;
- (id)hashTable;
- (void)setHashTable:(id)arg1;
- (void).cxx_destruct;
@end
