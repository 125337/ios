@interface RfxPagFile : NSObject
{
    id _impl; // +0x8
}
+ (id)Load:(id)arg1;
+ (id)Load:(const void *)arg1 size:(unsigned long long)arg2;
- (id)initWithImpl:(id)arg1;
- (id)impl;
- (void)dealloc;
- (long long)duration;
- (long long)width;
- (long long)height;
- (void)setText:(id)arg1 forAllTextLayersWithName:(id)arg2;
- (void)resetTextForAllTextLayersWithName:(id)arg1;
- (id)copyOriginal;
@end

