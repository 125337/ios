@interface FTSMultiContactResultWrap : NSObject
{
    char _resultType; // +0x8
    NSString * _keyword; // +0x10
    NSArray * _arrResultContact; // +0x18
    NSDictionary * _dicSearchMatchTip; // +0x20
}
- (char)resultType;
- (void)setResultType:(char)arg1;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (id)arrResultContact;
- (void)setArrResultContact:(id)arg1;
- (id)dicSearchMatchTip;
- (void)setDicSearchMatchTip:(id)arg1;
- (void).cxx_destruct;
@end

