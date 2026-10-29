@interface WSPersonalizedRecommendManager : NSObject
{
     mappedKV; // +0x8
     key; // +0x10
     provider; // +0x0
}
- (BOOL)localValue;
- (void)setLocalValue:(BOOL)arg1;
- (id)getServerValue;
- (id)setServerValueWithIsOn:(BOOL)arg1;
- (id)init;
- (void).cxx_destruct;
@end

