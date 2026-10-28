@interface WCFinderFeedMapper2 : NSObject
{
    NSMapTable * _converters; // +0x8
    NSMapTable * _duplicates; // +0x10
    NSMutableArray * _filters; // +0x18
}
- (id)init;
- (void)addCustomForItem:(Class)arg1 converter:(Class)arg2 copyer:(Class)arg3;
- (void)addFilter:(id /* block */)arg1;
- (id)mapContentTid:(id)arg1;
- (id)mapContentVM:(id)arg1 scene:(int)arg2;
- (id)convertVMFromExistVM:(id)arg1 scene:(int)arg2;
- (id)converters;
- (void)setConverters:(id)arg1;
- (id)duplicates;
- (void)setDuplicates:(id)arg1;
- (id)filters;
- (void)setFilters:(id)arg1;
- (void).cxx_destruct;
@end
