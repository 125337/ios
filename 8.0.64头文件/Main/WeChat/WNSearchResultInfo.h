@interface WNSearchResultInfo : NSObject
{
    BOOL _isFromDesc; // +0x8
    unsigned long long _location; // +0x10
    unsigned long long _type; // +0x18
    NSArray * _subSearchResultInfos; // +0x20
}
- (unsigned long long)location;
- (void)setLocation:(unsigned long long)arg1;
- (BOOL)isFromDesc;
- (void)setIsFromDesc:(BOOL)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)subSearchResultInfos;
- (void)setSubSearchResultInfos:(id)arg1;
- (void).cxx_destruct;
@end
