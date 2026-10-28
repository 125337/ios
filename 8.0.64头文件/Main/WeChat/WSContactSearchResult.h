@interface WSContactSearchResult : NSObject
{
    unsigned int _sugType; // +0x8
    NSString * _keyword; // +0x10
    NSMutableArray * _arrResult; // +0x18
    NSDictionary * _dicSearchMatchTip; // +0x20
    NSString * _sugTitle; // +0x28
}
- (id)toJSON;
- (id)markHighlightString:(id)arg1 arrKeywords:(id)arg2;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (id)arrResult;
- (void)setArrResult:(id)arg1;
- (id)dicSearchMatchTip;
- (void)setDicSearchMatchTip:(id)arg1;
- (id)sugTitle;
- (void)setSugTitle:(id)arg1;
- (unsigned int)sugType;
- (void)setSugType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
