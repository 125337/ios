@interface WCFinderClientUDFCollection : NSObject
{
    NSArray * _unitsSnapshot; // +0x8
}
- (id)init;
- (void)setValue:(id)arg1 forKey:(id)arg2 viewController:(id)arg3;
- (void)addEntries:(id)arg1 viewController:(id)arg2;
- (id)topDictionary;
- (id)mergedDictionary;
- (id)valuesForKey:(id)arg1;
- (void)updateUDFForViewController:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)unitsSnapshot;
- (void)setUnitsSnapshot:(id)arg1;
- (void).cxx_destruct;
@end
