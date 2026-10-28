@interface WCMusicSearchContext : NSObject
{
    unsigned int _offset; // +0x8
    NSString * _query; // +0x10
    NSObject * _customRequestExtraData; // +0x18
}
- (id)initWithQuery:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (unsigned int)offset;
- (void)setOffset:(unsigned int)arg1;
- (id)customRequestExtraData;
- (void)setCustomRequestExtraData:(id)arg1;
- (void).cxx_destruct;
@end
