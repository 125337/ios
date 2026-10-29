@interface WCFinderRedDotMgrDataSourcePiplineFilter : NSObject
{
    NSString * _name; // +0x8
    id /* block */ _filterBlock; // +0x10
}
- (id)initWithName:(id)arg1 filterBlock:(id /* block */)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (id /* block */)filterBlock;
- (void)setFilterBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

