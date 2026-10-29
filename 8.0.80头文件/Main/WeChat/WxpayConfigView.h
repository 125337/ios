@interface WxpayConfigView : NSObject
{
    NSDictionary * _values; // +0x8
}
- (id)initWithValues:(id)arg1;
- (id)wxpay_values;
- (BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (long long)integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (id)stringForKey:(id)arg1 defaultValue:(id)arg2;
- (id)jsonForKey:(id)arg1 defaultValue:(id)arg2;
- (id)boolMapForKey:(id)arg1;
- (void).cxx_destruct;
@end
