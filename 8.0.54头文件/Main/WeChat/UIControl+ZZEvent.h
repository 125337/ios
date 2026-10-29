@interface UIControl (ZZEvent)
- (void)setControlEvents:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)addControlEvents:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)removeControlEvents:(unsigned long long)arg1;
- (id)controlTargetList;
@end

