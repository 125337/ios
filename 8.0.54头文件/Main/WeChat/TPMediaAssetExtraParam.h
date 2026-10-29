@interface TPMediaAssetExtraParam : NSObject
{
    NSMutableDictionary * _objectMap; // +0x8
}
- (id)init;
- (void)setExtraIntValue:(long long)arg1 forKey:(id)arg2;
- (long long)intValueForKey:(id)arg1;
- (void)setExtraStringValue:(id)arg1 forKey:(id)arg2;
- (id)stringValueForKey:(id)arg1;
- (void)setExtraObjectValue:(id)arg1 forKey:(id)arg2;
- (id)objectValueForKey:(id)arg1;
- (id)objectMap;
- (void)setObjectMap:(id)arg1;
- (void).cxx_destruct;
@end

