@interface TXCVideoBindableParallelGroup : NSObject <TXIVideoBindable>
{
    NSMutableArray * _filters; // +0x8
    id <TXIVideoBindable> _nextBindable; // +0x10
}
- (id)init;
- (id)initWithFilters:(id)arg1;
- (void)addFilter:(id)arg1;
- (void)removeFilter:(id)arg1;
- (id)bindTo:(id)arg1;
- (void)processVideoFrameResult:(id)arg1;
- (id)filters;
- (void)setFilters:(id)arg1;
- (id)nextBindable;
- (void)setNextBindable:(id)arg1;
- (void).cxx_destruct;
@end

