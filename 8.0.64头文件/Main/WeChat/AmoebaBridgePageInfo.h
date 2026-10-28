@interface AmoebaBridgePageInfo : NSObject
{
    unsigned int _pageId; // +0x8
    NSString * _pageName; // +0x10
    NSMutableDictionary * _params; // +0x18
}
- (id)init;
- (unsigned int)pageId;
- (void)setPageId:(unsigned int)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
