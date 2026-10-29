@interface NSDictionary (Collection)
+ (id)fromData:(id)arg1;
+ (id)fromString:(id)arg1;
- (id)toString;
- (id)toJson;
- (id)except:(id)arg1;
- (id)only:(id)arg1;
- (id)merge:(id)arg1;
- (void)each:(id /* block */)arg1;
- (id)filter:(id /* block */)arg1;
- (id)reject:(id /* block */)arg1;
- (id)map:(id /* block */)arg1;
- (id /* block */)dictionaryMerge;
- (id /* block */)dictionarySetKV;
@end

