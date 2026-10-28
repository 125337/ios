@interface CSearchedContact : CContact
{
    unsigned int matchType; // +0x348
    NSString * searchString; // +0x350
}
+ (id)contactFromSearchContactResp:(id)arg1 Req:(id)arg2;
- (unsigned int)matchType;
- (void)setMatchType:(unsigned int)arg1;
- (id)searchString;
- (void)setSearchString:(id)arg1;
- (void).cxx_destruct;
@end
