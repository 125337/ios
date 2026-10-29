@interface SearchResult : NSObject
{
    unsigned char _weight; // +0x8
    NSString * _keyword; // +0x10
}
- (id)initWithKeyword:(id)arg1 weight:(unsigned char)arg2;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (unsigned char)weight;
- (void)setWeight:(unsigned char)arg1;
- (void).cxx_destruct;
@end
