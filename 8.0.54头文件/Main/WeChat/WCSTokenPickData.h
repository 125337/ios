@interface WCSTokenPickData : NSObject
{
    char _type; // +0x8
    BOOL _multiSelect; // +0x9
    NSString * _nsTokenQuery; // +0x10
    NSString * _nsTokenUsr; // +0x18
    long long _resultSection; // +0x20
    long long _selectedIndex; // +0x28
    NSMutableArray * _arrResult; // +0x30
    NSMutableDictionary * _dicMatchTip; // +0x38
    NSString * _sectionTitle; // +0x40
    NSMutableArray * _arrMultiSelectedUsr; // +0x48
    NSMutableDictionary * _dicMultiSelectedUsrIndex; // +0x50
}
- (char)type;
- (void)setType:(char)arg1;
- (id)nsTokenQuery;
- (void)setNsTokenQuery:(id)arg1;
- (id)nsTokenUsr;
- (void)setNsTokenUsr:(id)arg1;
- (long long)resultSection;
- (void)setResultSection:(long long)arg1;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (id)arrResult;
- (void)setArrResult:(id)arg1;
- (id)dicMatchTip;
- (void)setDicMatchTip:(id)arg1;
- (id)sectionTitle;
- (void)setSectionTitle:(id)arg1;
- (BOOL)multiSelect;
- (void)setMultiSelect:(BOOL)arg1;
- (id)arrMultiSelectedUsr;
- (void)setArrMultiSelectedUsr:(id)arg1;
- (id)dicMultiSelectedUsrIndex;
- (void)setDicMultiSelectedUsrIndex:(id)arg1;
- (void).cxx_destruct;
@end

